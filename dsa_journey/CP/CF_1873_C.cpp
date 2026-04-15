#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        char h[10][10];
        int sum = 0;
        
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> h[i][j];

                if (h[i][j] == 'X') {
                    if (i == 0 || j == 0 || i == 9 || j == 9) {
                        sum += 1;
                    }
                    else if ((i > 0 && i < 9) && (j == 1 || j == 8) ||
                             (j > 0 && j < 9) && (i == 1 || i == 8)) {
                        sum += 2;
                    }
                    else if ((i > 1 && i < 8) && (j == 2 || j == 7) ||
                             (j > 1 && j < 8) && (i == 2 || i == 7)) {
                        sum += 3;
                    }
                    else if ((i > 2 && i < 7) && (j == 3 || j == 6) ||
                             (j > 2 && j < 7) && (i == 3 || i == 6)) {
                        sum += 4;
                    }
                    else if (i > 3 && i < 6 && j > 3 && j < 6) {
                        sum += 5;
                    }
                }
            }
        }
        cout << sum << "\n";
    }

    return 0;
}
