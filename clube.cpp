// COMPLETO

#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c, d, e, f, g;

    cin >> n >> a >> b >> c >> d >> e >> f >> g;

    cout << ((a+b+c) - (d+e+f) + g > n ? "S" : "N") << "\n"; 

    return 0;
}