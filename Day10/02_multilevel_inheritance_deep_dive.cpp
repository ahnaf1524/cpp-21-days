#include <iostream>
#include <string>
using namespace std;

/*
================= TOPIC: Multiple Inheritance in C++ =================

### Purpose:
- To model situations where a class needs to inherit attributes and behaviors from more than one base class.
- Increases code reusability by allowing a derived class to incorporate features of multiple classes.

### Analogy:
Imagine a **Smartphone** that acts as both a **Phone** and a **Camera**.
- A **Phone** class represents calling features.
- A **Camera** class represents photo and video capturing features.
- A **Smartphone** class combines the functionalities of both a phone and a camera.

### Characteristics of Multiple Inheritance:
1. A derived class inherits properties from multiple base classes.
2. The derived class can use all public and protected members of its base classes.
3. Visibility modes (`public`, `protected`, `private`) determine how members are inherited.
4. It allows modeling complex real-world relationships.
5. It can lead to ambiguities if the same member exists in multiple base classes (requires resolution using scope or `virtual` inheritance).
*/

// Base Class: Phone
class Phone
{
protected:
    string phone_number; // represent the phone number
public:
    void set_phone_number(string number)
    {
        phone_number = number;
    }
    void make_call(string contact)
    {
        cout << "Calling " << contact << " from " << phone_number << "..." << endl;
    }
};

// Base Class : Camera
class Camera
{
protected:
    int resolution; // represents camera resolution in megapixels
public:
    void set_resolution(int res)
    {
        resolution = res;
    }
    void take_phone(void)
    {
        cout << "Taking a photo with " << resolution << " MP resolution.\n";
    }
};

// Derived class: Smartphone inherits from both Phone and Camera
class SmartPhone : public Phone, public Camera
{
    string model; // Represents the Smartphone model
public:
    void set_smartphone_details(string model_name, string number, int res)
    {
        model = model_name;
        set_phone_number(number); // Set phone number from Phone class
        set_resolution(res);      // // Set resolution from Camera class
    }
    void display_features(void)
    {
        cout << "Smartphone Model: " << model << endl;
        cout << "Phone Number: " << phone_number << endl;
        cout << "Camera Resolution: " << resolution << " MP" << endl;
    };
};
int main()
{
    // Create an object of the smartphone class
    SmartPhone myPhone;

    // Set Details of the smartphone
    myPhone.set_smartphone_details("iPhone 16 Pro Max", "123-456-7890", 108);

    // Display smartphone features
    cout << "---------------------------" << endl;
    myPhone.display_features();
    cout << "---------------------------" << endl;

    // Use functionalities from both base classes

    myPhone.make_call("John");
    myPhone.take_phone();

    return 0;
}

/*
===================== NOTES =====================
1. Base Class 1: Phone
   - Represents phone functionality.
   - Includes:
     - `phone_number`: To store the phone number.
     - `set_phone_number`: To set the phone number.
     - `make_call`: To simulate making a call.

2. Base Class 2: Camera
   - Represents camera functionality.
   - Includes:
     - `resolution`: To store camera resolution.
     - `set_resolution`: To set the resolution.
     - `take_photo`: To simulate taking a photo.

3. Derived Class: Smartphone
   - Inherits from both Phone and Camera classes.
   - Combines features of a phone and a camera.
   - Includes:
     - `model`: To store the smartphone model.
     - `set_smartphone_details`: To set all details.
     - `display_features`: To display smartphone features.

================= KEY TAKEAWAYS =================
1. **Multiple Inheritance** allows a derived class to inherit from more than one base class.
2. Helps model complex real-world relationships where multiple features are combined.
3. Ambiguities can arise if the same member exists in multiple base classes. For example:
   - If `Phone` and `Camera` both have a `start` function, `Smartphone` must explicitly resolve which one to call (e.g., `Phone::start()`).
4. Use multiple inheritance wisely to avoid overly complex relationships and potential ambiguities.

*/