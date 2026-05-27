/* Create Teacher and Writer classes with input/display functions. Create a
Scholar class using multiple inheritance and display its data in main(). */

#include <iostream>
using namespace std;

class Teacher {
protected:
    string name;
    int age;
    string address;
public:
    void input() {
        cout << "Enter Teacher's name: ";
        cin >> name;
        cout << "Enter Teacher's age: ";
        cin >> age;
        cout << "Enter Teacher's address: ";
        cin >> address;
    }
    void Display() {
        cout << "\n---TEACHER'S INFO---" << endl;
        cout << "Teacher's name: " << name << endl;
        cout << "Teacher's age: " << age << endl;
        cout << "Teacher's address: " << address << endl;
    }
};

class Writer {
protected:
    string name;
    int age;
    int noOfBooks;
public:
    void input() {
        cout << "\nEnter Writer's name: ";
        cin >> name;
        cout << "Enter Writer's age: ";
        cin >> age;
        cout << "Enter no of books written by him: ";
        cin >> noOfBooks;
    }
    void Display() {
        cout << "\n---WRITER'S INFO---" << endl;
        cout << "Writer's name: " << name << endl;
        cout << "Writer's age: " << age << endl;
        cout << "No of Books written: " << noOfBooks << endl;
    }
};

class Scholar : public Teacher, public Writer {
public:
    void get_data() {
        Teacher::input();
        Writer::input();
    }
    void display() {        
        Teacher::Display();
        Writer::Display();
    }
};

int main()
{
    Scholar s;
    s.get_data();
    s.display();
    return 0;
}
   

