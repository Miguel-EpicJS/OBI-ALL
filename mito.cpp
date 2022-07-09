#include <iostream>

using namespace std;

int main()
{
    int MAX = 500;

    int n, i, j, x, y, ok = 1;

    char quadrantes[MAX + 1][MAX + 1];

    cin >> n;

    for (i = 0; i <= MAX; i++)
    {
        for (j = 0; j <= MAX; j++)
        {
            quadrantes[i][j] = '0';
        }
    }

    for (i = 0; i < n; i++)
    {
        cin >> x >> y;
        quadrantes[x][y]++;

        if (quadrantes[x][y] == '2')
        {
            ok = 0;
        }
    }

    if (ok)
    {
        cout << "0"
             << "\n";
    }
    else
    {
        cout << "1"
             << "\n";
    }

    return 0;
}