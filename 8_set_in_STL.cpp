#include<iostream>
#include<stdlib.h>
#include<set>
using namespace std;
int main()
{
    set<int>s;
//sorted set
    s.insert(20);
    s.insert(10);
    s.insert(40);
    s.insert(30);

    int n=s.size();

    for(int i:s){
        cout<<i<<" ";
    }

    cout<<"Count : "<<s.count(10);

    set<int>::iterator itr=s.find(10);

   for(auto it=s.begin();it!=s.end();it++){
       cout<<*it<<" ";
   }
    return 0;
}