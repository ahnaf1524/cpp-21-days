#include <iostream>
using namespace std;
class GrandParent
{
protected:
    int age;

public:
    void setAge(int a)
    {
        age = a;
    }
};
class Parent : public GrandParent
{
public:
    void displayAge(void)
    {
        cout << "Age accessed in Parent: " << age << endl;
    }
};
class Child : public Parent
{
public:
    void modifyAge(void)
    {
        age += 5;
        cout << "Age modified in Child : " << age << endl;
    }
};
int main()
{
    Child childObj;
    // Setting and accessing protected data though hierarchy
    childObj.setAge(50);
    childObj.displayAge();
    childObj.modifyAge();
    return 0;
}