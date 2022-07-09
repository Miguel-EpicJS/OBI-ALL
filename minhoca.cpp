#include <iostream>

using namespace std;

int main()
{

    int n, m, i, j, soma, maior = 0;

    cin >> n >> m;

    int minhocas[n][m];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> minhocas[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        soma = 0;
        for (j = 0; j < m; j++)
        {
            soma += minhocas[i][j];
        }

        if (soma > maior)
        {
            maior = soma;
        }
    }

    for (i = 0; i < m; i++)
    {
        soma = 0;
        for (j = 0; j < n; j++)
        {
            soma += minhocas[j][i];
        }

        if (soma > maior)
        {
            maior = soma;
        }
    }

    cout << maior << "\n";

    return 0;
}
