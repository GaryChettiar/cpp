#include<iostream>
using namespace std;

struct month{
    int serialno;
    char name[20];

    void show(struct month m[], int n);
    void assign(){
        for (int i = 1; i < 12; i++){
            serialno=i;
            switch(serialno){
                case 1 : name = "Jan";break;
                case 2 : name = "feb";break;
                case 3 : name = "mar";break;
                case 4 : name = "apr";break;
                case 5 : name = "may";break;
                case 6: name = "june";break;
                case 7 : name = "july";break;
                case 8 : name = "aug";break;
                case 9 : name = "sep";break;
                case 10 : name = "oct";break;
                case 11: name = "nov";break;
                case 12 : name = "dec";break;
                default: break;
            }
        }
    }

    void sortBySerial(struct month m[],int n){
        struct month temp;
        for(int i =0; i < n; i++){
            for(int j=0; j< n-i-1; j++){
                if(m[j].serialno>m[j+1].serialno){
                    temp = m[j];
                    m[j]=m[j+1];
                    m[j+1]=temp;
                }
            }
        }
    }

    void sortByName(struct month m[], int n){
        struct month temp;
        for(int i =0; i < n; i++){
            for(int j=0; j< n-i-1; j++){
                if(m[j].name[0] > m[j+1].name[0]){
                    temp = m[j];
                    m[j]=m[j+1];
                    m[j+1]=temp;
                }
            }
        }
    }
};

void month::show(struct month m[], int n){
    for(int i =0; i < n; i++){
        cout<<m[i].serialno<<"\t"<<m[i].name<<endl;
    }
}



int main(){
    struct month m[5];
    struct month t;
    t.sortBySerial(m,4);
    t.show();
    cout<<endl;
    t.sortByName(m,4);
    t.show();
}