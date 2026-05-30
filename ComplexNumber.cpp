/* Create a ComplexNumber class with real and imaginary parts. Implement addition, 
subtraction, and multiplication of two complex numbers and display the results. */

#include <iostream>
using namespace std;

class ComplexNumber {
private:
    double rp;
    double ip;
public:
    ComplexNumber(double r, double i) {
        rp = r;
        ip = i;
    }
    ComplexNumber add(const ComplexNumber& c) {
        return ComplexNumber
        (rp + c.rp,
         ip + c.ip);
    }
    ComplexNumber sub(const ComplexNumber& c) {
        return ComplexNumber
        (rp - c.rp,
         ip - c.ip);
    }
    ComplexNumber mul(const ComplexNumber& c) {
        return ComplexNumber
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
    ComplexNumber c1(2, 4);
    cout << "First number = "; c1.display();
    ComplexNumber c2(3, 9);
    cout << "Second number = "; c2.display();
    ComplexNumber sum = c1.add(c2);
    cout << "Addition = "; sum.display();
    ComplexNumber subtract = c1.sub(c2);
    cout << "Subtraction = "; subtract.display();
    ComplexNumber multiply = c1.mul(c2);
    cout << "Multiplication = "; multiply.display();
    return 0;
}

