//Display grades of students marks
#include<iostream>
using namespace std;
int main(){
 int m1,m2,m3,total,avg;
 cout<<"enter the marks of student";
 cin>>m1>>m2>>m3;
 total=(m1+m2+m3);
 avg=(total/3);
 if(avg>=60){
    cout<<"The Grade is A";
 }
 else if(avg>=35 && avg<60){
    cout<<"The Grade is B";
 }
 else{
    cout<<"The Grade is C";
 }
}
