#include <iostream>
using namespace std;

class Base{
public:
    void fun(){
        cout << "Hello" << endl;
    }
};

class Derived : public Base{};

int main(){

    Derived obj;
    obj.fun();

    return 0;
}