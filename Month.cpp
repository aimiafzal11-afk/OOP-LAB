// Design a Month Class with Operator Overloading
// Use concepts: Constructors, ++/--, <<, >> Overloading

#include <iostream>
using namespace std;

class Month {
private:
    int month_no;
    string name;

    void update_month() {
        string months[12] = { "January", "February", "March", "April", "May", "June", "July",
                              "August", "September", "October", "November", "December" };
        for (int i = 0; i < 12; i++) {
            if (months[i] == name)
                month_no = i + 1;
        }
    }
    void update_name() {
        string months[12] = { "January", "February", "March", "April", "May", "June", "July",
                              "August", "September", "October", "November", "December" };
        name = months[month_no - 1];
    }
public:
    Month() {
        month_no = 1;
        name = "January";
    }    
    Month(int no) {
        if (month_no > 12) month_no == 1;
        month_no = no;
        update_name();       
    }
    Month(string n) {
        name = n;
        update_month();
    }
    int get_monthNo() { return month_no; }
    string get_name() { return name;  }

    Month operator++() {
        ++month_no;       
        if (month_no > 12) month_no = 1;
        update_name();    
        return *this;
    }
    Month operator++(int) {      
        month_no++;
        if (month_no > 12) month_no = 1;
        update_name();
        return *this;
    }
    Month operator--() {        
        --month_no;
        if (month_no < 1) month_no = 12;
        update_name();
        return *this;
    }
    Month operator--(int) {
        month_no--;
        if (month_no < 1) month_no = 12;
        update_name();
        return *this;
    }
    friend istream& operator>>(istream& cin, Month& m) {
        cin >> m.month_no;
        cin >> m.name;
        return cin;
    }
    friend ostream& operator<<(ostream& cout, const Month& m){
        cout << "Month no = " << m.month_no << endl;
        cout << "Month name = " << m.name << endl;
        return cout;
    }
};

int main()
{
    Month m1;
    Month m2(12);
    Month m3("March");
    cout << "Default Constructor:\n" << m1;
    cout << "\nConstructor with number:\n" << m2;
    cout << "\nConstructor with name:\n" << m3;
    m2++;
    cout << "\nAfter postfix ++ on m2:\n" << m2;
    ++m3;
    cout << "\nAfter prefix ++ on m3:\n" << m3;
    m1--;
    cout << "\nAfter postfix -- on m1:\n" << m1;
    --m3;
    cout << "\nAfter prefix -- on m3:\n" << m3;

    Month userMonth;
    cout << "\nOverloaded cin:" 
         << "\nEnter month number and name: ";
    cin >> userMonth;
    return 0;
}
