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


