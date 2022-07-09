#include <iostream>
#include <cmath>

using namespace std;

int count_bits(int x)
{
    int ret = 0;
    while (x != 0)
    {
        ++ret;
        x -= x & -x;
    }

    return ret;
}

int main()
{
    int n;

    cin >> n;

    cout << (count_bits(n) == (int)log2(n) + 1 ? "S" : "N") << "\n";

    return 0;
}