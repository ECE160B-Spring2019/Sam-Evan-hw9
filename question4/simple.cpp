#include <iostream>

using namespace std;

class Simple {
    int num;
public:
    Simple(int i) : num{i} {
        cout << "object constructed. num = " << num << "\n";
    }
    ~Simple() {
        cout << "object destroyed. num = " << num << "\n";
    }
};

int main() {
    Simple s1(1);
    Simple s2(2);
}
