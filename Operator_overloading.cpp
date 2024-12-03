#include <iostream>
using namespace std;

class fun{
private:
    int a;

public:
    void setdata(int x){
        a = x;
    }

    void getdata(){
        cout << "The value is: " << a << endl;
    }

    fun operator+(fun b){
        fun result;

        result.a = a + b.a;
        return result;
    }
};

int main(){

    fun f1, f2, result;
    f1.setdata(20);
    f2.setdata(30);

    result = f1 + f2;
    result.getdata();
   
    return 0;
}