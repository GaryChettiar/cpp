#include<iostream>
using namespace std;

class student{
    int usn;
    char name[20];
    float marks[3];
    float avg;

    public:
    void read(){
        cout<<"enter name of student ";
        cin>>name;
        cout<<"enter USN ";
        cin>>usn;
        for(int i =0;  i < 3 ; i++){
            cout<<"enter marks of subject "<<i+1 <<endl;
            cin>>marks[i];
        }
    }

    void sort(){
        float temp;
        int i,j;
        for(i=0; i < 3 ; i++){
            for (j=0; j<3-i-1;j++){
                if(marks[j]<marks[j+1]){
                    temp = marks[j];
                    marks[j] =marks[j+1];
                    marks[j+1] = temp;
                }
            }
        }

        cout<<"the better marks are : \n"<<marks[0]<<endl<<marks[1]<<endl;
    }

    void average(){
        float sum =0;
        for(int i =0; i<3 ; i++){
            sum+=marks[i];
        }
        avg = sum/3;
        
    }

    void display(){
        cout<<"student name : "<<name<<endl<< "USN : "<<endl<<usn<<"average marks "<<avg<<endl;
    }
};

int main(){
    student s[10];
    cout<<" how many students ";
    int n;
    cin>>n;

    for(int i=0 ; i < n ; i++){
        s[i].read();
        s[i].average();
        s[i].sort();
    }

    for(int i =0 ; i< n ; i++){
        s[i].display();
    }

}