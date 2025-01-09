#include <iostream>
#include <string>
using namespace std;

// Friend Class Member Function Example - 01
class Engine
{
private:
    int horsePower;

public:
    Engine(int hp = 0) : horsePower(hp) {};
    // Friend class declaration
    friend class Car;
};

class Car
{
private:
    string brand;

public:
    Car(string carBrand) : brand(carBrand) {};
    // Member function of Car accessing private members of Engine
    void displayEngineDetails(const Engine &engine)
    {
        cout << "Car Brand : " << brand << endl;
        cout << "Engine Horsepower : " << engine.horsePower << "HP" << endl;
    }
};

// Friend Class Member Function Example - 02
class Recipe
{
private:
    string dishName;
    string secretIngredient;

public:
    Recipe(string name, string secret) : dishName(name), secretIngredient(secret) {};
    void displayRecipe() const
    {
        cout << "Dish : " << dishName << endl;
    }
    friend class Chef;
};

class Chef
{
private:
    string chefName;

public:
    Chef(string name) : chefName(name) {};
    void prepareDish(const Recipe &recipe)
    {
        cout << "Chef : " << chefName << " is preparing " << recipe.dishName << " using the secret ingredient : " << recipe.secretIngredient << "." << endl;
    }
    friend class Recipe;
};

int main()
{
    // Creating objects of Engine and Car
    Engine carEngine(250);
    Car myCar("Toyota");
    myCar.displayEngineDetails(carEngine);

    // Creating objects of Recipe and Chef
    Recipe pastaRecipe("Pasta Alfredo", "Truffle Oil");
    Chef headChef("Gordon Ramsay");

    // Displaying recipe details
    cout << "Recipe Details : " << endl;
    pastaRecipe.displayRecipe();

    // Chef prepares the dish
    cout << "\nPreparation Process : " << endl;
    headChef.prepareDish(pastaRecipe);

    return 0;
}

/* Explanation of Friend Class: https://shorturl.at/jW9x0

Properties of a Friend Class :
1. A `friend` class allows all member functions of one class to access the private and protected members of another class.
2. Friendship is not reciprocal: If Class A is a friend of Class B, Class B does not automatically become a friend of Class A.
3. Friendship is not inherited: A derived class does not inherit the friendship of its base class.
4. Friendship is established by explicitly declaring a class as a friend within another class.
5. A friend class can access private and protected members using objects of the class granting friendship.
// Why need forward declaration in class ?--> https://shorturl.at/BPI5U
Examples in the Code:
1. In the first example, the `Car` class is declared as a friend of the `Engine` class. This allows the `Car` class's member function `displayEngineDetails` to access the private member `horsePower` of the `Engine` class.
2. In the second example, the `Chef` class is declared as a friend of the `Recipe` class. This allows the `Chef` class's member function `prepareDish` to access the private members `dishName` and `secretIngredient` of the `Recipe` class.

Use Cases:
1. Friend classes are useful when two classes need to work closely together while still maintaining encapsulation.
2. Friendship should be used sparingly to preserve the principles of object-oriented programming and avoid unnecessary coupling between classes.
*/
