#include<iostream>
using namespace std;

class Complex{
    int real, imag;
    public:
     void read(){
        cout<<"enter the real part: ";
        cin>>real;
        cout<<"enter the imaginary part : ";
        cin>>imag;
     }

     Complex operator+(Complex c){
        Complex temp;
        temp.real=real +c.real;
        temp.imag=imag +c.imag;
        return temp;
     }

     void display(){
        cout<<real<<"+i"<<imag<<endl;
     }
};

int main(){
    Complex c1,c2,c3;
    c1.read();
    c2.read();
    c3 = c1 +c2;
    c3.display();
}