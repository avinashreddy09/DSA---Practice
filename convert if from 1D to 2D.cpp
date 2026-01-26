#include <iostream>
using namespace std;

int main() {
    int arr1D[12] = {1,2,3,4,5,6,7,8,9,10,11};   
    int arr2D[3][4] = {0};

    cout << "Enter 12 elements:\n";
    for (int i = 0; i < 12; i++) {
        cin >> arr1D[i];
    }

    int k = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr2D[i][j] = arr1D[k++];
        }
    }

    cout << "\n2D Array (3x4):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
