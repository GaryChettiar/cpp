#include<iostream>
using namespace std;
struct census{
    char city[20];
    long int population;
    float literacy;
    void read();
    void display();
    void sort(int , census[]);
};

struct census s[10];
int main(){

int n;
cout<<"enter the no of cities"<<endl;
cin>>n;
for (int i = 0; i < n; i++)
{
    s[i].read();
}
 struct census p;
 p.sort(n,s);

 cout<<"CITY \t POPULATION \t LITERACY LEVEL"<<endl;
 for (int i = 0; i < n; i++)
{
    s[i].display();
}

}
   void census::read(){

    cout<<"enter city name ";
    cin>>city;
    cout<<"enter the population";
    cin>>population;
    cout<<"enter literacy level";
    cin>>literacy;

   }

   void census::display(){
     cout<<city<<'\t'<<population<<'\t'<<literacy<<'\n';

   }
   
   struct census temp;
   void census::sort(int n,census s[]){

    int i,j;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< n-1-i; j++)
        {
             if (s[j].city[0]>s[j+1].city[0])
                {
             temp = s[j];
             s[j]= s[j+1];
             s[j+1] = temp;
                }
        
    }
    
    }
    
   }