#include <iostream>
using namespace std;

class A{
public:
    int x, y;
    A(){
        cout << "Enter any two numbers: ";
        cin >> x >> y;
    }
};

class B : public A{
public:
    B(){
        cout << "Prodcut = " << x * y << endl;
    }
};

class C : public A{
public:
    C(){
        cout << "Sum = " << x + y << endl;
    }
};

int main(){

    B obj1;
    C obj2;

    return 0;
}