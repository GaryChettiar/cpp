#include<iostream>
using namespace std;

class base{
    int a,b;
    public: 
         base(){
            a=5;
            b=6;
            cout<<"a ="<<a<<"\nb= "<<b;
            m =5,n=9;
         }  
    protected: 
        int m,n;

};

class derived:protected base{
    int k;
    public:
        derived(){
            k=m+n;
        }
};

class derived2: public derived{};