// COMPLETO

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int c;

    cin >> c;

    vector<int> consultas(100000);
    bool fab[1000000] = {0};

    for (int i = 0; i < c; i++)
    {
        cin >> consultas[i];
    }

    int tot = 0;

    for (int i = 0; i < c; i++)
    {
        if (!fab[consultas[i]])
        {
            tot += 2;
            fab[consultas[i]] = true;
        } else {
            fab[consultas[i]] = false;
        }
        
    }

    cout << tot << "\n";

    return 0;
}