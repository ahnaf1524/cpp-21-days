#include <iostream>
#include <string>
using namespace std;
/*
   REAL-LIFE EXAMPLE:
   Imagine a **Robot Factory** where robots are created with specific attributes,
   like name, type, and battery level, as soon as they are manufactured.
   Constructors in C++ are like the process that initializes a robot with all
   these attributes right after it is built.

   PURPOSE OF CONSTRUCTORS:
   1. A constructor is a special member function used to initialize objects of a class.
   2. It has the same name as the class and no return type (not even void).
   3. It is called automatically when an object is created.
   4. It ensures that every object starts with valid initial values.

   PROPERTIES OF CONSTRUCTORS:
   - Same name as the class.
   - No return type.
   - Can be overloaded (multiple constructors with different parameter lists).
   - Automatically called when an object is created.
   - Can be default (no arguments), parameterized (arguments), or copy constructors.
*/
class Robot
{
private:
    string name; // Name of the robot
    string type; // Type of the robot (e.g., Worker, Assistant)
    int battery; // Battery level in percentage
public:
    // DEFAULT CONSTRUCTOR
    // Automatically called when no arguments are passed during object creation.
    Robot()
    {
        name = "Unknown";
        type = "Unknown";
        battery = 100; // Default battery level is 100%
        cout << "Default Robot created with default values.\n";
    }
    // PARAMETERIZED CONSTRUCTOR
    // Used when specific values are provided at the time of object creation.
    Robot(string robotName, string robotType, int batteryLevel)
    {
        name = robotName;
        type = robotType;
        battery = batteryLevel;
        cout << "Robot " << name << " of type " << type << " created with " << battery << "% batter.\n";
    }
    // COPY CONSTRUCTOR
    // Creates a new object by copying data from an existing object.
    Robot(const Robot &otherRobot)
    {
        name = otherRobot.name;
        type = otherRobot.type;
        battery = otherRobot.battery;
        cout << "Copy of Robot " << name << " created.\n";
    }
    // METHOD TO DISPLAY ROBOT DETAILS
    void displayInfo(void)
    {
        cout << "Robot Name : " << name << endl;
        cout << "Robot Type : " << type << endl;
        cout << "Battery Life : " << battery << endl;
    }
};
int main()
{
    // DEFAULT CONSTRUCTOR
    Robot robot1;
    robot1.displayInfo(); // No arguments passed, default constructor called

    cout << "--------------------------------------\n";

    // PARAMETERIZED CONSTRUCTOR
    Robot robot2("Alpha", "Worker", 75); // Arguments passed
    robot2.displayInfo();
    cout << "--------------------------------------\n";

    // COPY CONSTRUCTOR
    Robot robot3 = robot2; // Copy constructor called
    robot3.displayInfo();

    return 0;
}