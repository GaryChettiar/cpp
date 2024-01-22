#include<iostream>
using namespace std;

class test{
    static int a;
    int b;
    public: 
    static void initialize(){
        a = 5;
        //b=6;
        //the above line gives us an error as static member function cannot acces non static data members
        cout<<a<<endl;
    }

};
int test::a;
int main(){
    test t1;
    t1.initialize();
    return 0;
}