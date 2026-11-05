#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int index;

    cout << "Enter index: ";
    cin >> index;

    try {
        if (index < 0 || index >= 5) {
            throw index;
        }

        cout << "Element = " << arr[index] << endl;
    }
    catch (int x) {
        cout << "Exception: Array index out of bounds." << endl;
    }

    return 0;
}