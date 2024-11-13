#include<iostream>
#include<stdlib.h>
#include<array>
using namespace std;
int main()
{
    array<int,3>arr1={10,20,30};

    for(int i=0;i<arr1.size();i++){
        cout<<"Arrays Elements are: "<<arr1[i]<<" "<<endl;
    }

   cout<<"2nd index Element: "<<arr1.at(2)<<endl;
   cout<<"Empty or not : "<<arr1.empty()<<endl;
   cout<<"array size:   "<<arr1.size()<<endl;
   cout<<"array front:   "<<arr1.front()<<endl;
   cout<<"array back:   "<<arr1.back()<<endl;

   array<int,3>arr;
   arr.fill(-1);

   for(int i=0;i<arr.size();i++){
    cout<<"fill(): "<<arr[i]<<" ";
   }
    return 0;
}