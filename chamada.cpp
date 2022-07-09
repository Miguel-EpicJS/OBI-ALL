#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n, k;

    cin >> n >> k;

    vector<string> names;

    for (int i = 0; i < n; i++)
    {
        string x;

        cin >> x;
        names.push_back(x);
    }
    
    sort(names.begin(), names.end());

    cout << names.at(k-1) << "\n";

    return 0;
}