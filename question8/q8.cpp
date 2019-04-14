#include <iostream>

using namespace std;

class COne {
public:
    void someFunc(int a) {}
    void someFunc(int a, int b) {}
    void someFunc(int a, int b, int c) {}
    void someFunc(int a, int b, int c, int d) {}
};

class CTwo {
public:
    void someFunc(int a = 1, int b = 2, int c = 3, int d = 4) {}
};

int main() {

    COne test1;
    //CTwo test2;

    test1.someFunc(1);
    test1.someFunc(1, 2);
    test1.someFunc(1, 2, 3);
    test1.someFunc(1, 2, 3, 4);

return 0;
}
