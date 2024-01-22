#include<iostream>
using namespace std;

class Test{
    public:
    static int count;
    Test(){
        count++;
        cout<<"object no.: "<<count<<endl;
    }
};

int Test::count =0;

int main(){
    Test x,y;
    return 0;
}