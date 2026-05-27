/* Create LocalPhone with phone, NatPhone with cityCode, and InternationalPhone with countryCode 
using multilevel inheritance. Implement input/display functions and test IntPhone in main(). */

#include <iostream>
using namespace std;

class LocalPhone {
protected:
    string phone;
public:
    void input() {
        cout << "Enter your phone number: ";
        cin >> phone;
    }
    void display() {
        cout << "\nYour Phone Number: " << phone << endl;
    }
};

class NatPhone : public LocalPhone {
protected:
    int cityCode;
public:
    void input() {
        LocalPhone::input();
        cout << "Enter your city code: ";
        cin >> cityCode;
    }
    void display() {
        LocalPhone::display();
        cout << "City Code: " << cityCode << endl;
    }
};

class InternationalPhone : public NatPhone {
private:
    int countryCode;
public:
    void input() {
        NatPhone::input();
        cout << "Enter your country code: ";
        cin >> countryCode;
    }
    void display() {
        NatPhone::display();
        cout << "Country Code: " << countryCode << endl;
    }
};

int main()
{
    InternationalPhone ph;
    ph.input();
    ph.display();
    return 0;
}

