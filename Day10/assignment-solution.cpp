#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
protected:
    double number1, number2;

public:
    // Utility function to take two numbers
    void input_simple_numbers(void)
    {
        cout << "Enter two numbers for basic operations : ";
        cin >> number1 >> number2;
    }
    // Function to perform and display basic arithmetic operation
    void display_simple_operations(void) const
    {
        cout << "Basic Arithmetic Operations : \n";
        cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
        cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
        cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
        if (number2 != 0)
        {

            cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
        }
        else
        {
            cout << "Division by zero is not defined.\n";
        }
    };
};

// Base Class 2 : Scientific Calculator
class ScientificCalculator
{
protected:
    double number1, number2;

public:
    // Utility function to input two numbers
    void input_scientific_numbers(void)
    {
        cout << "Enter two numbers for scientific operations : \n";
        cin >> number1 >> number2;
    }
    // Function to perform and display scientific operations
    void display_scientific_operations(void) const
    {
        cout << "Scientific Operations:\n";
        cout << "Square root of " << number1 << " = " << sqrt(number1) << endl;
        cout << "Power : " << number1 << "^" << number2 << " = " << pow(number1, number2) << endl;
        cout << "Sine of " << number1 << " (radians) = " << sin(number1) << endl;
        cout << "Cosine of " << number1 << " (radians) = " << cos(number1) << endl;
    };
};

// Derived Class: HybridCalculator inherits from both SimpleCalculator and ScientificCalculator

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    // function to display results of both calculators
    void display_all_operations(void)
    {
        cout << "Results from simple Calculator : \n";
        display_simple_operations();
        cout << "\nResults from scientific calculator:\n";
        display_scientific_operations();
    }
};
int main()
{
    HybridCalculator myCalculator;
    myCalculator.input_simple_numbers();
    myCalculator.input_scientific_numbers();
    // Display results of all operations
    myCalculator.display_all_operations();
    return 0;
}

/*
Q1. What type of Inheritance are you using?
- This example uses **Multiple Inheritance** because the `HybridCalculator` class inherits from two base classes: `SimpleCalculator` and `ScientificCalculator`.

Q2. Which mode of inheritance are you using?
- The **public mode** of inheritance is used, ensuring that public and protected members of the base classes remain accessible in the derived class.

Q3. Create an object of Hybrid Calculator and display results of simple and scientific calculator.
- An object `myCalculator` of the `HybridCalculator` class is created in the `main` function.
- It performs both simple and scientific calculations using the input numbers.

Q4. How is code reusability implemented?
- **Code Reusability** is implemented by inheriting functionalities of `SimpleCalculator` and `ScientificCalculator` in the `HybridCalculator` class.
- Instead of rewriting the logic for arithmetic and scientific operations, the derived class leverages the base classes' functions, reducing redundancy and improving maintainability.
*/