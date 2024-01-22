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
    int answer,n=2;
    double base,result;
    
    C_power c;
   cout<<"enter base: ";
   cin>>base;
   cout<<"\nenter power:";
   cin>>n;
   //decimal to user input power
   result =c.power(base,n);
   cout<<result<<endl;
   // int base to default power
   answer =c.power((int)base);
   cout<<answer;
}