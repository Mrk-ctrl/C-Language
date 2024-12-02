#include <iostream>
using namespace std;

class A{
public:
    A(){
        cout << "First function of Base class\n";
    }
};

class B{
public:
    B(){
        cout << "Second function of Base class\n";
    }
};

class C : public A, public B{
public:
    C(){
        cout << "Function of child class\n";
    }
};

int main(){

    C obj;


    return 0;
}