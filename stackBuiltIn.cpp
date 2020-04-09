#include<iostream>
#include<stack>
using namespace std;

int display(stack <int> s)
{
    for (int i = 0; i<=s.size() ; i++)
    {
        cout<<i<<". "<<s.top()<<endl ;
        s.pop();
    }
}
int main()
{
    stack<int> s ;
    s.push(3);
    s.push(1);
    s.push(6);
    s.push(10);
    s.push(19);
    display(s) ;
    cout<<"Topmost element- "<<s.top()<<endl;
    cout<<s.empty()<<endl ;
    s.pop();
    cout<<"top element - "<<s.top()<<endl;
    cout<<s.size();
    s.pop();
    s.pop();
    display(s) ;
    s.pop();
    s.pop();
    cout<<s.empty()<<endl;
    cout<<"top element"<<s.top();
    display(s) ;
}
