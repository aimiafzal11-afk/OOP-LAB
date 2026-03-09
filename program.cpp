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