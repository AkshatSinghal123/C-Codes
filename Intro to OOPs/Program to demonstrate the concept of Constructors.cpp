//Program to demonstrate the concept of Constructors.
#include<iostream>
using namespace std;
class Rectangle{
private:
int length;
int breadth;
public:
void setLength(int l){
 length=l;
}
void setBreadth(int b){
 breadth=b;
}
int getLength(int l){
 return l;
}
int getBreadth(int b){
 return b;
}
int area(){
return length*breadth;}
int perimeter(){
return 2*(length+breadth);
}
Rectangle(int l=1,int b=1){
 setLength(l);
 setBreadth(b);
}
Rectangle(Rectangle &r){
 length=r.length;
 breadth=r.breadth;
}
};
int main(){
 Rectangle r1(10,5);
 Rectangle r2(r1);
 cout<<r1.area()<<endl;//50
 cout<<r1.perimeter()<<endl;//30
 cout<<r2.area()<<endl;//50
 cout<<r2.perimeter();//30
}
