#include<iostream>
using namespace std;

int main (){
   int a [20] = {1,2,2,3,5,1,6,8,4};
  /* for (int i : a)
   {cout<<i<<"\n";}
   int b[20];
   for (int i=0; i<5 ;i++)
   cin>>a[i];*/
   int key;
   cout << " enter the element to be searched: \n";
   cin>>key;
   int size;
   cout<<" enter the number of elements: \n";
   cin>> size;
   int flag=0;


   for(int i =0; i < size ; i++)
   {
    if(key == a[i]){
        cout<< " element found at : " << i+1;
        flag =1;
    }
   }
   if(flag = 0) cout<<" element not found";
    return 0;

}