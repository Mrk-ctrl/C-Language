#include <iostream>
using namespace std;

class Base{
public:
    Base(){
        cout << "Hello\n";
    }
};

class Derived : public Base{
public:
    Derived(){
        cout << "Hello from child class\n";
    }
};

int main(){

    Derived obj;

    return 0;
}