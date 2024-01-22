#include<iostream>
using namespace std;

int main (){
    cout<< " lets play rock paper scissors: \n select your choice using the numbers: \n ROCK -- 1 \n PAPER -- 2\n SCISSORS --3 ";
    int choice;
    cin>> choice;
     srand (time (0));
     int comp = rand() % 3 + 1;
     cout << "your choice -- "<< choice << "\n computer's choice -- "<< comp;
     if ((comp==1 && choice == 2) || (comp == 2 && choice == 3) || (comp == 3 && choice == 1 )){
        cout<<"you win!!";
     }
     else if (comp == choice)
     {
        cout<< " its a draw";
     }
    else{
        cout << " you lose ";
    }
    return 0;

}