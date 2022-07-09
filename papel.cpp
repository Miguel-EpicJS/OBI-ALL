#include <iostream>

using namespace std;

int main()
{
    int c, p ,f;

    cin >> c >> p >> f;

    cout << (p / c >= f ? "S" : "N") << "\n";

    return 0;
}