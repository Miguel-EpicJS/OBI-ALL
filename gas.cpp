#include <iostream>
#include <algorithm>
#include <iomanip>

#define MAXN 100100;

using namespace std;

struct gas
{
    double preco, estoq;
};

bool compara(gas x, gas y)
{
    return x.preco < y.preco;
}

gas forn[MAXN];

int n;
double d, custo;

int main()
{

    cin >> n >> d;

    for (int i = 1; i <= n; i++)
    {
        cin >> forn[i].preco >> forn[i].estoq;
    }

    sort(forn + 1, forn + n + 1, compara);

    for (int i = i; i <= n; i++)
    {
        gas davez = forn[i];

        if (davez.estoq < d)
        {
            custo += davez.estoq * davez.preco;
            d -= davez.estoq;
        }
        else
        {
            custo += d * davez.preco;
            d = 0;
            break;
        }
    }

    if (d)
    {
        cout << "Impossivel\n";
    }
    else
    {
        cout << fixed << setprecision(2) << custo << "\n";
    }

    return 0;
}