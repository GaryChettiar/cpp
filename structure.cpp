#include<iostream>
using namespace std;

struct student
{
  char name[20];
  int regno;
  float marks;
};
struct student s[10];

int main ()
{int n;
cout<< "enter the number of students:";
cin>>n;

    for(int i =0;i <n;i++){
  cout << " enter name: ";
  cin>>s[i].name;
  cout << "\n  enter regno: ";
  cin >> s[i].regno;
  cout << " \n enter marks: ";
  cin >> s[i].marks;}
  cout<< " name \t regno \t marks \n";
  for(int i =0; i < n; i++){
      cout<<s[i].name<<"\t"<<s[i].regno<<"\t"<<s[i].marks<<endl;
  }
  struct student temp;
 for (int i=0; i<n;i++){
     for(int j=0;j<n-i-1;j++){
            if(s[j].marks>s[j+1].marks){
                temp = s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
         
     }
     
 }
cout<< " name \t regno \t marks \n";
  for(int i =0; i < n; i++){
      cout<<s[i].name<<"\t"<<s[i].regno<<"\t"<<s[i].marks<<endl;
  }

  return 0;
}
