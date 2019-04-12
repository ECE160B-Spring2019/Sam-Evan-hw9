#include <iostream>

using namespace std;

class Hen {
    string name;
public:
    friend class Nest;
    friend class Egg;
    Hen(string& nameOf) :
    name{nameOf} {}
};

class Nest {
    int size;
public:
    friend class Egg;
    Nest(int size1) :
    size{size1} {}
};

class Egg {
    int age;
public:
    Egg(int age1) :
        age{age1} {}
    void display(Nest&, Hen&);
};


void Egg::display(Nest& myNest, Hen& myHen) {
    cout << "age of egg: " << age << "\n";
    cout << "size of nest: " << myNest.size << "\n";
    cout << "name of hen: " << myHen.name << "\n";
}


int main() {
    int ageOfEgg = 1;
    int sizeOfNest = 4;
    string nameOfHen = "Billy";
    Egg egg(ageOfEgg);
    Nest nest(sizeOfNest);
    Hen hen(nameOfHen);
    egg.display(nest, hen);
}
