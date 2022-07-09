#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

const int INF = 1e9;
const int N = 1e5;

vector<int> adj[N];
vector<bool> visited;
vector<int> dist;

void dfs(int u)
{
    visited.at(u) = true;
    cout << u << " ";
    for (auto v : adj[u])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
}

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        visited[v] = true;
        cout << v << " ";
        for (auto e : adj[v])
        {
            if (!visited[e])
            {
                q.push(e);
            }
        }
    }
}

void dfsCusto(int u)
{
    visited.assign(N, false);
    dist.assign(N, INF);
    stack<int> s;
    s.push(u);
    dist[u] = 0;
    while (!s.empty())
    {
        int v = s.top();
        s.pop();
        cout << v << " ";
        for (auto e : adj[v])
        {
            if (dist[e] == INF)
            {
                dist[e] = dist[v] + 1;
                s.push(e);
            }
        }
    }
}

void bfsCusto(int u)
{
    visited.assign(N, false);
    dist.assign(N, INF);
    queue<int> q;
    q.push(u);
    dist[u] = 0;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        cout << v << " ";
        for (auto e : adj[v])
        {
            if (dist[e] == INF)
            {
                dist[e] = dist[v] + 1;
                q.push(e);
            }
        }
    }
}

void dfsStack(int u)
{
    stack<int> s;
    s.push(u);
    while (!s.empty())
    {
        int v = s.top();
        s.pop();
        cout << v << " ";
        visited[v] = true;
        for (auto e : adj[v])
        {
            if (!visited[e])
            {
                s.push(e);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    visited.assign(N, false);

    for (int i = 0; i < n - 1; i++)
    {
        int x, y;

        cin >> x >> y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout << endl;
    /* dfs(1);
    visited.assign(N, false);
    cout << endl;
    dfsStack(1);
    cout << endl;
    visited.assign(N, false);
    bfs(1); */
    for (int i = 1; i <= n; i++)
    {
        dfsCusto(i);
        cout << endl;
        cout << endl;
        for (int j = 1; j <= n; j++)
        {
            cout << "dist de " << i << " a " << j << " = " << dist[j] << "\n";
        }
    }

    return 0;
}