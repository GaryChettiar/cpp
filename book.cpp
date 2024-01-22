#include<iostream>
using namespace std;

class book{
         int price;
         char title[20];
         char author[20];
         int isbn;

         public:
         void read(){
           cout<<"enter the title"<<endl;
           cin>>title;
           cout<<"enter the author"<<endl;
           cin>>author;
           cout<<"enter the isbn no"<<endl;
           cin>>isbn;
           cout<<"enter the price"<<endl;
           cin>>price;
         } 

         void display(){
             cout<<"title:"<<title<<endl;
             cout<<"author:"<<author<<endl;
             cout<<"price:"<<price<<endl;              
         }

         bool search_book(int x){
             if(x==isbn)
                return 1;
             else return 0;      
         }
              };

int main(){
    book b[5];
    int i,n,y,pos;
    cout<<"enter the number of books: ";
    cin>>n;
    for(i=0; i<n; i++){
        b[i].read();
    }

    cout<<"enter the isbn no. of the book to be searched: ";
    int x;
    cin>>x;
    for(i=0;i<n;i++){
         y = b[i].search_book(x);
         if(y==1){
            pos=i;
            break;    
        }
        
             }
    if(y==1){
        b[pos].display();
    }
    
}