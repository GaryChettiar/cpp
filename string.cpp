#include<iostream>
using namespace std;

class String{
    char a[20];
    public:
        String(){
            cout<<"enter string:";
            cin>>a;
            cout<<a;
        }
        String(String &s1){
            cout<<"enter string:";
            cin>>a;
                static int count=0;
            for(int i=0; s1.a[i]!='\0';i++){
                count++;
            }
            
            for(int i=0; a[i]!='\0';i++){
                s1.a[count]=a[i];
                count++;
            }

            cout<<s1.a;
        }
};

int main(){
    String s1;//smit
    String s2(s1);
    return 0;
}