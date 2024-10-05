#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "Hi! What is your name?";
    string name;
    getline(cin, name);
    cout << "Hello " << name << ". Nice to meet you :)\n";

    return 0;
}