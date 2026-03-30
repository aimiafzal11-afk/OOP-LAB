/* The objective of this exercise is to understand the declaration of a class with its data members and member functions. Also, the concept of passing objects as 
function parameters. 
Create a class Travel with two data members kilometer and hour, class member functions input, show and add, which accept an object of Travel as parameter. It adds 
the values of data members of the parameter object and the value of the calling object’s data members and displays the result. 
Declare two objects t1 and t2 of class Travel and input data in both objects. Call the add function with t1 object and pass t2 object as an argument. */

#include <iostream>
using namespace std;

class Travel {
private:
    int kilometer;
    int hour;
public:
    Travel(){
    }
    void input() {
        cout << "Enter kilometer: ";
        cin >> kilometer;
        cout << "Enter hours: ";
        cin >> hour;
    }
    void show() {
        cout << "kilometers: " << kilometer << endl;
        cout << "hours: " << hour << endl;
        cout<<endl;
    }
    void add(Travel t) {
    	cout<<"Addition of t1 and t2 kilometer: "<< kilometer + t.kilometer <<endl;
    	cout<<"Addition of t1 and t2 hours: "<< hour + t.hour <<endl;
    }
};
int main()
{
    Travel t1, t2;
    t1.input();
    t1.show();
    t2.input();
    t2.show();
    t1.add(t2);
    
    return 0;
}


