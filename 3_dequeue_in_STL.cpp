#include<iostream>
#include<stdlib.h>
#include<deque>
using namespace std;
int main()
{
    deque<int>dq;

    dq.push_back(10);
    dq.push_front(20);

cout<<"dq elements are: ";

    for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<" ";
    }

    dq.erase(dq.begin());
cout<<endl;
cout<<"after erase: ";
    for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<" ";
    }

    dq.push_back(50);
    dq.push_front(60);
    dq.push_front(80);
    dq.push_front(70);
    dq.push_front(90);
cout<<endl;
cout<<"after push: ";
for(int j:dq){
    cout<<j<<" ";
}

cout<<endl;
cout<<"size: "<<dq.size()<<endl;

cout<<"After begin: ";
for(auto it=dq.begin();it<dq.end();it++){
    cout<<*it<<" ";
}
    return 0;
}