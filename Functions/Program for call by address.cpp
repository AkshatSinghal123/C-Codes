//Program for call by address
#include<iostream>
using namespace std;
void swap(int *a,int *b){
 int temp=*a;
 *a=*b;
 *b=temp;
}
int main(){
 int x=3,y=6;
 cout<<"Current Value is:- "<<x<<" "<<y<<endl;
 swap(&x,&y);
 cout<<"After Swapping:- "<<x<<" "<<y<<endl;
}
