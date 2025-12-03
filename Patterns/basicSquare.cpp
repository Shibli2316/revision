#include <iostream>
using namespace std;

void printSquare(int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of the square: ";
    cin >> size;

    printSquare(size);

    return 0;
}