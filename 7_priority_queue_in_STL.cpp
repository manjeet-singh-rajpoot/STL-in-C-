#include<iostream>
#include<stdlib.h>
#include<queue>
using namespace std;

void show(priority_queue<int >q){
    priority_queue<int>pq=q;

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
int main()
{
    priority_queue<int>pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);

    show(pq);

    cout<<"top: "<<pq.top()<<endl;
    cout<<"after pop: ";
    pq.pop();

    show(pq);
  cout<<endl;
    priority_queue<int>pq2;

    pq2.push(10);
    pq2.push(20);
    pq2.push(30);
    pq2.push(40);
    pq2.push(50);
cout<<"Pq2 : " ;
 show(pq2);
cout<<endl;
 pq.swap(pq2);

 cout<<"after swaping pq1: ";
 show(pq);
cout<<endl;
 cout<<"after swaping pq2: ";
 show(pq2);


//min heap//
//priority_queue<int>pq2;
priority_queue<int ,vector<int>,greater<int>>mini;

mini.push(39);
mini.push(28);
mini.push(69);
mini.push(20);
mini.push(30);

int n=mini.size();
cout<<"mini: ";

for(int i=0;i<n;i++){
    cout<<mini.top()<<" ";
    mini.pop();
}

  return 0;
}