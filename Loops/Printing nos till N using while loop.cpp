//Printing nos till N using while loop
#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"Enter the range uptil which you want to print the nos";
 cin>>n;
 int i=1;
 while(i<=n){
  cout<<i<<" ";
  i=i+1;
 }
 return 0;
}
