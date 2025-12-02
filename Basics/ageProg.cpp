#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old." << endl;
    if(age < 18) {
        cout << "You are a minor." << endl;
    } else {
        cout << "You are an adult." << endl;
    }
    return 0;
}