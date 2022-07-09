#include <iostream>

using namespace std;

bool is_set(int x, int i)
{
    bool ret = ((x & (1 << i)) != 0);
    return ret;
}

int lsb(int x)
{
    return x & -x;
}

int count_bits(int x)
{
    int ret = 0;
    while (x != 0)
    {
        ++ret;
        x -= x & -x;
    }

    return ret;
}

int is_power_of_two(int x)
{
    if (x == 0)
    {
        return 0;
    }
    return ((x & (x - 1)) == 0);
}

int connect(int x, int i)
{
    return x | (1 << i);
}

int connect(int x, int i)
{
    x |= (1 << i);
    x ^= (1 << i);
    return x;
}

int main()
{

    return 0;
}