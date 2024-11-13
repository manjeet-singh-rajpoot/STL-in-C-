#include<iostream>
#include<stdlib.h>
#include<queue>
using namespace std;
void showq(queue<int>q){
    queue<int>q1=q;

    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<"\n";
}
int main()
{
    queue<int>q1;
   q1.push(10);
   q1.push(20);
   q1.push(30);

   cout<<"first queue is: "<<endl;
   showq(q1);

    queue<int>q2;
   q2.push(40);
   q2.push(50);
   q2.push(60);

   cout<<"second queue is: "<<endl;
   showq(q2);

q1.swap(q2);

cout<<"After swaping first queue: ";
showq(q1);

cout<<"After swaping second queue: ";
showq(q2);

cout<<"size q1 : "<<q1.size()<<endl;
cout<<"size q2 : "<<q2.size()<<endl;

cout<<"Emplace: ";
q1.emplace(70);
showq(q1);
    return 0;
}