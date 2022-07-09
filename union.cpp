#include <iostream>

using namespace std;

#define MAXN 100100

int pai[MAXN];

int find(int x)
{

    if (pai[x] == x)
    {
        return x;
    }

    return find(pai[x]);
}

void join(int x, int y)
{
    pai[find(x)] = find(y);
}

int main()
{

    return 0;
}