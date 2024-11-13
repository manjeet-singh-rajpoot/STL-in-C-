#include<iostream>
#include<stdlib.h>
#include<list>
using namespace std;
void showlist(list<int>l1){
  list<int>::iterator it;
for(it =l1.begin();it!=l1.end();it++){
    cout<<*it<<" ";
}
}
int main()
{
    list<int>l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_front(40);
    l1.push_front(60);
    l1.push_back(80);
    l1.push_back(30);
    l1.push_back(70);
  
  cout<<"first travesal: "<<endl;
     showlist(l1);


     l1.sort();
cout<<"After sorting: "<<endl;

for(auto i:l1){
     cout<<i<<" ";
}

cout<<"after poping : "<<endl;
  l1.pop_back();
  l1.pop_front();

showlist(l1);

cout<<"empty or not : "<<l1.empty()<<endl;
cout<<"front: "<<l1.front()<<endl;
cout<<"size: "<<l1.size()<<endl;

list<int>l2(3,100);
cout<<"print l2: "<<endl;
for(int i:l2){
  cout<<i<<" ";
}
    return 0;
}