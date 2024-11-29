#include <iostream>
using namespace std;

class Add{
public:
    int x, y, z;
    void sum(){
        cout << "Enter any two numbers: ";
        cin >> x >> y;

        z = x + y;
        cout << "The sum is: " << z << endl;
    }
};

int main(){

    Add obj;
    obj.sum();

    return 0;
}