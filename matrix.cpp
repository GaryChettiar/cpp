#include<iostream>
using namespace std;
#define max 50
class matrix{
     int row, col;
    int a[max][max];
    public:
        matrix(){
            cout<<"enter no. of rows and colummns:";
            cin>>row>>col;
        }

        void read(){
            cout<<"enter elements:";
            for(int i=0;i<row; i++){
            for(int j=0; j<col;j++){
                cin>>a[i][j];
            }
        }
        }

        void display(){
            
            for(int i=0;i<row; i++){
            for(int j=0; j<col;j++){
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
        }
   friend bool operator==(matrix, matrix);
    matrix operator+( matrix m2){
        matrix temp;
        int i,j;
        for(i=0;i<row; i++){
            for(j=0; j<col;j++){
                temp.a[i][j]=a[i][j]+m2.a[i][j];
            }
        }
        return temp;
    }

    matrix operator-( matrix m2){
        matrix temp;
        int i,j;
        for(i=0;i<row; i++){
            for(j=0; j<col;j++){
                temp.a[i][j]=a[i][j]-m2.a[i][j];
            }
        }
        return temp;
    }
};

bool operator==(matrix m1, matrix m2){
    if(m1.row==m2.row&&m1.col==m2.col){
        return 1;
    }
    else return 0;
}

int main(){
    matrix m1, m2, m3,m4;
    m1.read();

    m2.read();
    if(m1==m2){
        m3=m1+m2;
        m3.display();
        m4=m1-m2;
        m4.display();
    }
    else{
        cout<<"not compatible";
    }
    return 0;
}

