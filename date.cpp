#include <iostream>
using namespace std;

struct date
{
    int day, month, year;
    void read();
    bool validate();
    string printmonth(int);
     void display(bool);
};
struct date d;
int main()
{
    d.read();
    bool val = d.validate();
     d.display(val);
}
void date::display(bool val){
     if (val !=false)
    {
        cout << d.printmonth(d.month) << " " << d.day << " " << d.year;
    }
    else
        cout << "invalid date";
}
void date::read()
{
    cout << " enter day:";
    cin >> day;
    cout << " enter month :";
    cin >> month;
    cout << "enter year:";
    cin >> year;
}

bool date::validate()
{
    if (day > 31)
        return false;
    if (month > 12)
        return false;
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return false;
    if (month == 2)
    {
        if (year % 4 == 0)
        {
            if (day > 29)
                return false;
            else
                return true;
        }
        else if (day > 28)
            return false;
        else
            return true;
    }
}
string date::printmonth(int month)
{
    switch (month)
    {
    case 1:
        return "January";
        break;
    case 2:
        return "February";
        break;
    case 3:
        return "march";
        break;
    case 4:
        return "april";
        break;
    case 5:
        return "may";
        break;
    case 6:
        return "june";
        break;
    case 7:
        return "july";
        break;
    case 8:
        return "august";
        break;
    case 9:
        return "september";
        break;
    case 10:
        return "october";
        break;
    case 11:
        return "november";
        break;
    case 12:
        return "december";
        break;

    default:
        return "null";
        break;
    }
}