#include "Login.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;


Login::Login() {

}

Login::~Login() {

}
void Login::login() {
	int count;
	string userId, password, id, pass;
	system("cls");
	cout << "\t\t\t Please enter the username and password: " << endl;
	cout << "\t\t\t Username: ";
	cin >> userId;
	cout << "\t\t\t Password: ";
	cin >> password;

	ifstream input;

	while (input >> id >> pass) {
		if (id == userId && pass == password) {
			count = 1;
			system("cls");
		}
	}
	input.close();

	if (count == 1) {
		cout << userId << "\n Your Login is successfull \n Thanks for logging in!";
		
	}
	else {
		cout << "\n Login Error \n Please check your username and password\n";
	}

}

void Login::forgot() {
	int option;
	system("cls");
	cout << "\t\t\t You forgot the password? No worries \n";
	cout << "Press 1 to search your id by username " << endl;
	cout << "Press 2 to go back to the main meny " << endl;
	cout << "\t\t\t Enter your choice: ";
	cin >> option;
	switch (option)
	{
	case 1:{
		int count = 0;
		string suserId, sId, spass;
		cout << "\n\t\t\t Enter the username which you remerbered: ";
		cin >> suserId;

		ifstream f2("records.txt");
		while (f2 >> sId >> spass) {
			if (sId == suserId) {
				count = 1;
			}
			f2.close();
			if (count == 1) {
				cout << "\n\n Your account is found! \n";
				cout << "\n\n Your password is: " << spass;
			}
			else {
				cout << "\n\t Sorry! your account is not found! \n";

			}
		}
	}
		  break;
		
	case 2: 
		break;
	default:
		break;
	}
}