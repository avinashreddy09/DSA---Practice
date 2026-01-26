#include<bits/stdc++.h>

using namespace std;
int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        int stars = 2 * i;
        for (int rows = 1; rows <= 2; rows++) {
            for (int j = 1; j <= stars; j++) {
                cout << "*";
            }


        }
        cout << endl;
    }
    return 0;
}