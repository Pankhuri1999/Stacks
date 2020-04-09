#include<iostream>
using namespace std;
// empty , pop , push , show top , display
struct Node
{
    int data ;
    Node *next ;
};
Node *top = NULL ;
bool isempty()
{
    if (top == NULL)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}
int pop()
{
    if (top == NULL)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
    Node *temp = new Node() ;
    temp = top->next ;
    delete(temp);
    }
}
int push(int d)
{
    Node *temp = new Node() ;
    temp->data = d ;
    temp->next = top ;
    top = temp ;
}
int showTop()
{
    if (top == NULL)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"Top elemen: "<<top->data ;
    }
}
int disp()
{
    if  ( top == NULL)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        Node *temp = new Node() ;
        temp = top ;
        while(temp!=NULL)
        {
            cout<<temp->data<<" -> " ;
            temp = temp->next ;
        }
    }
}
int main()
{
    pop() ;
    cout<<endl ;
    push(9);
    push(4);
    push(100);
        cout<<endl ;
        disp();
        pop();
            cout<<endl ;
            showTop() ;
                cout<<endl ;
                push(2);
                push(11);
                push(90);
                disp() ;
                    cout<<endl ;
}
