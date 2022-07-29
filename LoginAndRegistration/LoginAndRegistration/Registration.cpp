#include "Registration.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

Registration::Registration() {

}

Registration::~Registration() {

}

void Registration::registration() {
	string ruserId, rpassword, rid, rpass;
	system("cls");
	cout << "\t\t\t Enter the username: ";
	cin >> ruserId;
	cout << "\t\t\t Enter the password: ";
	cin >> rpassword;

	ofstream f1;

	f1.open("records.txt");

	f1 << ruserId << '  ' << rpassword << endl;
	system("cls");
	cout << "\n\t\t\t Registration is succesfull! \n";

}