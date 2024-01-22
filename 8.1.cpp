#include<iostream>
using namespace std;

class Node{
    
    int data;
    Node *next;

    public:
    Node *head =NULL;
        void insertAfter(){
             Node *p;
            int i,n,x;
            cout<<"\nEnter the node after which you want to insert the new node: ";
            cin>>n;
            Node *temp;
           
            cout<<"\nEnter the data to be inserted: ";
            cin>>x;
            
                if(head==NULL){
                head=p;
                p->data=x;
                p->next=NULL;
                }

                else{
                    temp=head;

                for(i=0;i<n;i++){
                    temp=temp->next;
                }
                temp->next=p;
                p->data=x;
                p->next=NULL;
                }
            
        }

    void display(){
        Node* temp;
        if(head==NULL){
            printf("list is empty");
        }
        else{
            temp=head;
            while(temp!=NULL){
                printf("%d\t",temp->data);
                temp=temp->next;
            }
        }
}
};
    
    

int main(){
    Node n;
    int choice, end =1;
    while(1){
        cout<<"\n1. Insert \n2. Display\nEnter choice: ";
        cin>>choice;
        switch(choice){
            case 1: n.insertAfter();
                    break;
            case 2 : n.display();
                    break;
            default: exit(0); break;
        }
    }
    return 0;
}