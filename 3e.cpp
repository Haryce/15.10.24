#include <iostream>
using namespace std;
int main() {
    cout << "Простые числа в диапазоне от 2 до 1000: ";

    for (int i = 2; i <= 1000; i++) {
        int isPrime = 1;
        for (int j = 2; j * j <= i; j++) { 
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }
        if (isPrime == 1) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

