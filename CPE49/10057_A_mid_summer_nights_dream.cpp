#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
    int n;
    
    while (cin >> n) {
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // 使用 sort（O(n log n)）
        sort(a.begin(), a.end());

        int lower = a[(n - 1) / 2];
        int upper = a[n / 2];

        // 計數（不用二分搜，直接掃）
        int countInRange = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] >= lower && a[i] <= upper) {
                countInRange++;
            }
        }

        int numPossibleA = upper - lower + 1;

        cout << lower << " " << countInRange << " " << numPossibleA << "\n";
    }
    return 0;
}