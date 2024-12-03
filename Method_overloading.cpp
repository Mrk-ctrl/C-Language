#include <iostream>
using namespace std;

void fun(int a){
    cout << a * a << endl;
}

void fun(int a, int b){
    cout << a + b  << endl;
}

void fun(int a, int b, int c){
    cout << (a * b) + c << endl;
}

void fun(int a, int b, int c, int d){
    cout << a + b + c + d << endl;
}

int main(){

    fun(123, 34);
    fun(12);
    fun(56, 34, 34);
    fun(2, 5, 3, 5);

    return 0;
}