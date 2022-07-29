#include <iostream>
#include <fstream>
#include <string.h>
#include "Login.h"
#include "Registration.h"
using namespace std;

int main()
{
    Login l;
    Registration r;

    int c;
    cout << "\t\t\t_____________________________________________________________________\n\n\n";
    cout << "\t\t\t                       Welcom to the Login Page                       \n\n\n";
    cout << "\t\t\t______________________           MENU            ____________________________\n\n";
    cout << "\n\n";
    cout << "\t| Press 1 to Login                                   |" << endl;
    cout << "\t| Press 2 to Register                                |" << endl;
    cout << "\t| Press 3 if you forgot you Password                 |" << endl;
    cout << "\t| Press 4 to Exit                                    |" << endl;
    cout << "\n\t\t\t Please enter your choice : ";
    cin >> c;
    cout << endl;

    switch (c)
    {
    case 1:
        l.login();
        break;
    case 2:
        r.registration();
        break;
    case 3:
        l.forgot();
        break;
    case 4:
        cout << "\t\t\t Thankyou! \n\n";
        break;

    default:
        system("cls");
        cout << "\t\t\t Please select from the options given above  \n " << endl;
        break;
    }

}