#include<iostream>
using namespace std;

class C_power{
    int answer;
    double result;
    public:
        double power (double m, int n=2){
            result =1;
            int i;
            for(i=0; i<n; i++){
                result*=m;
            }
            return result;

        }

        int power (int m, int n=2){
            answer =1;
            int i;
            for(i=0; i<n; i++){
                answer*=m;
            }
            return answer;

        }

};

int main(){
    int choice,ch,answer,base,n=2;
    double m,result;
    
    C_power c;
    cout<<"\n If base is decimal enter 1 else enter 2: ";
    cin>>choice;
    cout<<"\n Enter base: ";
    switch(choice){
        case 1: cin>>m;
                break;               
        case 2: cin>>base;
                break;
    }

    cout<<"\n Do you wish to enter power: 1. Yes \t 2. No: ";
    cin>>ch;
    if(ch==1){
        cout<<"\n  ENter power : ";
        cin>>n;
    }

    switch(choice){
        case 1: result = c.power(m,n);
                cout<<result;
                break;
        case 2: answer = c.power(base,n);
                cout<<answer;
    }

}