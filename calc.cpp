#include<iostream>
#include<string>
using namespace std;

int main(){
    int a,b,c;
    string op;

    std::cin >> a >> endl;
    cout << a << endl;
    getline(cin, op);
    cout << op << endl;
    cin >> b >> endl;
    cout << a << " " << op << " " << b << " "<< endl;
     if (op = +)
     {
        c = a + b;
        cout << c << endl;

     }
     else{
        cout<<"no"<<endl;
         }
     
}