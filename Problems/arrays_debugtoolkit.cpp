// Lab 3 - Array Toolkit: maximum element + count greater than first
#include <iostream>

#include <vector>
using namespace std;
// This function contains a BUG. Find it and fix it.
int findMax(const vector<int>& a) {
int best = a[0];
for (int v : a) if (v > best) best = v;
return best;
}
// TODO: Implement this function from scratch.
// Count the elements (after index 0) strictly greater than the first element.
int countGreaterThanFirst(const vector<int>& a) {
    int count = 0;
    for(int v:a){
        if(v>a[0]){
            count++;
        }
    }
return count;
}
int main() {
int n; cin >> n;
vector<int> a(n);
for (int i = 0; i < n; i++) cin >> a[i];
cout << "Max: " << findMax(a) << "\n";
cout << "Greater Than First: " << countGreaterThanFirst(a) << "\n";
return 0;
}