#include <iostream>
using namespace std;

class fun{
public:
    void greet(){
        cout << "Hello good evening\n";
    }

    fun(){
        cout << "This is a constructor\n";
    }

    ~fun(){
        cout << "Memory erased\n";
    }
};

int main(){

    fun f;
    f.greet();
 
    return 0;
}