#include <iostream>

using namespace std;
float fun(){
    return 2.34f;
}
int main()
{
    int i=9;
    double d=12.3;
    auto x=2*d+i; //The auto keyword is a simple way to declare a variable that has a complicated type.
    auto y=fun();
    cout<<x<<" "<<y;
    return 0;
    //You can use auto, together with the decltype type specifier, to help write template libraries.
}
