// Guilherme A. Pinto, 2017

#include <iostream>
#include <vector>

#define MAX 101

using namespace std;

vector<int> g[MAX + 1];
int cor[MAX], marca[MAX];
int N, M, c, destino, mcount;

bool dfs(int a)
{
    if (marca[a] == mcount)
        return false;
    marca[a] = mcount;
    if (a == destino)
    {
        cor[a] = c;
        return true;
    }
    for (auto v : g[a])
        if (dfs(v))
        {
            cor[a] = c;
            return true;
        }
    return false;
}

int main()
{
    int i, u, v;

    cin >> N >> M;
    for (i = 1; i < N; i++)
    {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (i = 1; i <= N; i++)
        marca[i] = cor[i] = 0;

    // processa operacoes de colorir
    for (mcount = 1; mcount <= M; mcount++)
    {
        cin >> u >> destino >> c;
        dfs(u);
    }

    for (i = 1; i <= N; i++)
    {
        cout << cor[i] << " ";
    }
    cout << endl;

    return 0;
}