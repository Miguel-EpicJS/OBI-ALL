#include <iostream>

using namespace std;

int n, m, vetor[100100];

int buscab(int x)
{
    int ini = 1, fim = n, meio;

    while (ini <= fim)
    {
        meio = (ini + fim) / 2;

        if (vetor[meio] == x)
        {
            return meio;
        }
        if (vetor[meio] < x)
        {
            ini = meio + 1;
        }
        if (vetor[meio] > x)
        {
            fim = meio - 1;
        }
    }

    return -1;
}

int buscab2()
{
    int ini = 1, fim = n, meio;

    while (ini >= fim)
    {
        meio = (ini + fim) / 2;

        if (vetor[meio - 1] > vetor[meio] && vetor[meio + 1] > vetor[meio])
        {
            return vetor[meio];
        }

        if (vetor[meio + 1] > vetor[meio])
        {
            fim = meio - 1;
        }

        if (vetor[meio + 1] < vetor[meio])
        {
            ini = meio + 1;
        }
    }
}

int main()
{
    cin >> n >> m; // leio os valores de n e m

    for (int i = 1; i <= n; i++)
    {
        cin >> vetor[i]; // leio os valores do vetor
    }
    for (int i = 1; i <= m; i++)
    { // para cada pergunta

        // leio o número a ser procurado e salvo na int num
        int num;
        cin >> num;

        cout << buscab(num) << "\n"; // e imprimo o valor de buscab(num)
    }
    return 0;
}