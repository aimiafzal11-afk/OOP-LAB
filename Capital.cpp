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
