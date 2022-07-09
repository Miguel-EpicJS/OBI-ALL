#include <stdio.h>

#define MAX 50000

int c[MAX], N;
int best[MAX], suffix[MAX];

int main()
{
    int i, j, k, val;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%d", &c[i]);

    best[0] = suffix[0] = c[0];
    if (c[0] < 0)
        best[0] = suffix[0] = 0;

    for (i = 1; i < N; i++)
    {
        /* melhor sufixo */
        val = suffix[i - 1] + c[i];
        if (val >= 0)
            suffix[i] = val;
        else
            suffix[i] = 0;
        /* melhor geral */
        best[i] = best[i - 1];
        if (suffix[i] > best[i - 1])
            best[i] = suffix[i];
    }

    printf("%d\n", best[N - 1]);
    return 0;
}
