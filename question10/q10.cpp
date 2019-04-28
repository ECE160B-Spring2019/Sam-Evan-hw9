#include <iostream>

using namespace std;

class A {
public:
    A() { cout << "A()" << endl; }
};

class B {
public:
    B() : a() { cout << "B()" << endl; }
private:
    A a;
};

int main() {

    B b_arr[6];

return 0;
}
