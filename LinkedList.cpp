#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    
    public:
    node(int x)
    {
       data=x; 
       next=NULL;
    }
};

node *insert()
{
    int f;
    cout<<"If you want to enter element 1, type 1 else type 0"<<endl;
    cin>>f;
    
    int x;
    node *head, *temp=NULL;
    if(f==1)
    {
      cin>>x;
      node *n=new node(x);
      head=n;
      temp=n;
    }
    
    cout<<"If you want to enter element 1, type 1 else type 0"<<endl;
    cin>>f;
    
    while(f!=0)
    {
        cout<<"Enter data"<<endl;
        cin>>x;
        node *n=new node(x);
        temp->next=n;
        temp=n;
        
        cout<<"If you want to enter element 1, type 1 else type 0"<<endl;
        cin>>f;
    }
    return head;
}


void print(node *head)
{
    while(head!=NULL)
    {
    cout<<head->data<<"->";
    head=head->next;
    }
}

int main()
{
    node *head=insert();
    print(head);
    return 0;
}
