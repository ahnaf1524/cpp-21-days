#include <iostream>
#include <cmath> // Use <cmath> for mathematical functions
using namespace std;

/*
   REAL-LIFE EXAMPLE: Location on a Map
   - The `Point` class represents a coordinate on a 2D map.
   - Example use case: Representing two specific locations in Bangladesh, such as landmarks,
     and calculating the distance between them.
*/

class Point
{
private:
    int xCoordinate; // X-coordinate of the point
    int yCoordinate; // Y-coordinate of the point

public:
    // Parameterized Constructor
    // Initializes the coordinates of the point
    Point(int x, int y)
    {
        xCoordinate = x;
        yCoordinate = y;
    }

    // Member function to display the coordinates of the point
    void displayCoordinates() const
    {
        cout << "The location on the map is (" << xCoordinate << ", " << yCoordinate << ")" << endl;
    }

    // Declare `friend` function for calculating distance
    friend void calculateDistance(Point, Point);
};

// Friend function to calculate the distance between two points
void calculateDistance(Point point1, Point point2)
{
    int deltaX = point2.xCoordinate - point1.xCoordinate;    // Difference in X-coordinates
    int deltaY = point2.yCoordinate - point1.yCoordinate;    // Difference in Y-coordinates
    double distance = sqrt(pow(deltaX, 2) + pow(deltaY, 2)); // Distance formula
    cout << "The distance between the two locations is " << distance << " units." << endl;
}

int main()
{
    // Creating the first point to represent a specific location
    Point location1(3, 4); // Example: Location 1 at coordinates (3, 4)
    location1.displayCoordinates();

    // Creating the second point to represent another specific location
    Point location2(7, 1); // Example: Location 2 at coordinates (7, 1)
    location2.displayCoordinates();

    // Calculate the distance between the two locations
    calculateDistance(location1, location2);

    return 0;
}
