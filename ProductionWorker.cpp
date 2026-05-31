/* Create an Employee class with name, employee number, and hire date. Derive a ProductionWorker class that 
stores shift type(1 for day, 2 for night) and hourly pay rate, validates input, and displays employee details. */

#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int empNum;
    string hireDate;
public:
    Employee() {
        name = " " ;
        empNum = 0;
        hireDate = "00/00/0000";
    }
    Employee(string n, int num, string date) {
        name = n;
        empNum = num;
        hireDate = date;
    }
    void set_empNum() {        
            while (empNum < 0){
                cout << "Invalid Input! \n Enter Employee Number again: ";
                cin >> empNum;
        }
    }
    string get_name() { return name; }
    int get_empNum() { return empNum; }
    string get_date(){ return hireDate; }
};

class ProductionWorker : public Employee {
private:
    int shift;
    double hourlyRate;
public:
    ProductionWorker(string n, int num, string date, int s, double rate) :Employee(n, num, date) {
        shift = s;
        hourlyRate = rate;
    }
    void set_shift() {
        while(shift>2 || shift<=0){
                 cout << "Invalid Input! \n Enter shift again (day = 1, night = 2): ";
            cin >> shift;
        }
    }
    int get_shift() { return shift; }
    double get_hourlyRate() { return hourlyRate; }

    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee Number: " << empNum << endl;
        cout << "Hire Date: " << hireDate << endl;
        cout << "Shift: " ;
        if (shift == 1)
            cout << "Day Shift" << endl;
        else
            cout << "Night Shift" << endl;
        cout << "Hourly Pay Rate: " << hourlyRate << "$" << endl;
    }
};
int main()
{
    ProductionWorker p("Ali", 156, "02-03-2025", 3, 100);
    p.set_empNum();
    p.set_shift();
    p.display();
    return 0;
}

