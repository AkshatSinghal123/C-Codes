//Finding the maximum element of an array
#include<iostream>
using namespace std;
int main(){
 int A[10],n,max;
 cout<<"Enter the number of elements of an array";
 cin>>n;
 for (int i=0;i<n;i++){
   cin>>A[i];
 }
 for(int i=0;i<n;i++){
  cout<<A[i]<<" ";
 }
 for(int i=0;i<n;i++){
  if(A[i]>max){
    max=A[i];
  }
 }cout<<endl<<"Maximum Elements among the array is:-"<<max;
 return 0;
}
