//Program for call by value
#include<iostream>
using namespace std;
void swap(int a,int b){
 int temp=a;
 a=b;
 b=temp;
 cout<<a<<" "<<b<<endl;
}
int main(){
 int x=3,y=6;
 swap(x,y);
 cout<<x<<" "<<y<<endl;
}
