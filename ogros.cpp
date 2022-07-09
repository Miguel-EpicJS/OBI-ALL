#include <iostream>
#include <vector>

using namespace std;

int n, m;

vector<int> faixa(10e5);
vector<int> premio(10e5);
vector<int> ogro(10000);

vector<int> premioOgro;

int buscab(int x, int fim)
{
    int ini = 0, meio;

    while (ini <= fim)
    {
        meio = (ini + fim) / 2;

        if (meio == 0 && ogro.at(x) < faixa[meio])
        {
            return premio[0];
        }
        else if (meio >= n - 1 && ogro.at(x) >= faixa[meio])
        {
            return premio[n - 1];
        }

        else if (ogro.at(x) >= faixa[meio] && ogro.at(x) <= faixa[meio + 1])
        {
            return premio[meio + 1];
        }

        if (faixa[meio] <= ogro.at(x))
        {
            ini = meio + 1;
        }
        if (faixa[meio] >= ogro.at(x))
        {
            fim = meio - 1;
        }
    }

    return premio[n - 1];
}

int main()
{

    cin >> n >> m;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> faixa.at(i);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> premio.at(i);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> ogro.at(i);
        premioOgro.push_back(buscab(i, n - 1));
    }

    for (int i = 0; i < premioOgro.size(); i++)
    {
        cout << premioOgro.at(i) << " ";
    }
    cout << "\n";

    return 0;
}