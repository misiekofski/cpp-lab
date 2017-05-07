#include<iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>
#include<iomanip>
#include <limits>

using namespace std;

int main() {
    int n;
    cin >> n;
    int d[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            cin >> d[i][j];
            d[j][i] = d[i][j];
        }
    }

    int r[n][n];
    for (int j = 1; j < n; j++) {
        for(int i = j-1; i >= 0; i--) {
            if(i == j - 1) r[i][j] = d[i][j];
            else if(i == j - 2) r[i][j] = d[i][i+1] +  d[i+1][i+2] + d[i+2][i];
            else {
                int min = numeric_limits<int>::max();
                for(int k = i+1; k <= j-1; k++) {
                    if(min > r[i][k] + r[k][j]) {
                        min = r[i][k] + r[k][j];
                    }
                    r[i][j] = d[i][j] + min;
                }
            }
        }
    }

    cout << r[0][n-1] << endl;

    return 0;
}
