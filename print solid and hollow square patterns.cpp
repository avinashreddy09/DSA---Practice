#include<bits/stdc++.h>

using namespace std;
int main() {
    int n = 5;
    cout << " solid sphere" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    cout << "hallow sphere" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "*";
            else {
                cout << " ";
            }
        }
        cout << "\n";

    }
    return 0;
}