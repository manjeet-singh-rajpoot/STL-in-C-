#include<iostream>
#include<stdlib.h>
#include<array>
#include<vector>
using namespace std;
int main()
{
   vector<int>v;

   v.push_back(10);
   v.push_back(20);
   v.push_back(30);
   v.push_back(40);
   v.push_back(50);

   cout<<"size of vector: "<<v.size()<<endl;
   cout<<"capacity is : "<<v.capacity()<<endl;

   for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
   }

   cout<<"front element is : "<<v.front()<<endl;
       cout<<"last elemnt is : "<<v.back()<<endl;
  
  cout<<"cbegin: ";
  for(auto it=v.cbegin();it!=v.cend();++it){
    cout<<*it<<" ";
  }

   cout<<"at(2): "<<v.at(2)<<endl;

cout<<"begin and end: ";
  for(auto i=v.begin();i<v.end();i++)
  {
    cout<<*i<<" ";
  }


    // v.resize();
     cout<<"after resize(): "<<v.size()<<endl;

    if(v.empty()==true){
     cout<<"vector is empty"<<endl;
    }else{
     cout<<"vector is not empty"<<endl;
    }

    v.assign(2,30);
    cout<<"After assigning val 30 : "<<endl;
    for(int j=0;j<v.size();j++){
        cout<<v[j]<<" ";
    }

   cout<<endl;
 cout<<"After insert val 79 : "<<endl;
   v.insert(v.begin(),79);
    for(int j=0;j<v.size();j++){
       cout<<v[j]<<" ";
   }
 cout<<endl;
   v.erase(v.begin());

   cout<<"after erase : "<<endl;
     for(int j=0;j<v.size();j++){
       cout<<v[j]<<" ";
   }


    return 0;
 }