/*Write a Circle class that has the following member variables. 
.radius: a double
.pi: a double initialized with the value 3.14159
The class should have the following member functions:
.Default Constructor: A default constructor that sets radius to 0.0
.Constructor: Accepts the radius of the circle as an argument 
.setRadius: A mutator function for the radius variable
.getRadius: An accessor function for the radius variable
.getArea: Returns the area of the circle, which is calculated as:
 area = pi * radius * radius 
.getDiameter: Returns the diameter of the circle, which is calculated as:
 diameter = radius * 2
.getCircumference: Returns the circumference of the circle, which is calculated as:
 circumference = 2 * pi * radius */

Write a program that demonstrates the Circle class by asking the user for the circle’s radius, creating
a Circle object, and then reporting the circle’s area, diameter, and circumference. Experiment: 3
#include<iostream>
using namespace std;
class Circle {
private:
    double Radius;
    const double PI = 3.14159;
public:
    //Default constructor
    Circle() {
        Radius = 0.0;
    }
    Circle(double radius) {
        Radius = radius;
    }
    void get_radius() {
        cout << "Radius: " << Radius << endl;
    }
    double get_area() {
        return PI * Radius * Radius;
    }
    double get_diameter() {
        return Radius * 2;
    }
    double get_circumference() {
        return 2 * PI * Radius;
    }
};

int main() {
    double radius;
    cout << "Enter Circle Radius: ";
    cin >> radius;

    Circle c1 = Circle(radius);

    cout << "CIRCLE DETAILS" << endl;
    c1.get_radius();
    cout << "Area: " << c1.get_area() << endl;
    cout << "Diameter: " << c1.get_diameter() << endl;
    cout << "Circumference: " << c1.get_circumference() << endl;

    return 0;
}
