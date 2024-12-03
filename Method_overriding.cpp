#include <iostream>
using namespace std;

class Base{
public:
    void greet(){
        cout << "Hello from base class\n";
    }
};

class Derived : public Base{
public:
    void greet(){
        cout << "Hello from child class\n";
    }
};

int main(){

    Derived obj;
    obj.greet();

    return 0;
}