#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

float Avg(const vector<int>& arr) {
    int sum = 0;

    for (int i : arr) {
        sum += i;
    }

    return (float)sum / arr.size();
}

int Highest(const vector<int>& arr) {
    return *max_element(arr.begin(), arr.end());
}

vector<int> Passed(const vector<int>& arr) {
    vector<int> passmarks;

    for (int i : arr) {
        if (i >= 40) {
            passmarks.push_back(i);
        }
    }

    return passmarks;
}

vector<int> AboveAvg(const vector<int>& arr) {
    float avg = Avg(arr);
    vector<int> aboveavg;

    for (int i : arr) {
        if (i > avg) {
            aboveavg.push_back(i);
        }
    }

    return aboveavg;
}

int main() {
    int n;
    cin >> n;

    vector<int> ar1(n);

    for (auto& i : ar1) {
        cin >> i;
    }

    cout << "Average marks: " << Avg(ar1) << endl;

    cout << "Highest marks: " << Highest(ar1) << endl;

    vector<int> passed = Passed(ar1);
    cout << "marks of students who passed: ";
    for (int x : passed) {
        cout << x << " ";
    }
    cout << endl;

    vector<int> aboveAvg = AboveAvg(ar1);
    cout << "Marks above average: ";
    for (int x : aboveAvg) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}