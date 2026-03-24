/* Design a Payroll class that has data members for an employee’s hourly pay rate, number of hours worked, and total pay for the week. 
Write a program with an array of seven Payroll objects. The program should ask the user for the number of hours each employee has worked 
and will then display the amount of gross pay each has earned. 
Input Validation: Do not accept values greater than 60 for the number of hours worked. */

#include<iostream>
using namespace std;
class Payroll {
private:
	double hourlyRate;
	double noOfHours;
	double payForWeek;
public:
	double get_hourlyRate() {
		return hourlyRate;
	}

	double get_no0fHours() {
		return noOfHours;
	}

	double get_payForWeek() {
		return payForWeek;
	}

	void set_hours(double hour) {
		noOfHours = hour;
		while (noOfHours > 60) {
			cout << "Hours are greater than limit!" << endl;
			cout << "Enter number of hours again: ";
			cin >> noOfHours;
		}
	}
	void display(double hoursWorked, double payRate) {
		double grossPay = hoursWorked * payRate;
		cout << "Gross Pay of employee = " << grossPay << endl << endl;
	}
};

int main() {
	const int COUNT = 7;
	Payroll employee[COUNT];
	double hours;
	double ratePerHour;

	employee[COUNT].get_hourlyRate();
	employee[COUNT].get_no0fHours();
	employee[COUNT].get_payForWeek();

	cout << "Enter hourly pay rate: ";
	cin >> ratePerHour;
	cout << endl;

	for (int i = 0; i < COUNT; i++) {
		cout << "Enter number of hours employee " << i + 1 << " worked in a week : ";
		cin >> hours;

		employee[i].set_hours(hours);
		employee[i].display(hours, ratePerHour);
	}
	return 0;
}
