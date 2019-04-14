#include <iostream>
#include <string>

using namespace std;

class Message {
public:
    Message(string text = "I love Pizza.") : str(text) {}
    void print() { cout << str << endl; }
    void print(string prefix) { cout << prefix << str << endl; }
private:
    string str;
};

int main() {

    Message m;

    m.print();
    m.print("Some text: ");

return 0;
}
