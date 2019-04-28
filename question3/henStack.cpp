#include <iostream>
#include <stack>

using namespace std;

class Hen {
public:
    string name;
    class Nest {
    public:
        int size;
        class Egg {
        public:
            int age;
        } egg;
    } nest;
    Hen(string nameOf, int sizeOf, int ageOf) {
        name = nameOf;
        nest.size = sizeOf;
        nest.egg.age = ageOf;
    }
    void displayHen();
};

struct examples {
    string name;
    int size;
    int age;
};

void Hen::displayHen() {
    cout << "name of hen: " << name << "\t";
    cout << "size of nest: " << nest.size;
    cout << "   age of egg: " << nest.egg.age << "\n";

}

void popAndPrint(stack <Hen> hens) {
    int jj = hens.size();
    while(jj-- && !hens.empty()) {
        hens.top().displayHen();
        hens.pop();
    }
}

int main() {

    examples exam[3] = {{"Billy", 2, 1}, {"Bob", 5, 3}, {"Borris", 6, 5}};
    stack <Hen> myStack;

    int ii = 3;
    while(ii--) {
        myStack.emplace(exam[ii].name, exam[ii].size, exam[ii].age);
    }
    popAndPrint(myStack);
}
