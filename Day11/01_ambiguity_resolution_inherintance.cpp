#include <iostream>
using namespace std;

//---- AMBIGUITY RESOLUTION IN INHERITANCE ---
// Real-life Analogy:
// Imagine a student (Student) learning from two teachers (Teacher1 and Teacher2). Both teachers have different methods of greeting the students.
// If the student tries to use both methods simultaneously, there will be confusion (ambiguity).
// The scope resolution operator (::) is used to specify which teacher's greeting method the student should follow.

// Base class 1: Teacher1
// Teacher 1's method to greet students
class Teacher1
{
public:
    // Teacher 1's method to greet students
    void greet(void)
    {
        cout << "Good Morning from Teacher 1!\n"; // Teacher 1's greeting
    }
};

// Base class 2: Teacher2
// Teacher 2's method to greet students
class Teacher2
{
public:
    // Teacher 2's method to greet students
    void greet(void)
    {
        cout << "Good Morning from Teacher 2!" << endl; // Teacher 2's greeting
    }
};

// Derived class: Student
// The Student class inherits from both Teacher1 and Teacher2 classes.
class Student : public Teacher1, public Teacher2
{
    int studentId; // Unique identifier for the student (not used in this example)

public:
    // The student resolves the ambiguity by specifying which teacher's greet method to follow.
    void greet(void)
    {
        // Here we explicitly call Teacher1's greet method using the scope resolution operator.
        Teacher1::greet(); // This resolves the ambiguity and calls the greet method from Teacher1.
    }
};

// Main program demonstrating how ambiguity resolution works in the Student class.
int main()
{
    // Creating objects of Teacher1 and Teacher2 to call their greet methods individually
    Teacher1 teacher1Obj; // Object of Teacher1 class
    Teacher2 teacher2Obj; // Object of Teacher2 class

    // Calling the greet function for both teachers individually
    teacher1Obj.greet(); // Teacher 1's greeting
    teacher2Obj.greet(); // Teacher 2's greeting

    // Creating an object of the Student class, which inherits from both Teacher1 and Teacher2
    Student studentObj;

    // The student (Student) class calls one teacher's method explicitly.
    studentObj.greet(); // Student follows Teacher 1's greeting because we specified it using scope resolution.

    return 0;
}

/*
Key Takeaways:
1. **Ambiguity**: When a derived class inherits functions with the same name from multiple base classes, ambiguity arises. The derived class may not know which function to call if both base classes have a method with the same name.
2. **Scope Resolution Operator (::)**: It is used to specify which base class function should be called in the derived class, thus resolving the ambiguity. In this case, we used it to select Teacher1's greet method.
3. **Inheritance**: The derived class (Student) can inherit functions from multiple base classes, but if the base classes share function names, ambiguity must be resolved explicitly using the scope resolution operator.

Purpose:
- The scope resolution operator helps to avoid ambiguity and allows the developer to select the exact function to be called from a particular base class.
- In real-world systems, this is particularly useful when different classes provide similar or identical functions, but the context dictates which one is appropriate to use.

Real-life Example:
Imagine a student (Student class) learning from two teachers (Teacher1 and Teacher2). If both teachers provide a similar lesson (greet function), the student must choose which teacher's lesson to follow. The scope resolution operator allows the student to do just that, either using Teacher 1's method or Teacher 2's method. This helps the student avoid confusion and ensures the correct greeting is used.

Characteristics:
1. **Avoids Confusion**: The scope resolution operator ensures that the derived class calls the correct method, preventing confusion when multiple base classes have methods with the same name.
2. **Clear Functionality**: By explicitly specifying the method using the scope resolution operator, the developer ensures that the correct functionality is executed. This makes the code clear and less error-prone.
3. **Flexibility**: The derived class can override the method, but if needed, it can still call the base class method using the scope resolution operator. This provides flexibility in how methods from base classes are used.

Summary for Beginners:
- When a derived class inherits methods from multiple base classes, and the base classes have methods with the same name, the compiler gets confused about which method to call.
- To solve this problem, you can use the **scope resolution operator (::)** to explicitly tell the compiler which base class method you want to use.
- In the provided example, we resolved the ambiguity by calling the greet method from **Teacher1** inside the **Student** class, which inherited from both **Teacher1** and **Teacher2**.

*/
