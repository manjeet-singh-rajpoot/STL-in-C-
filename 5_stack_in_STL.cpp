#include<iostream>
#include<stdlib.h>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    cout<<"Size of stack: "<<s.size()<<endl;
    cout<<"top: "<<s.top()<<endl;
    cout<<"Empty : "<<s.empty()<<endl;
    return 0;
}