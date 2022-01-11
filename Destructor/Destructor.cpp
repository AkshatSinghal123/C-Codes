//Destructor : called when object is destroyed
//Constructor : called when object is created
#include <iostream>

using namespace std;
class demo{
    public:
demo(){
    cout<<"Constructor is created"<<endl;
}
~demo(){
    cout<<"Constructor is destroyed";
}
};
void fun(){
    demo *p=new demo();
    delete p;
}
int main()
{
    fun();

    return 0;
}
