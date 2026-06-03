// Lab 4 - Daily Sales: total sales + best day
#include <iostream>
#include <vector>

using namespace std;
// This function contains a BUG. Find it and fix it.
long long totalSales(const vector<int>& s) {
long long total = 0;
for (int i = 0; i < (int) s.size(); i++) total += s[i];
return total;
}
// TODO: Implement this function from scratch.
// Return the 1-based index of the day with the highest sales (first on a tie).
int bestDay(const vector<int>& s) {
    int maxIndex = 0;
    for(int i = 1; i < (int)s.size(); i++) {
        if(s[i] > s[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex + 1;
}
int main() {
int n; cin >> n;
vector<int> s(n);
for (int i = 0; i < n; i++) cin >> s[i];
cout << "Total Sales: " << totalSales(s) << "\n";
cout << "Best Day: " << bestDay(s) << "\n";
return 0;
}