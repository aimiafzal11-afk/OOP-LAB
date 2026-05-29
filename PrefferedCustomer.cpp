/* Create a Customer Management system using inheritance. Create a base class CustomerData 
and derive PreferredCustomer that calculates discount level based on purchase amount. */

#include <iostream>
using namespace std;

class CustomerData{
protected:
    string firstName;
    string lastName;
    string address;
    string city;
    string state;
    string phone;
public:
    CustomerData(string fn, string ln, string add, string c, string s, string ph) {
        firstName = fn;
        lastName = ln;
        address = add;
        city = c;
        state = s;
        phone = ph;
    }
    
    void display() {
        cout << "First name: " << firstName << endl;
        cout << "Last name: " << lastName << endl;
        cout << "Address: " << address << endl;
        cout << "City name: " << city << endl;
        cout << "State name: " << state << endl;
        cout << "Phone Number: " << phone << endl;
    }
};
class PrefferedCustomer : public CustomerData {
private:
    double purchaseAmount;
    double discountLevel;
public:
    PrefferedCustomer(string fn, string ln, string add, string c, string s, string ph, double amt) :
        CustomerData(fn, ln, add, c, s, ph) {
        purchaseAmount = amt;
    }
    void set_amount() {
        while (purchaseAmount < 0){
            cout << "Invalid input!" << endl << "Enter purchase amount again: ";
            cin >> purchaseAmount;
            cout << endl;
        }
    }
    void set_discount() {
        if (purchaseAmount < 500 && purchaseAmount > 0)   discountLevel = 0;
        else if (purchaseAmount >= 500 && purchaseAmount<1000)    discountLevel = 5;
        else if (purchaseAmount >= 1000 && purchaseAmount < 1500)   discountLevel = 6;
        else if (purchaseAmount >= 1500 && purchaseAmount < 2000)   discountLevel = 7;
        else if (purchaseAmount >= 2000)   discountLevel = 10;
    }
    void show_data() {
        display();
        cout << "Purchase Amount = " << purchaseAmount << "$" << endl;
        cout << "Discount percent on all future purchases = " << discountLevel << "%" << endl;
    }
};

int main()
{
    PrefferedCustomer p("Ali", "Zafar", "Block-B, Sadar", "Lahore", "Pak", "0302-6754356", 700);
    p.set_amount();
    p.set_discount();
    p.show_data();
    return 0;
}


