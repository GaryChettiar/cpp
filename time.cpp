#include<iostream>
using namespace std;
class Time{
    int hour,minutes;
    public:
        Time(){  }
        Time(int a, int b){
            hour =a;
            minutes =b;
        }
        Time add(Time t1, Time t2){
            Time temp;
            int dues;
            temp.hour = t1.hour +t2.hour;
            if((t1.minutes+t2.minutes)>60){
                temp.hour++;
                dues=t1.minutes+t2.minutes - 60;
                temp.minutes =dues;
            }

            else{
                temp.minutes=t1.minutes+t2.minutes;
            }
            return temp;
        }
        void display(){
            cout<<hour<<"\t"<<minutes;
        }
};
int main(){
    Time t1(3,49),t2(5,28),ans;
    ans = ans.add(t1,t2);
    ans.display();
    return 0;
}