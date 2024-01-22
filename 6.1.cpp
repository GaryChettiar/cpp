#include<iostream>
using namespace std;

class bank{
    char name[20];
    int acc;
    char type[20];
    float bal;
    
    
    public:
    static int transaction;
    void read(){
        cout<<"Enter the name of the account holder:";
        cin>>name;
        cout<<"Enter the account number:";
        cin>>acc;
        cout<<"Enter the type of the account :";
        cin>>type;
        cout<<"Enter the current balance in the account :";
        cin>>bal;
         }

    static void trans(){
        transaction++;
    }

    void balance(){
        cout<<"balance is : "<<bal<<endl;
    }

    void deposit(){
        int x;
        cout<<"enter the amount to be deposited: ";
        cin>>x;
        bal+=x;
        trans();
        cout<<"the balance is : "<<bal<<endl;
    }

    void withdraw(){
        cout<<"the current balance is:"<<bal;
        int x;
        cout<<"\nenter the amount to be withdrawn: ";
        cin>>x;
        if(x>bal){
            cout<<"\ninsufficient balance";
        }
        else{
            bal-=x;
            cout<<"\nthe current balance is:"<<bal<<endl;
            trans();
            cout<<"No. of transactions : "<<transaction;
        }
    }
};
int bank::transaction =0;

int main(){
    bank b;
    int choice,end=1;
    b.read();
     
    while(end){
        cout<<"\n1.Withdraw\n2.Deposit\n3.Check Balance\nEnter choice: ";
        cin>>choice;
        switch(choice){
            case 1 : b.withdraw();
                    break;
            
            case 2 : b.deposit();
                    break;

            case 3 : b.balance();
                    break;

            default: end =0; 
                    break;  
        }
    }
}