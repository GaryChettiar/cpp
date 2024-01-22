
            answer =1;
            int i;
            for(i=0; i<n; i++){
                answer*=m;
            }
            return answer;
        }
};

int main(){
    int choice,temp,answer,base,n=2;
    double m,result;
    
    C_power c;
   cout<<"enter base: ";
   cin>>base;
   cout<<"enter power:";
   cin>>n;
   //decimal to user input power
   cout<<c.power(m,n)<<endl;
   // int base to default power