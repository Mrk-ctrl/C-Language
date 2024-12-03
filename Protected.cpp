#include <iostream>
using namespace std;

class Base{
private:
    int age;

protected:
    int roll_number = 1;

public:
    string name;
};

class Derived : public Base{
public:
    void fun(){
        cout << roll_number << endl;
    }
};

int main(){

    Derived obj;
    obj.fun();


    return 0;
}