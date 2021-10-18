//Program for perfect number
#include<iostream>
using namespace std;
int main(){
 int i,n,sum=0;
 cout<<"Enter the number";
 cin>>n;
 for(i=1;i<=n;i++){
 if(n%i==0){
  sum=sum+i;
 }
 }
 if(n*2==sum){
  cout<<"The number is a prefect number";
 }
 else{
  cout<<"The number is not a prefect number";
 }
 return 0;
}
