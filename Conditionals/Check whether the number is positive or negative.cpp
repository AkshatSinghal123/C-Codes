//Finding the number is positive or negative
#include<iostream>
using namespace std;
int main(){
 int number;
 cout<<"Enter the number";
 cin>>number;
 if(number>=0){
  cout<<"The entered number "<<number<<" is a positive number"<<endl;
 }
 else if(number<0){
  cout<<"The entered number "<<number<<" is a negative number"<<endl;
 }
 return 0;
}
