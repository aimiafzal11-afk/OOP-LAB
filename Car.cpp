/* Create a Car class with year model, company, and speed. Implement functions to accelerate(+5 speed 
eachtime when called) and brake(=5 speed each time when called) the car and display updated speed. */

#include <iostream>
using namespace std;

class Car {
private:
    int yearModel;
    string company;
    int speed;
public:
    void set_yearModel(int model) { yearModel = model; }
    void set_company(string com) { company = com; }
    void set_speed(int s) { speed = s; }

    int get_yearModel() { return yearModel; }
    string get_company() { return company; }
    int get_speed() { return speed; }

    int accelerate() {
        speed += 5;
        return speed;
    }
    int brake() { 
        if (speed >= 5)
            speed -= 5;
        else
            speed = 0;
        return speed; 
    }

    void display() {
        cout << "Car's Year Model: " << yearModel << endl;
        cout << "Car's Company: " << company << endl;
        cout << "Car's speed: " << speed << endl;
    }
};
int main()
{
    Car c;
    c.set_yearModel(2020);
    c.set_company("Suzuki");
    c.set_speed(0);
    c.display();

    c.accelerate();
    c.accelerate();
    c.accelerate();
    c.accelerate();
    c.accelerate();
    cout << "\nCurrent speed of Car after accelerating five times: " << c.get_speed() << endl;
    c.brake();
    c.brake();
    c.brake();
    c.brake();
    c.brake();
    cout << "\nCurrent speed of Car after braking five times: " << c.get_speed() << endl;
    return 0;
}
