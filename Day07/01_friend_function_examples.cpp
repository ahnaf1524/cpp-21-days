#include <iostream>
using namespace std;
// Always forward declaration
class Y;
class X
{
public:
    int data;

    void setValue(int value)
    {
        data = value;
    }

    friend void add(X, Y);
};

class Y
{
public:
    int num;

    void setValue(int value)
    {
        num = value;
    }

    friend void add(X, Y);
};
// You cannot use the reference operator (&) with the arguments of a friend function in C++ because friend functions already have full access to the private and public members of the classes they are befriended to.

// 1. Friend Function Access: When you declare a function as a friend of a class, it grants that function the ability to access all members of the class, including private members. This access is similar to member functions of the class itself.

// 2. Passing by Value vs. Reference: In C++, arguments are typically passed by value. This means a copy of the argument is passed to the function. However, when you use the reference operator (&) with an argument, you are passing a reference to the original object. This allows the function to modify the original object directly.

// 3. Friend Function and Argument Passing: Since friend functions already have full access to the class members, there's no need to use the reference operator to modify the objects. They can directly access and modify the member variables of the objects passed as arguments.
// Analogy :
// Imagine a friend borrowing your book. You trust your friend completely and give them full access to your bookshelf (including locked areas). They can take the book they need (passing by value) or browse and read any book directly from the shelf (passing by reference through friend function). In both cases, your friend has full access to the books. Similarly, a friend function can access and modify the object's data members directly without needing a reference. If you intended to pass the objects by reference for efficiency reasons (avoiding unnecessary copying), you can remove the & from both the function declaration and the function call. This will still allow the friend function to modify the original objects.
// void add(X &o1, Y &o2) (Cause error)
// {
//     cout << "Summing datas of X and Y objects gives me " << o1.data + o2.num;
// }
void add(X o1, Y o2)
{
    cout << "Summing datas of X and Y objects gives me " << o1.data + o2.num;
}

int main()
{
    X a1;
    a1.setValue(3);
    Y b1;
    b1.setValue(5);
    add(a1, b1);
    return 0;
}