#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxThreatClusterSum(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();

    int maxSum = 0;

    // Diagonals starting from first row
    for (int startCol = 0; startCol < m; startCol++) {
        int r = 0, c = startCol;
        int sum = 0;
        bool allPositive = true;

        while (r < n && c < m) {
            if (grid[r][c] <= 0)
                allPositive = false;

            sum += grid[r][c];
            r++;
            c++;
        }

        if (allPositive)
            maxSum = max(maxSum, sum);
    }

    // Diagonals starting from first column (excluding [0][0])
    for (int startRow = 1; startRow < n; startRow++) {
        int r = startRow, c = 0;
        int sum = 0;
        bool allPositive = true;

        while (r < n && c < m) {
            if (grid[r][c] <= 0)
                allPositive = false;

            sum += grid[r][c];
            r++;
            c++;
        }

        if (allPositive)
            maxSum = max(maxSum, sum);
    }

    return maxSum;
}

int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> grid(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    cout << maxThreatClusterSum(grid) << endl;
    return 0;
}