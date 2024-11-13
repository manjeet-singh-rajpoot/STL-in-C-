#include<iostream>
#include<stdlib.h>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<string,int>mp;

    mp["one"]=1;
    mp["two"]=2;
    mp["three"]=3;


    if(mp.count("four")){
        cout<<"four present ";
    }else{
        cout<<"four is not present";
    }

   map<int,int>mp2;

   mp2.insert(pair<int,int>(1,10));
   mp2.insert(pair<int,int>(2,20));
   mp2.insert(pair<int,int>(3,30));
   mp2.insert(pair<int,int>(4,40));

  map<int,int>::iterator it;

  for(it=mp2.begin();it!=mp2.end();++it){
      cout<<"key : "<<it->first<<endl;
      cout<<"value : "<<it->second<<endl;
  }

  mp["five"]=5;
cout<<"After insert five: ";
  for(auto a: mp){
    cout<<"Key : "<<a.first<<endl;
    cout<<"value : "<<a.second<<endl;
  }
cout<<"After erase: ";
  mp.erase("five");

  for(auto b:mp){
    cout<<"key: "<<b.first<<endl;
    cout<<"value: "<<b.second<<endl;
  }
    return 0;
}