#include <iostream>
using namespace std;

#define SIZE 5
int A[SIZE];
int top = -1;

 bool isempty()
 {
     if (top == -1)
     {
         //cout<<"Your stack is empty" ;
         return true ;
     }
     else
     {
         //cout<<"Stack is NOT empty" ;
         return false ;
     }
 }
 int pop()
 {
     if (top == -1)
     {
         cout<<"Stack is empty" ;
     }
     else
     {
         top-- ;
     }
 }
 int push(int data)
 {
     if (top == SIZE - 1)
     {
         cout<<"Stack is full" ;
     }
     else
     {
        top++ ;
        A[top] = data ;

     }
 }

 int showTop()
 {
        if (top == -1)
     {
         cout<<"Stack is empty" ;
     }
     else
     {
         cout<<"Top element of stack: "<<A[top] ;
     }
 }
 int disp()
 {
     if (top == -1)
     {
         cout<<"Stack is empty" ;
     }
     else
     {
         for (int i = 0 ; i<=top  ; i++)
         {
             cout<<A[i]<<" , " ;
         }
     }
 }
int main()
{
    push(3);
    cout<<endl;
    push(2); cout<<endl;
    push(1); cout<<endl;
    push(0); cout<<endl;
    showTop(); cout<<endl;
    disp() ; cout<<endl ;
    pop(); cout<<endl;
    showTop(); cout<<endl;
    disp() ;cout<<endl ;
}
