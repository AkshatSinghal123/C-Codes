//Program to find the area and peri of rectangle using OOPs concept.
#include<iostream>
using namespace std;
class Rectangle{
public:
int length;
int breadth;
int area(){
return length*breadth;}
int perimeter(){
return 2*(length+breadth);
}
};
int main(){
 Rectangle r1,r2;
 r1.length=10;
 r1.breadth=5;
 cout<<r1.area()<<endl;//50
 cout<<r1.perimeter();//30
}
