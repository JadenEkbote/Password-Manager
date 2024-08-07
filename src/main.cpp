#include "../include/mysql_test.h"
#include "../include/user_management.h"
#include <iostream>

using namespace std;

int main()
{
    MYSQL con = Connection_establish();

    int choice, UserId;

    cout << "1. Register\n2. Login\n";
    cin >> choice;
    if (choice == 1)
    {
        do
        {
            UserId = RegisterUser(&con);
        } while (!UserId);
    }
    else if (choice == 2)
    {
        do
        {
            UserId = LoginUser(&con);
        } while (!UserId);
    }
    else
    {
        cout << "Invalid choice. Exiting program.\n";
    }
    return 0;
}
