#include <iostream>
using namespace std;

// TOPICS COVERED
// Destructor in C++

int main()
{
    // Real-life example: A Bangladeshi Wedding Feast
    cout << "Welcome to the grand Bangladeshi Wedding Feast!" << endl;
    cout << "The event begins as we create the first guest - Mr. N1" << endl;

    class Guest
    {
        static int count; // Keeps track of the total number of guests
    public:
        // Constructor: Called when a guest arrives at the feast
        Guest()
        {
            count++;
            cout << "🎉 Guest " << count << " has arrived at the feast. The hall is buzzing with excitement!" << endl;
        }

        // Destructor: Called when a guest leaves the feast
        ~Guest()
        {
            cout << "👋 Guest " << count << " has finished their meal and left the feast. The hall feels a bit quieter now." << endl;
            count--;
        }
    };

    int Guest::count = 0; // Initialize the static count variable

    Guest g1; // First guest arrives
    {
        cout << "🎊 New guests are entering the hall..." << endl;
        Guest g2, g3; // Two more guests arrive
        cout << "🍛 Guests are enjoying delicious biryani, sweets, and laughter inside the hall!" << endl;
        cout << "🏃‍♂️ Guests are now leaving the hall..." << endl;
    } // The block ends, and g2 and g3 leave

    cout << "✨ Back to the main function - only the first guest, Mr. N1, remains." << endl;
    return 0; // Program ends, and g1 leaves
}

// OUTPUT:
// Welcome to the grand Bangladeshi Wedding Feast!
// The event begins as we create the first guest - Mr. N1
// 🎉 Guest 1 has arrived at the feast. The hall is buzzing with excitement!
// 🎊 New guests are entering the hall...
// 🎉 Guest 2 has arrived at the feast. The hall is buzzing with excitement!
// 🎉 Guest 3 has arrived at the feast. The hall is buzzing with excitement!
// 🍛 Guests are enjoying delicious biryani, sweets, and laughter inside the hall!
// 🏃‍♂️ Guests are now leaving the hall...
// 👋 Guest 3 has finished their meal and left the feast. The hall feels a bit quieter now.
// 👋 Guest 2 has finished their meal and left the feast. The hall feels a bit quieter now.
// ✨ Back to the main function - only the first guest, Mr. N1, remains.
// 👋 Guest 1 has finished their meal and left the feast. The hall feels a bit quieter now.

/*
📝 Key Notes:

🔹 **Destructor**: A special member function in C++ that is automatically called when an object goes out of scope or is explicitly deleted.
   - **Syntax**: Defined using a tilde `~` followed by the class name, e.g., `~ClassName()`.

🔹 **Characteristics of Destructors**:
   - Cannot take arguments.
   - Cannot return values.
   - Each class has only one destructor (no overloading).
   - Ideal for cleanup tasks such as releasing memory, closing files, or other resource management.

🔹 **Behavior**:
   - A **constructor** is called when an object is created.
   - A **destructor** is called when an object is destroyed.
   - Objects inside a block are destroyed in the reverse order of their creation.
   - Global objects are destroyed automatically when the program ends.

💡 **Analogy Recap**:
Think of a Bangladeshi wedding feast:
- When guests arrive (constructor), the hall becomes livelier.
- As they finish eating and leave (destructor), the hall gradually empties and becomes quieter.
- The feast is officially over when all the guests have left!

🚀 **Takeaway**: Destructors are crucial for ensuring clean and efficient resource management, just like ensuring the wedding hall is tidied up after a grand celebration.
*/
