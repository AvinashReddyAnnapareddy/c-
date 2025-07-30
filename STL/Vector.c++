#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 1. Declaration
    vector<int> v;

    // 2. Adding elements
    v.push_back(10);//emplace_back
    v.push_back(20);
    v.push_back(30);

    // 3. Accessing elements
    cout << "First element: " << v[0] << endl;
    cout << "Second element: " << v.at(1) << endl;

    // 4. Size and capacity
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    // 5. Iterating
    cout << "Elements: ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    // 6. Removing elements
    v.pop_back(); // removes last element

    // 7. Insert at position
    v.insert(v.begin() + 1, 15); // insert 15 at index 1

    // 8. Erase element
    v.erase(v.begin()); // remove first element

       for (int i : v) {
        cout << i << " ";
    }
    // 9. Clear all elements
    v.clear();

    // 10. Check if empty
    if (v.empty()) {
        cout << "Vector is empty." << endl;
    }

    // 11. Initialize with size and value
    vector<int> v2(5, 100); // 5 elements, each 100
    for (int x : v2) cout << x << " ";
    cout << endl;

    // 12. Copy vector
    vector<int> v3 = v2;//vector<int>v3(v2);
    v3[0] = 200;
    cout << "v2[0]: " << v2[0] << ", v3[0]: " << v3[0] << endl;

    // 13. 2D vector
    vector<vector<int>> vec2d(3, vector<int>(4, 7)); // 3x4 matrix of 7s
    for (auto row : vec2d) {
        for (int val : row) cout << val << " ";
        cout << endl;
    }
    return 0;
}