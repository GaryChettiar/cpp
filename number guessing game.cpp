#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    srand(time(0));
   int num = rand() % 5 +1;
   int guess,tries =5;
    do {
        cout<<"\n guess the number between 0 to 6: ";
        cin>>guess;
         if(guess== num){cout<< "congrats";break;}
        else {cout<<"try again \n";
        tries--;
        cout<< " number of tries left " << tries;}
    }while (tries>0);
    
    
return 0;

}