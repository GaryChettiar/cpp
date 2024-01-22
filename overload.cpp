#include<iostream>
using namespace std;

class complex{
    int real, imag;
    public:
        void read(){
            cout<<"enter real part:";
            cin>>real;
            cout<< "enter imaginary part:";
            cin>>imag;    
               }

        complex add(int a, complex y){
            complex temp;
            temp.real = a + y.real;
            temp.imag = y.imag;
            return temp;
        }

        complex add(complex x, complex y){
            complex temp;
            temp.real = x.real + y.real;
            temp.imag = x.imag +y.imag;
            return temp;
        }

        void display(){
           
            cout<<real<<" + i"<<imag<<endl;
           
               }
};

int main(){
    complex c1,c2,c3,c4;
    c1.read();
    c2.read();
    c3 = c3.add(2,c1);
    c4 = c4.add(c1,c2);
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    return 0;
}