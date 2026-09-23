#include <iostream>
using namespace std;

int main() {
    int *arr = new int[5];   // allocate array of 5 integers

    for(int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;   // free array memory
    return 0;
}

// 🔹 Output (Array / Derived Data Type)
// 1 2 3 4 5