#include <iostream>

class constructClass {
public:
    constructClass(const std::string& message) {
        std::cout << message << "\n";
    }
};

int main() {
    std::string message = "class created";
    constructClass construct(message);
}
