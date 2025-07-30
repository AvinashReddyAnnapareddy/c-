#include <iostream>
#include <string>
using namespace std;
int main()
{
    pair<int, string> p1;
    p1 = make_pair(1, "Apple");

    cout << "First: " << p1.first << endl;
    cout << "Second: " << p1.second << endl;

    pair<int, int> p2 = {2, 100};
    cout << "Pair 2: " << p2.first << ", " << p2.second << endl;


    pair<int,pair<int,int>>p={1,{3,4}};
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;

    pair<int,int>arr[]={{1,2},{8,9},{5,1}};
    cout <<arr[1].second;
    return 0;
}