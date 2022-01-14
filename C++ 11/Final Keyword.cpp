//Final Keyword
#include <iostream>

using namespace std;
class Parent{
    virtual void show() final{

    }
};
class child : Parent{
    //void show(){
        //using final keyword inheritance cannot be achieved and function can not be overridden.
    //}
};
int main()
{

    return 0;
    //You can use auto, together with the decltype type specifier, to help write template libraries.
}
