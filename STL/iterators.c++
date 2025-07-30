#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    // Using iterator to loop through vector
    vector<int>::iterator it;//auto wii be written instead ofd vector<int>::iterator it`
    for (it = v.begin(); it != v.end(); ++it) {
        cout << *it << " "; // *it gives the value
    }
    cout << endl;

    // Changing value using iterator
    for (it = v.begin(); it != v.end(); ++it) {
        *it += 5; // add 5 to each element
    }

    // Print changed vector
    for (auto x : v) cout << x << " ";
    cout << endl;

    return 0;
}