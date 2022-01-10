//Constant modifier
#include<iostream>
using namespace std;
class demo{
  public:
  int a=10,b=20;
  void display() const{
   //a++; if i declare function as const then we cann't modify the value of var in that function
   cout<<a<<" "<<b<<endl;
  }
  void fun(const int &x,int &y){
    cout<<x<<" "<<y<<endl;
    //x++; if we declare the reference var as const then we cann't modify the value of ref var we can only use them.
  }
};
int main(){
  const int x=10;
  //x=30;  cannot modify value of variable if we have used const before declaring it.
  int y=10;
  const int *ptr1=&y;
  //++(*ptr); cannot modify value of variable to which the pointer is pointing but can point the pointer to any variable
  int *const ptr2=&y;//in this way we cann't point the pointer to any variable in this we fix the position of pointer to y only
  const int * const ptr3=&y;//in this we cann't modify the val of var as well as cann't change the position of the pointer too.
  demo d;
  d.display();
  int u=10;
  int v=20;
  d.fun(u,v);
  cout<<"Main "<<u<<" "<<v<<endl;
}
