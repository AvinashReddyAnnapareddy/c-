#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;                    

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++) {
            int max = arr[i];
            int l = i;
            int r = i;            
            for (int j = i; j < n; j++) {
                if (max < arr[j]) {
                    max = arr[j];
                    r = j;
                }
            }
            if (l == r) {         
                continue;
            }
            while (l < r) {
                int temp = arr[l];
                arr[l] = arr[r];
                arr[r] = temp;
                l++;
                r--;
            }
            break;                
        }
        for (int i = 0; i < n; i++) {
            cout << arr[i] ; 
        }
        
    }
    return 0;
}
