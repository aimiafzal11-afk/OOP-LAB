/* Create an Employee class with name, employee number, and hire date. Derive a ShiftSupervisor class that 
stores annual salary and bonus, validates input, and displays employee details. */

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

class ShiftSupervisor : public Employee {
private:
    long double annualSalary;
    double annualBonus;
public:
    ShiftSupervisor(string n, int num, string date, int salary, double bonus) :Employee(n, num, date) {
        annualSalary = salary;
        annualBonus = bonus;
    }
    void set_salary() {
        while (annualSalary <= 0) {
            cout << "Invalid input! \n Enter Annual Salary again: ";
            cin >> annualSalary;
        }
    }
    void set_bonus() {
        while (annualBonus < 0) {
            cout << "Invalid input! \n Enter Annual Bonus again: ";
            cin >> annualBonus;
        }
    }
    int get_salary() { return annualSalary; }
    double get_bonus() { return annualBonus; }

    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee Number: " << empNum << endl;
        cout << "Hire Date: " << hireDate << endl;
        cout << "Annual Salary: " << annualSalary << "$" << endl;
        cout << "Annual Bonus " << annualBonus << "$" << endl;  
    }
};
int main()
{
    ShiftSupervisor s("Ahmed", 102, "11-05-2024", 0, 500000);
    s.set_empNum();
    s.set_salary();
    s.set_bonus();
    s.display();
    return 0;
}

