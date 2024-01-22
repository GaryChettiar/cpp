#include <iostream>
using namespace std;

int main()
{
    int money;
    static int balance;
    int account;
    int choice;

    cin.clear(); // clears input buffer along with the line below
    fflush(stdin);
    while (choice != 4)
    {
        cout << "welcome! \n enter the number corresponding to your choice of operation :\n Check balance -- 1\n withdraw cash -- 2 \n deposit cash --3 \n exit -- 4 \n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << " Your balance is " << balance;
            cout << "\n Thank you";

            break;
        case 2:
            cout << " Enter the amount to be withdrawn :";
            cin >> money;
            if (money > balance)
            {
                cout << "insufficient balance";
                cout << " Your balance is  " << balance;
                cout << "\n Thank you";
                break;
            }
            else
            {
                balance -= money;
                cout << " Your balance is  " << balance;
                cout << "\n Thank you";
                break;
            }
        case 3:
            cout << " Enter the amount to be deposited:";
            cin >> money;
            balance += money;
            cout << " Your balance is  " << balance;
            cout << " \n Thank you";
            break;
        default:
            cout << " \n Thank you";
            break;
        }
    }
    return 0;
}
