#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int A = 10;
    int B = 15;

    for (int i = A; i <= B; i++) {
        cout << "Делители числа " << i << ": ";
        int count = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                cout << j << " ";
                count++;
            }
        }
        cout << "(Количество делителей: " << count << ")" << endl;
    }

    return 0;
}
