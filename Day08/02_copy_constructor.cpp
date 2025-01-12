#include <iostream>
using namespace std;

// TOPICS COVERED
// 1. Default Constructor
// 2. Parameterized Constructor
// 3. Copy Constructor in C++

// STORY:
// Imagine you're at a tea stall in Dhaka. The tea seller has a "master" glass that he uses to measure tea for customers.
// If he wants to serve tea in another glass that looks just like the master glass, he can either pour tea directly from
// the master glass (like copying data) or make an exact duplicate of the master glass using a mold (like a copy constructor).
// Let’s see how this idea works in code!

class Glass
{
private:
    int teaVolume; // Tea volume in milliliters (default is 0)

public:
    // Default Constructor
    Glass()
    {
        teaVolume = 0; // Empty glass
    }

    // Parameterized Constructor
    Glass(int volume)
    {
        teaVolume = volume;
    }

    // Copy Constructor
    Glass(Glass &originalGlass)
    {
        cout << "Copy constructor called!!! (Glass is duplicated)" << endl;
        teaVolume = originalGlass.teaVolume; // Copy tea volume from another glass
    }

    // Display method to show tea volume in the glass
    void display()
    {
        cout << "This glass contains " << teaVolume << " ml of tea.\n";
    }
};

int main()
{
    // Real-life tea stall scenario
    Glass masterGlass(200); // Master glass filled with 200 ml of tea
    masterGlass.display();

    Glass duplicateGlass(masterGlass); // Copy constructor invoked
    duplicateGlass.display();

    Glass emptyGlass;         // Empty glass created
    emptyGlass = masterGlass; // Assignment operator used (copy constructor NOT invoked)
    emptyGlass.display();

    Glass anotherGlass = masterGlass; // Copy constructor invoked
    anotherGlass.display();

    // Explanation:
    // 1. The "masterGlass" is like the tea stall's original measuring glass.
    // 2. "duplicateGlass" is made using the copy constructor, resembling the master glass.
    // 3. "emptyGlass" is an existing glass filled later, so no copy constructor is invoked.
    // 4. "anotherGlass" is created directly from the master glass, so the copy constructor is invoked.

    return 0;
}

// NOTES:
// 1. What is a Copy Constructor?
//    - A copy constructor in C++ is a special function that creates a new object by copying the data from an existing object.
//    - Example: Imagine your friend buys a new phone. You like it so much that you buy the exact same model.
//      The copy constructor is like the store selling you the same phone based on your friend's choice.

// 2. Why is it Needed?
//    - It ensures that all the data from one object is copied accurately into another object.
//    - Example: Suppose your friend gives you their playlist of songs. A copy constructor ensures you get the same playlist,
//      song by song, without missing any tracks.

// 3. Compiler-Supplied Copy Constructor:
//    - If you don't create your own copy constructor, C++ will create one for you.
//    - But this default version only does a "shallow copy" (just copies the surface, not the full data).
//    - Example: Imagine you borrow your friend’s playlist, but instead of giving you the songs,
//      they just give you a link to their music folder. If they delete their songs, you lose access too!
//      (This is why shallow copying can cause problems.)

// 4. Difference Between Assignment Operator (=) and Copy Constructor:
//    - Assignment Operator: Used when you already have an object and just want to copy data into it.
//      Example: Your tea glass is empty. You pour tea from your friend's glass (you are using the assignment operator).
//    - Copy Constructor: Used when creating a brand-new object and initializing it with another object's data.
//      Example: The tea stall owner makes a new glass identical to the original glass using a mold (this is a copy constructor).

// KEY TAKEAWAYS:
// 1. Automatic Invocation:
//    - A copy constructor is called automatically when:
//      a) You create a new object and initialize it with another object.
//         Example: You borrow your friend's playlist by creating a duplicate playlist on your account.
//      b) An object is passed by value to a function.
//         Example: You lend your favorite novel to a friend (function). A copy constructor ensures they read the same story.
//      c) An object is returned by value from a function.
//         Example: A bakery gives you a cake (function output). The cake is a copy of the original recipe.

// 2. Explicit Definition is Better:
//    - If your class uses pointers or dynamic memory, it’s better to define your own copy constructor.
//    - Example: If you’re sharing a "samosa recipe" and the copy only says "put samosa in the oven" without including the filling instructions,
//      your friend might end up with an empty samosa (shallow copy error). Instead, share the full recipe (deep copy).

// 3. Shallow vs. Deep Copy:
//    - Shallow Copy: Only copies the surface-level data, like sharing a link to a Google Doc instead of downloading it.
//    - Deep Copy: Creates a full new copy of the data, like downloading the Google Doc to your computer.

// CHARACTERISTICS OF COPY CONSTRUCTOR:
// 1. Takes a Reference Parameter:
//    - The copy constructor accepts the original object by reference, not by value, to avoid endless copying.
//    - Example: Imagine copying your friend's playlist into a new one. If the copy process kept asking for another playlist,
//      it would go on forever! Passing by reference solves this issue.

// 2. Default Copy Constructor:
//    - By default, C++ makes a simple copy of non-dynamic data.
//    - Example: It’s like copying a friend's handwritten notes without checking if they have attachments like diagrams or sticky notes.

// 3. Overridable:
//    - You can define your own copy constructor to customize the copying process.
//    - Example: If your friend's notes have diagrams, you can decide to photocopy both the text and diagrams instead of just the text.
