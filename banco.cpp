#include <iostream>

using namespace std;

#define MAXN 100100

int n, k;

int pai[MAXN], peso[MAXN] = {0}, qtd[MAXN] = {0};

int find(int x)
{
    if (pai[x] == x)
    {
        return x;
    }

    return pai[x] = find(pai[x]);
}

void join(int x, int y)
{
    x = find(x);
    y = find(y);

    if (x == y)
    {
        return;
    }

    if (peso[x] < peso[y])
    {
        pai[x] = y;
        qtd[y] += qtd[x];
    }
    if (peso[x] > peso[y])
    {
        pai[y] = x;
        qtd[x] += qtd[y];
    }

    if (peso[x] == peso[y])
    {
        pai[x] = y;

        peso[y]++;

        qtd[y] += qtd[x];
    }
}

int main()
{
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        pai[i] = i;
    }

    char op;
    int banco1, banco2;

    for (int i = 1; i <= k; i++)
    {
        cin >> op >> banco1 >> banco2;

        if (op == 'F')
        {
            join(banco1, banco2);
        }
        else
        {
            if (find(banco1) == find(banco2))
            {
                cout << "S\n";
            }
            else
            {
                cout << "N\n";
            }
        }
    }

    return 0;
}