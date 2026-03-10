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