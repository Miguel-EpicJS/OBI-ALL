#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int f, c, e, b;

    cin >> f >> c >> e >> b;

    char pos[] = {'A', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    if (b > (f-e)*c) cout << "PROXIMO VOO" << endl;
    else cout << ceil(b / c) + e << " " << pos[b%c] << "\n";


    return 0;
}