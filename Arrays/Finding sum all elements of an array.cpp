//Finding the sum of all elements of an array
#include<iostream>
using namespace std;
int main(){
 int A[10],n,sum=0;
 cout<<"Enter the number of elements of an array ";
 cin>>n;
 for (int i=0;i<n;i++){
   cin>>A[i];
 }
 for(int i=0;i<n;i++){
  cout<<A[i]<<" ";
 }
 for(int i=0;i<n;i++){
  sum=sum+A[i];
 }cout<<endl<<"Sum of all Elements of an array is:-"<<sum;
 return 0;
}
