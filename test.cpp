#include <iostream>
using namespace std;
 class bank{

          char acc_holder[20];
          int acc_no;
          char acc_type[20];
          float bal;
          float total_bal;
          float deposit;
          float withd;
        
        public:
         static  int trans;
                 void read(){

                       cout<<"enter the name of account holder:"<<endl;
                       cin>>acc_holder;
                       cout<<"enter the account no:"<<endl;
                       cin>>acc_no;
                       cout<<"enter the account type:"<<endl;
                       cin>>acc_type;
                       cout<<"enter the amount in account:"<<endl;
                       cin>>bal;
                 }

               void dep(){

                      cout<<"enter the amount to be deposit:";
                      cin>>deposit;
                      
                      total_bal = bal + deposit;
                      trans++;
               }
               
               void withdraw(){

                     cout<<"the current balance is :"<<total_bal<<endl;
                     cout<<"how much amount want withdrawn:"<<endl;
                     cin>>withd;

                     if(total_bal<withd){ 

                              cout<<"insufficient ballance"<<endl;
                     }
                     else{
                   cout<<"after withdrawn:"<< total_bal-withd<<endl;;
                          trans++;
                    
                    
                     }
                   
               }
static void display(){
      cout<<"no of transction:"<<trans;
}
 };
 int bank::trans =0;

               int main(){

               bank b;
               b.read();
               b.dep();
               b.withdraw();
               b.display();
               return 0;
               }