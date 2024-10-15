#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int h;
    cout << "Введите высоту елки: ";
    cin >> h;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= h - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= h - 1; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    return 0;
}
