#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> temperature(m, vector<int>(n));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> temperature[i][j];
        }
    }

    int criticalCount = 0;

    int dr[] = {-1, 1, 0, 0}; // up, down
    int dc[] = {0, 0, -1, 1}; // left, right

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            bool critical = true;

            for (int k = 0; k < 4; k++) {
                int nr = i + dr[k];
                int nc = j + dc[k];

                if (nr >= 0 && nr < m && nc >= 0 && nc < n) {
                    if (temperature[i][j] <= temperature[nr][nc]) {
                        critical = false;
                        break;
                    }
                }
            }

            if (critical) {
                criticalCount++;
            }
        }
    }

    cout << criticalCount << endl;

    return 0;
}