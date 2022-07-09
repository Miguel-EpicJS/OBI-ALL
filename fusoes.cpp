#include <cstdio>
#include <iostream>

#define MAX 100100

using namespace std;

int pai[MAX];

int N, K;

int find(int p)
{
    return pai[p] == p ? p : pai[p] = find(pai[p]);
}

int main(void)
{
    scanf("%d%d", &N, &K);

    for (int i = 0; i < N; ++i)
    {
        pai[i] = i;
    }

    for (int i = 0; i < K; ++i)
    {
        char c;
        int A, B;
        scanf(" %c %d %d", &c, &A, &B);
        A = find(A - 1);
        B = find(B - 1);

        for (int i = 0; i < N; ++i)
        {
            cout << pai[i] << " ";
        }
        cout << "\n";
        if (c == 'F')
        {
            pai[A] = B;
        }
        else
        {
            printf("%s\n", A == B ? "S" : "N");
        }
        for (int i = 0; i < N; ++i)
        {
            cout << pai[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
