#include <iostream>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;

    int totalPass = 0;
    int maxScore = -1;
    int perfectRows = 0;

    int grid[100][100];

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> grid[i][j];
        }
    }

    int T;
    cin >> T;

    for (int i = 0; i < R; i++) {
        bool perfectRow = true;

        for (int j = 0; j < C; j++) {
            int score = grid[i][j];

            if (score >= T) {
                totalPass++;
            } else {
                perfectRow = false;
            }

            if (score > maxScore) {
                maxScore = score;
            }
        }

        if (perfectRow) {
            perfectRows++;
        }
    }

    double passPercentage = (totalPass * 100.0) / (R * C);
    char grade;

    if (passPercentage >= 80)
        grade = 'A';
    else if (passPercentage >= 60)
        grade = 'B';
    else if (passPercentage >= 40)
        grade = 'C';
    else
        grade = 'D';

    cout << "Total Pass = " << totalPass << endl;
    cout << "Max Score = " << maxScore << endl;
    cout << "Perfect Rows = " << perfectRows << endl;
    cout << "Grade = " << grade << endl;

    return 0;
}