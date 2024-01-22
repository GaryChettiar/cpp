#include<iostream>
using namespace std;

class student{
    int roll_no, reg_no;
    public:
        void getnumber(){
            cout<<"enter roll no and reg no: ";
            cin>>roll_no>>reg_no;
        }
        void put_number(){
            cout<<"Roll No.: "<<roll_no<<endl<<"Reg no.: "<<reg_no<<endl;
        }
};

class test:public student{
    protected:
    int part1, part2;
    public: 
        void getnumber(){
            cout<<"enter marks of part 1 and part 2: ";
            cin>>part1>>part2;
        }

        void putnumber(){
            cout<<"Part 1: "<<part1<<"\nPart 2: "<<part2<<endl;
        }
};

class sports: public student{
    protected:
        int score;
    public:
        void getnumber(){
            cout<<"enter sports score: ";
            cin>>score;
        }

        void putnumber(){
            cout<<"Sports score : "<<score<<endl;
        }
};

class results: public test, public sports{
    int total;
    public:
        void putnumber(){
                total= part1 + part2 + score;
                cout<<"total marks is : "<<total;
        }
};

int main(){
    student s;
    s.getnumber();
    
    results r;
    r.test::getnumber();
    r.sports::getnumber();
    s.put_number();
    r.test::putnumber();
    r.sports::putnumber();
    r.putnumber();
    return 0;
}