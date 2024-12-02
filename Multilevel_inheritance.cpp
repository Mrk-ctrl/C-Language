#include <iostream>
using namespace std;

class Animal{
public:
    void animal(){
        cout << "I am an animal\n";
    }
};

class Dog : public Animal{
public:
    void Bark(){
        cout << "Barking...\n";
    }
};

class Puppy : public Dog{
public:
    void Weep(){
        cout << "Weeping...\n";
    }
};

int main(){

    Puppy obj;
    obj.animal();
    obj.Bark();
    obj.Weep();

    return 0;
}