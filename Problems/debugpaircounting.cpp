// Lab 4 - Pair Counting (Nested Loops)
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
// This function contains a BUG. Find it and fix it.
// It should count pairs (i, j) with i < j and arr[i] + arr[j] == target.
long long countPairsSum(const vector<long long>& arr, long long target) {
long long count = 0; int n = arr.size();
for (int i = 0; i < n; i++){
    for (int j = i + 1; j < n; j++){
        if (arr[i] + arr[j] == target)
            count++;
    }
}
return count;
}
// TODO: Implement this function from scratch.
// Count pairs (i, j) with i < j and abs(arr[i] - arr[j]) == d.
long long countPairsDiff(const vector<long long>& arr, long long d) {
    long long count = 0;
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(abs(arr[i] - arr[j]) == d) {
                count++;
            }
        }
    }
    return count;
}
int main() {
int n; cin >> n;
vector<long long> arr(n);
for (int i = 0; i < n; i++) cin >> arr[i];
long long target, d; cin >> target >> d;
cout << "Sum Pairs = " << countPairsSum(arr, target) << "\n";
cout << "Diff Pairs = " << countPairsDiff(arr, d) << "\n";
return 0;
}