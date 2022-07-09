#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n, limite, d, i, x, y, dis, ok = 0;

    char c;

    cin >> n >> limite;

    dis = x = y = 0;

    for (i = 0; i < n; i++)
    {
        cin >> c >> d;

        if (c == 'N')
        {
            y += d;
        }
        else if (c == 'L')
        {
            x += d;
        }
        else if (c == 'S')
        {
            y -= d;
        }
        else if (c == 'O')
        {
            x -= d;
        }

        dis = sqrt(pow((x - 0), 2) + pow((y - 0), 2));

        if (dis > limite)
        {
            ok = 1;
        }
    }

    if (ok)
    {
        cout << "1\n";
    }
    else
    {
        cout << "0\n";
    }

    return 0;
}