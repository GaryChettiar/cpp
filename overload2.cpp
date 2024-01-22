#include<iostream>
using namespace std;

class Time{
    float hours;
    int mins;
    public:
    void read(){
        cout<<"enter hours:";
            cin>>hours;
            cout<< "enter minutes:";
            cin>>mins;
    }

    Time add(Time x, Time y){
        Time temp;
        temp.hours= x.hours + y.hours;
        if((x.mins + y.mins )>60){
            temp.hours++;
            temp.mins = x.mins + y.mins -60;
        }
        else 
             temp.mins = x.mins + y.mins;
        return temp;
    }

    Time add(int x, Time y){
        Time temp;
        temp.hours= x + y.hours;
        temp.mins =y.mins;
        return temp;
        }

    void display(){
           
            cout<<hours<<" :"<<mins<<endl;
           
               }
};

int main(){

    Time t1,t2,t3,t4;
    t1.read();
    t2.read();
    t3 =t3.add(t1,t2);
    t4 = t4.add(5,t2);
    t1.display();
    t2.display();
    t3.display();
    t4.display();
    return 0;
}