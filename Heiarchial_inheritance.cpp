#include <iostream>
using namespace std;

class A{
public:
    int x, y;
    void setdata(){
        cout << "Enter any two numbers: ";
        cin >> x >> y;
    }
};

class B : public A{
public:
    void Product(){
        cout << "Prodcut = " << x * y << endl;
    }
};

class C : public A{
public:
    void Sum(){
        cout << "Sum = " << x + y << endl;
    }
};

int main(){

    B obj1;
    obj1.setdata();
    obj1.Product();

    C obj2;
    obj2.setdata();
    obj2.Sum();

    return 0;
}