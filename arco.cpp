#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<double> dist;

    for (int i = 0; i < n; i++)
    {
        int x, y;

        cin >> x >> y;

        dist.push_back(pow(abs(x), 2) + pow(abs(x), 2));
    }

    int tot = 0;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (dist.at(j) <= dist.at(i))
            {
                tot++;
            }
        }
    }

    cout << tot << "\n";

    return 0;
}