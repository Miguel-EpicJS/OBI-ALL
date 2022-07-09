#include <iostream>

using namespace std;

#define MAX_N 1000
#define INFINITO 1000000

int minimo(int a, int b)
{

    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int conta_divisoes(int a, int b)
{
    int contador;

    contador = 0;

    while (a % b == 0)
    {

        a /= b;
        contador++;
    }

    return contador;
}

int main()
{

    int i, j, k;
    int n;

    int matriz_anterior[2][1000 + 1], matriz_atual[2][1000 + 1];

    int digito;

    cin >> n;

    for (i = 0; i < 2; i++)
    {
        matriz_anterior[i][1] = 0;
        for (j = 2; j <= n; j++)
        {
            matriz_anterior[i][j] = 1000000;
        }
        matriz_atual[i][0] = 1000000;
    }

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= n; j++)
        {
            cin >> digito;

            for (k = 0; k < 2; k++)
            {

                if (!digito)
                {
                    matriz_atual[k][i] = 1000000;
                }
                else
                {

                    if (matriz_atual[k][j - 1] < matriz_anterior[k][j])
                    {
                        int cont;

                        cont = 0;

                        int res = !k ? 2 : 5 == 0;

                        while (digito % res)
                        {

                            digito /=  !k ? 2 : 5;
                            cont++;
                        }

                        matriz_atual[k][i] = cont + matriz_atual[k][j - 1];
                    }
                    else
                    {
                        int cont;

                        cont = 0;

                        int res = !k ? 2 : 5 == 0;

                        while (digito % res)
                        {

                            digito /= !k ? 2 : 5;
                            cont++;
                        }

                        matriz_atual[k][i] = cont + matriz_anterior[k][j];
                    }
                }
            }
        }

        for (j = 0; j < 2; j++)
        {
            for (k = 1; k <= n; ++k)
            {
                matriz_anterior[j][k] = matriz_atual[j][k];
            }
        }
    }

    if (matriz_atual[0][n] < matriz_atual[1][n])
    {
        cout << matriz_atual[0][n] << "\n";
    }
    else
    {
        cout << matriz_atual[1][n] << "\n";
    }


    return 0;
}