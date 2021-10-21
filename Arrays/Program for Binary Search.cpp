//Binary Search
#include<iostream>
using namespace std;
int main(){
 int low,high,mid,key;
 cout<<"Enter the key which you want to find ";
 cin>>key;
 int A[5]={2,4,6,8,10};
 low=0;
 high=4;
 while(low<=high){
 mid=(low+high)/2;
 if(key==A[mid]){
  cout<<"Key found at "<<mid;
  return 0;
 }
 else if(key<A[mid]){
  high=mid-1;
 }
 else if(key>A[mid]){
  low=mid+1;
 }
 }cout<<"Key not found";
}
