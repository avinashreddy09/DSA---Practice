#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int x) {
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == x)
        return mid;
    else if (x < arr[mid])
        return binarySearch(arr, low, mid - 1, x);
    else
        return binarySearch(arr, mid + 1, high, x);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 7;

    int result = binarySearch(arr, 0, n - 1, x);

    if (result != -1)
        cout << result << endl;
    else
        cout << -1 << endl;

    return 0;
}
