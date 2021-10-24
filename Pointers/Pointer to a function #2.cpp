//Pointer to a function #2
#include<iostream>
using namespace std;
int max(int x,int y){
 return x>y?x:y;
}
int min(int x,int y){
 return x<y?x:y;
}
int main(){
 int (*fp)(int,int);//declaration
 fp=max;//initialisation
 cout<<(*fp)(10,5)<<endl;//call
 fp=min;
 cout<<(*fp)(15,20);
}
