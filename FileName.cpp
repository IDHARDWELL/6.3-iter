#include <iostream>
#include <iomanip>
#include <ctime>
#include <random>
using namespace std;
template <typename T>
T swapElements(T* a, T size){
int suma = 0;
for (int i = 0; i < size; i++) {
    if (a[i] <= 0) {
        suma += a[i];
    }
}
return suma;
}

void Create(int* a, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size) {
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}

int Sum(int* a, const int size) {
    int suma = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] <= 0) {
            suma += a[i];
        }
    }
    return suma;
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    int n;
    cout << "n = ";
    cin >> n;

    int* a = new int[n];
    int Low = -10;
    int High = 10;

    Create(a, n, Low, High);
    Print(a, n);


    cout << "Sum = " << Sum(a, n) << endl;

    cout << "Result = " << swapElements(a, n) << endl;

    return 0;
}
