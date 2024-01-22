#include<iostream>
using namespace std;

struct cricket {
    char name[20];
    char team [20];
    float avg;
    void read();
    void display();
    void sort(int, struct cricket []);
    };
struct cricket c[50];
int main(){
    int n ;
    cout<< " how many players:";
    cin>>n;

    for(int i =0; i < n; i++){
        c[i].read();
    }
    struct cricket p;
    p.sort(n,c);
    cout<<"NAME \t TEAM \t AVERAGE \n";
    for(int i=0; i < n ; i ++){
        c[i].display();
    }
}

void cricket::read(){
    cout<<"enter player name ";
    cin>>name;
    cout<<"enter team name";
    cin>>team;
    cout<<"enter batting avg";
    cin>>avg;
}

void cricket::display(){
    cout<<name<<'\t'<<team<<'\t'<<avg<<'\n';
}
struct cricket temp;
void cricket::sort(int n,cricket c[]){
    int i , j;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
           if (c[j].team[0]>c[j+1].team[0] )
           {
             temp = c[j];
             c[j]= c[j+1];
             c[j+1] = temp;
           }
           
        }
        
    }
    
}