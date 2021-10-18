//Program to find the factorial of a number
#include<iostream>
using namespace std;
int main(){
 int fact=1,i=1,n;
 cout<<"Enter the number for which you want to find the factorial:-";
 cin>>n;
 while(i<=n){
   fact=fact*i;
   i=i+1;
 }
 cout<<"Factorial of the entered number is:-"<<fact;
 return 0;
}
