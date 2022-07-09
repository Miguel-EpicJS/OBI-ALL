#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;

    cin >> n;

    int tabuleiro[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> tabuleiro[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (tabuleiro[i][j] == 9)
            {
                int w, b;
                w = 0;
                b = 0;

                if (tabuleiro[i - 1][j] == 0)
                {
                    w++;
                }
                else
                {
                    b++;
                }
                if (tabuleiro[i][j - 1] == 0)
                {
                    w++;
                }
                else
                {
                    b++;
                }
                if (tabuleiro[i - 1][j - 1] == 0)
                {
                    w++;
                }
                else
                {
                    b++;
                }

                if (w > b)
                {
                    tabuleiro[i][j] = 1;
                }
                else
                {
                    tabuleiro[i][j] = 0;
                }
            }
        }
    }

    cout << tabuleiro[n - 1][n - 1] << "\n";

    return 0;
}