#include <iostream>

using namespace std;

class Egg {
public:
    int age;
    Egg(int age1) :
        age{age1} {}
    void displayEgg();
};

class Nest {
public:
    int size;
    Egg egg;
    Nest(int size1, Egg& egg1) :
        size{size1}, egg{egg1} {}
    void displayNest();

};

class Hen {
public:
    string name;
    Nest nest;
    Hen(string& nameOf, Nest& nest1) :
        name{nameOf}, nest{nest1} {}
    void displayHen();
};

void Egg::displayEgg() {
    cout << "age of egg: " << age << "\n";
}

void Nest::displayNest() {
    cout << "size of nest: " << size << "\n";
}

void Hen::displayHen() {
    cout << "name of hen: " << name << "\n";
}

int main() {
    int ageOfEgg = 1;
    int sizeOfNest = 4;
    string nameOfHen = "Billy";
    Egg egg(ageOfEgg);
    Nest nest(sizeOfNest, egg);
    Hen hen(nameOfHen, nest);
    egg.displayEgg();
    nest.displayNest();
    hen.displayHen();
}
