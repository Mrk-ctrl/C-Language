#include <iostream>
using namespace std;

class Vehical{
public:
    void vehical(){
        cout << "This is a vehical\n";
    }
};

class Car : public Vehical{
public:
    void car(){
        cout << "This is a car\n";
    }
};

class Racing{
public:
    void racing(){
        cout << "This is for racing\n";
    }
};

class Ferreri : public Racing, public Car{
public:
    void ferreri(){
        cout << "Ferreri is a racing car\n";
    }
};

int main(){

    Ferreri obj;
    obj.vehical();
    obj.car();
    obj.racing();
    obj.ferreri();

    return 0;
}