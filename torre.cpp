#include <iostream>

using namespace std;

int main()
{

    int n, i, j, soma, maior = 0;

    cin >> n;

    int torre[n][n], linha[n], coluna[n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> torre[i][j];
        }

        linha[i] = 0;
        coluna[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            linha[i] += torre[i][j];
            coluna[i] += torre[j][i];
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            soma = (linha[i] + coluna[j]) - (2 * torre[i][j]);
            if (soma > maior)
            {
                maior = soma;
            }
        }
    }

    cout << maior << "\n";

    return 0;
}