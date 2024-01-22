#include<iostream>
using namespace std;

class MINIMUM;
class NUMBER{
    int a,b;
    public :
friend class MINIMUM;
    void setdata(int x, int y){
        a=x;
        b=y;
    }
};

class MINIMUM {

    public:
   int  min(NUMBER n){
        if(n.a > n.b)return n.b;
            else return n.a;
    }
};

int main(){
    NUMBER n;
    MINIMUM m;
    n.setdata(4,5);
    int minimum = m.min(n);
    cout << " the minimum value is "<<minimum;
}