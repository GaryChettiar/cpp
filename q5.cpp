#include<iostream>
using namespace std;

float pow(float base , int n =2)
{
    return base*base;
}

float pow(int base , int n =3)
{
    return base*base*base;
}

int main(){
    float base =5.5;
    float square = pow(base,2);
    float cube = pow((int)base,3);
    cout<<square<<endl<<cube;
}