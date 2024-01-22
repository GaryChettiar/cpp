#include<iostream>
#include<cstring>

using namespace std;
 class student{
        int reg_no;
        char name[20];
        float fee;

        public: 
          student(int x, char y[], float z){
          reg_no = x;
          strcpy(name,y);
          fee = z;
          }

          void display(){
           cout<<"reg_no:"<<reg_no<<endl;
           cout<<"name:"<<name<<endl;
           cout<<"fee:"<<fee<<endl;
          }
 };

 int main(){

    student s[3]={student(56,"fifty",5.69),student(69,"shadesOf",9.89),student(58,"grey",6969.6969)};
    
   

    for(int i=0;i <3; i++){
        s[i].display();
    }

 }