#include <iostream>
using namespace std;

class A{
public:
    void fun1(){
        cout << "Fist function of Base class\n";
    }
};

class B{
public:
    void fun2(){
        cout << "Second function of Base class\n";
    }
};

class C : public A, public B{
public:
    void fun3(){
        cout << "Function of Child class\n";
    }
};

int main(){

    C obj;
    obj.fun1();
    obj.fun2();
    obj.fun3();

    return 0;
}