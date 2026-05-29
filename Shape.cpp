/* Create a Shape base class with color and area(). Derive Triangle and Circle classes, 
override display() and area(), and calculate triangle area, circle circumference, and diameter. */

#include <iostream>
using namespace std;

class Shape {
protected:
    string color;
public:
    Shape(string c) {
        color = c;
    }
    string get_color() { return color; }

    virtual double area() {
        return -1;
    }
    virtual void display(){
        cout << "Color = " << color << endl;
    }
};
class Triangle : public Shape {
private:
    double base;
    double height;
    int noOfSides;
public:
    Triangle(string c, double b, double h, int s) : Shape(c) {
        base = b;
        height = h;
        noOfSides = s;
    }
    double get_base() { return base; }
    double get_height() { return height; }
    int get_sides() { return noOfSides; }

    double area() {
        double a = 0.5 * (base * height);
        return a;
    }
    void display() {
        cout << "---TRIANGLE---" << endl;
        cout << "Base of Triangle = " << base << endl;
        cout << "Height of Triangle = " << height << endl;
        cout << "No of sides = " << noOfSides << endl;
        cout << "Area = " << area() << endl;
        Shape::display();
    }
};
class Circle : public Shape {
private:
    double centerX;
    double centerY;
    double radius;
public:
    Circle(string c, double x, double y, double r) : Shape(c) {
        centerX = x;
        centerY = y;
        radius = r;
    }
    double get_X() { return centerX; }
    double get_Y() { return centerY; }
    double get_radius() { return radius; }

    double circumference() {
        double c = 2 * 3.14 * radius;
        return c;
    }
    double diameter() {
        double d = 2 * radius;
        return d;
    }
    double area() {
        return 3.14 * radius * radius;
    }
    void display() {
        cout << "---CIRCLE---" << endl;
        cout << "CenterX of Circle = " << centerX << endl;
        cout << "CenterY of Circle = " << centerY << endl;
        cout << "Radius = " << radius << endl;
        cout << "Circumference = " << circumference() << endl;
        cout << "Diameter = " << diameter() << endl;
        cout << "Area = " << area() << endl;
        Shape::display();
    }
};

int main()
{
    Triangle t("Red", 3.7, 6.1, 3);
    t.display();

    Circle c("Blue", 3, 4, 3.3);
    c.display();
    return 0;
}