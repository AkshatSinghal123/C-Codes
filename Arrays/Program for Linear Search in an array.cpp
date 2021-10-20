//Linear Search
#include<iostream>
using namespace std;
int main(){
 int A[5]={2,4,6,8,10},key;
 cout<<"Enter the element which you want to find in an array";
 cin>>key;
 for(int i=0;i<5;i++){
  if(key==A[i]){
   cout<<"Key is found at index = "<<i;
   break;
  }
 }
 return 0;
}
