#include <bits/stdc++.h>
using namespace std;

int computeValue(vector<int>& a) {
    int sum = 0;
    int mx = 0;
    for (int x : a) {
        mx = max(mx, x);
        sum += mx;
    }
    return sum;
}

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = computeValue(a); 

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(a[i], a[j]);
                ans = max(ans, computeValue(a));
                swap(a[i], a[j]);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
