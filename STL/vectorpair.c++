// Example: Using vector of pairs in C++
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare a vector of pairs
    vector<pair<int, string>> vp;

    // Add pairs to the vector
    vp.push_back({1, "Apple"});
    vp.push_back({2, "Banana"});
    vp.push_back(make_pair(3, "Cherry"));

    // Access and print elements
    for (const auto& p : vp) {
        cout << "Number: " << p.first << ", Fruit: " << p.second << endl;
    }

    // Modify a pair
    vp[1].second = "Blueberry";
    cout << "After modification: " << vp[1].first << ", " << vp[1].second << endl;

    // Vector of pairs of integers
    vector<pair<int, int>> vpi = {{10, 20}, {30, 40}, {50, 60}};
    for (const auto& p : vpi) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

    return 0;
}