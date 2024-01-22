#include<iostream>
using namespace std;

class TwoValues{
    int a ,b;
    public:
        void read(){
            cout<<"  Enter value of a: ";
            cin>>a;
            cout<<" Enter value of b: ";
            cin>>b;
        }
    
    friend class Min_Max;
};

class Min_Max{
    int min , max;
    public:
        void min_max(TwoValues& t){
            if(t.a>t.b){
                max =t.a;
                min=t.b;
                cout<<"A is greater than B";
            }

            else if(t.b>t.a){
                max=t.b;
                min=t.a;
                cout<<"B is greater than A";
            }

            else{
                cout<<"Both the values are equal";
            }
        }
};

int main(){
    TwoValues test;
    test.read();
    Min_Max m;
    m.min_max(test);
}