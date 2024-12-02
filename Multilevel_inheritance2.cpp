#include <iostream>
using namespace std;

class Animal
{
public:
    Animal()
    {
        cout << "I am an animal\n";
    }
};

class Dog : public Animal
{
public:
    Dog(){
        cout << "Barking...\n";
    }
};

class Puppy : public Dog
{
public:
    Puppy(){
        cout << "Weeping...\n";
    }
};

int main()
{

    Puppy obj;

    
    return 0;
}