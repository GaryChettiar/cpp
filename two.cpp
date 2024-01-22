#include<iostream>
using namespace std;

int main(){
    
    int a[10] = {2,7,11,15};
    
    int target;
    cout<<" enter the target : \n";
    cin>> target;

    for (int i =0; i <5; i++ )
        {
            for(int j =i; j< 5; j++)
            {
                if (target == (a[i]+a[j]))
                    cout<<"["<<i<<","<<j<<"]";
                else
                  continue;
            }
        }
    return 0;

}
