/* Design a class called Date. The class should store a date in three integers: month, day, and year. There should be
member functions to print the date in the following forms:
12/25/2014
December 25, 2014
25 December 2014
Demonstrate the class by writing a complete program implementing it. Input Validation: Do not accept values for the 
day greater than 31 or less than 1. Do not accept values for the month greater than 12 or less than 1. */

#include<iostream>
using namespace std;

class Date {
public:
	int day, month, year;

	void setDay(int d) {
		if (day <= 31 && day >= 1) {
			day = d;
		}
		else {
			cout << "Invalid input!" << endl;
			cin >> day;
			setDay(day);
		}
	}
	void setMonth(int m) {
		month = m;
		if (month >= 1 && month <= 12) {
			month = m;
		}
		else {
			cout << "Invalid input! " << endl;
			cin >> month;
			setMonth(month);
		}
	}
	void setYear(int y) {
		year = y;
	}

	void Display() {
		cout << "Date:\n" << month << "/" << day << "/" << year << endl;

		string arr[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

		cout << day << " " << arr[month - 1] << " " << year << endl;
		cout << arr[month - 1] << " " << day << "," << year;
	}
};
int main() {
	Date d;
	int day, month, year;

	cout << "Enter month: "; cin >> month;
	d.setMonth(month);

	cout << "Enter day: ";   cin >> day;
	d.setDay(day);

	cout << "Enter year: ";  cin >> year;
	d.setYear(year);

	d.Display();
	return 0;
}
