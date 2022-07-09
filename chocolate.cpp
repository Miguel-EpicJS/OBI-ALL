#include <iostream>

using namespace std;

int main()
{

    int n, sum = 0;

    cin >> n;

    int chocolates[1001];

    for (int i = 0; i < n; i++)
    {
        cin >> chocolates[i];
        sum+= chocolates[i];
    }

    cout << sum - n << "\n";

    return 0;
}