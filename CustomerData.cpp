/* Create a PersonData class with personal details and accessor functions. 
Derive CustomerData with customerNumber and mailingList, then demonstrate the class in main(). */

#include <iostream>
using namespace std;

class PersonData {
protected:
    string firstName;
    string lastName;
    string address;
    string city;
    string state;
    string phone;
public:  
    PersonData() {}  
    void input() {
        cout << "Enter Customer's first name: ";           cin >> firstName;
        cout << "Enter Customer's last name: ";            cin >> lastName;
        cout << "Enter Customer's Address: ";              cin >> address;
        cout << "Enter Customer's City: ";                 cin >> city;
        cout << "Enter Customer's State: ";                cin >> state;
        cout << "Enter Customer's Phone number: ";         cin >> phone;
    }

    string get_fname() { return firstName; };
    string get_lname() { return lastName; };
    string get_address() { return address; };
    string get_city() { return city; };
    string get_state() { return state; };
    string get_phone() { return phone; };

    void display() {
        cout << "First name: " << firstName << endl;
        cout << "Last name: " << lastName << endl;
        cout << "Address: " << address << endl;
        cout << "City name: " << city << endl;
        cout << "State name: " << state << endl;
        cout << "Phone Number: " << phone << endl;
    }
};

class CustomerData : public PersonData {
private:
    static int count;
    int customer_no;
    bool mailing_list;
public:
    CustomerData() : PersonData() {
        count++;
        customer_no = count;
    } 
    void get_data() {
        input();
        cout << "Is Customer wants to be in mailing list? (1/0): ";       
        cin >> mailing_list;
    }

    bool get_mailinglist() { return mailing_list; }
    int get_customerNo() { return customer_no; }

    void show_data() {   
        display();
        cout << "Customer no: " << customer_no << endl;
        cout << "Mailing Status: " << mailing_list << endl;
    }
};

int CustomerData::count = 0;

int main()
{    
    CustomerData c1,c2;
    cout << "CUSTOMER 1" << endl;
    c1.get_data();    
    cout << "\nCUSTOMER 2" << endl;
    c2.get_data();

    cout << "\n---CUSTOMER 1 DATA---" << endl;
    c1.show_data();
    cout << "\n---CUSTOMER 2 DATA---" << endl;
    c2.show_data();
    return 0;
}

