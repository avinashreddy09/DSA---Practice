#include <bits/stdc++.h>

using namespace std;

int main() {
    int h = 10;

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= 2 * h; j++) {

            if (j == h - i + 1 || j == h + i - 1 || i == 7)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}