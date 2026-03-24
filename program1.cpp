/*Write a class named Employee that has the following member variables: 
Name: A string that holds the employee’s name
ID Number: An int variable that holds the employee’s ID number 
Department: A string that holds the name of the department where the employee works 
Position: A string that holds the employee’s job title
Write appropriate mutator functions that store values in these member variables and accessor functions that
return the values in these member variables. Once you have written the class, write a separate program that
creates three Employee objects to hold the following data. The program should store this data in the three objects and then display the data for each employee on the
screen.*/
    
#include<iostream>
using namespace std;
class Employee {
private:
    string Name, Dept, Position;
    int IdNum;
public:
    //Default Constructor
    Employee() {
        Name = "";
        Dept = "";
        Position = "";
        IdNum = 0;
    }
    //Parameterized Constructors
    Employee(string name, int idNum) {
        Name = name;
        Dept = "";
        Position = "";
        IdNum = idNum;
    }
    Employee(string name, string dept, string position, int idNum) {
        Name = name;
        Dept = dept;
        Position = position;
        IdNum = idNum;
    }

    void get_name() {
        cout << "Employee's name: " << Name << endl;
    }
    void get_dept() {
        cout << "Employee's Department: " << Dept << endl;
    }
    void get_position() {
        cout << "Employee's Position: " << Position << endl;
    }
    void get_idNum() {
        cout << "Employee's ID Number: " << IdNum << endl;
    }
};

int main() {
    string name, dept, pos;
    int idNum;
    cout << "Enter Employee name: "; 
    cin >> name;
    cout << "Enter Employee ID Number: ";
    cin >> idNum;
    cout << "Enter Employee Department: ";
    cin >> dept;
    cout << "Enter Employee Position: ";
    cin >> pos;

    Employee e1 = Employee();
    Employee e2 = Employee(name, idNum);
    Employee e3 = Employee(name, dept, pos, idNum);
    
    cout << "\nDEFAULT CONSTRUCTOR OBJECT\n";
    e1.get_name();
    e1.get_dept();
    e1.get_position();
    e1.get_idNum();

    cout << "\nPARAMETERIZED CONSTRUCTOR (1) OBJECT\n";
    e2.get_name();
    e2.get_dept();
    e2.get_position();
    e2.get_idNum();

    cout << "\nPARAMETERIZED CONSTRUCTOR (2) OBJECT\n";
    e3.get_name();
    e3.get_dept();
    e3.get_position();
    e3.get_idNum();

    return 0;
}
