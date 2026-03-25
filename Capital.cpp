/* The objective of this exercise is to understand the concept of static data members. Write a class definition Capital with one static data member count, 
which count number of objects created of particular class.
Define variable count and initialize it to 0. This variable will be defined outside the class because it will be not part of any object. It is created only once in 
the memory and shared among all objects of the class. The variable definition outside the class must be proceeded with class name and scope resolution operator '::'.
Create three objects x, y and z of Capital class. Each time an object is created, the constructor isexecuted that increases the value of the static count variable by 
1. */

#include<iostream>
using namespace std;

class Capital{
    static int count;
	public:
		Capital(){
			count++;
		}
		void show(){
			cout<<"Object "<<count<<" is called."<<endl;
			cout<<"Count = "<<count << endl;
		}
};

int Capital :: count = 0;

int main(){
	Capital x;
	x.show();
	Capital y;
	y.show();
	Capital z;
	z.show();
	return 0;
}
