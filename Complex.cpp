/* Create a Complex class with real and imaginary parts. Overload the operators of addition, 
subtraction, and multiplication for two complex numbers and display the results. */

#include <iostream>
using namespace std;

class Complex {
private:
    double rp;
    double ip;
public:
    Complex (double r, double i) {
        rp = r;
        ip = i;
    }
    Complex operator+(const Complex& c) {
        return Complex
        (rp + c.rp,
         ip + c.ip);
    }
    Complex operator-(const Complex& c) {
        return Complex
        (rp - c.rp,
         ip - c.ip);
    }
    Complex operator*(const Complex& c) {
        return Complex
        (rp * c.rp,
         ip * c.ip);
    }
    void display() {
        cout << rp;
        if(ip >=0)
            cout << "+" << ip << "j" << endl;
        else 
            cout << ip << "j" << endl;
    }
};

int main()
{   
    Complex c1(-2, 7);
    cout << "First number = "; c1.display();
    Complex c2(7, 12);
    cout << "Second number = "; c2.display();
    Complex sum = c1+c2;
    cout << "Addition = "; sum.display();
    Complex subtract = c1-c2;
    cout << "Subtraction = "; subtract.display();
    Complex multiply = c1*c2;
    cout << "Multiplication = "; multiply.display();
    return 0;
}

