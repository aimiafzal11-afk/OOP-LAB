/* Create a Publication base class with title and price. Derive Book (page count) and Tape (playing time). 
Implement getdata() and putdata() in each class and test Book and Tape classes by creating their instances in main(). */

#include <iostream>
using namespace std;

class Publication {
protected:
    string title;
    float price;
public:
    void get_data() {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }
    void put_data() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class Book : public Publication {
private:
    int pageCount;
public:
    void get_data() {
        Publication::get_data();
        cout << "Enter Book page count: ";
        cin >> pageCount;
    }
    void put_data() {
        cout << "---Book Information---" << endl;
        Publication::put_data();
        cout << "Book page count: " << pageCount << endl;
    }
};

class Tape : public Publication {
private:
    float playingTime;
public:
    void get_data() {
        Publication::get_data();
        cout << "Enter play time of cassette(in minutes): ";
        cin >> playingTime;
    }
    void put_data() {
        cout << "---Tape Information---" << endl;
        Publication::put_data();
        cout << "Play time of cassette: " << playingTime << " minutes" << endl;
    }
};

int main()
{
    Book b;
    cout << "BOOK DATA" << endl;
    b.get_data();
    b.put_data();
    Tape t;
    cout << "\nTAPE DATA" << endl;
    t.get_data();
    t.put_data();
    return 0;
}

