#include<iostream>
#include<stdlib.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);

    cout<<"Search 40: "<<binary_search(v.begin(),v.end(),40)<<endl;
    cout<<"Lower bound: "<<lower_bound(v.begin(),v.end(),30)-v.begin()<<endl;
    cout<<"Upper bound: "<<upper_bound(v.begin(),v.end(),30)-v.begin()<<endl;

    int a=20;
    int b=10;

    cout<<"max: "<<max(a,b)<<endl;
    cout<<"min: "<<min(a,b)<<endl;

    swap(a,b);

    cout<<"After swaping: "<<a<<endl;


    string s="abcde";

    reverse(s.begin(),s.end());

    cout<<"After riverse: "<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
cout<<"After rotate: ";
    for(int i:v){
        cout<<i<<" ";
    }
cout<<endl;
    sort(v.begin(),v.end());
    cout<<"After sort: ";
  for(int i:v){
        cout<<i<<" ";
    }


    return 0;
}