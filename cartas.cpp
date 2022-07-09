#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int nCartas, tot = 1, curr = 1;

    cin >> nCartas;

    vector<int> compra, descarte, morto, emp;

    for (int i = 0; i < nCartas; i++)
    {
        int x;

        cin >> x;

        compra.push_back(x);
    }

    while (morto.size() != nCartas)
    {
        if (compra.size() == 0)
        {
            cout << "new\n";
            tot++;

            compra = descarte;
            descarte = emp;
        }
        else
        {
            if (compra.at(0) == curr)
            {
                curr++;
                morto.push_back(compra.at(0));
                compra.erase(compra.begin());
            }
            else
            {
                descarte.push_back(compra.at(0));
                compra.erase(compra.begin());
            }
        }

        cout << "compra: ";

        for (int i = 0; i < compra.size(); i++)
        {
            cout << compra.at(i) << " ";
        }

        cout << "\n";

        cout << "descarte: ";

        for (int i = 0; i < descarte.size(); i++)
        {
            cout << descarte.at(i) << " ";
        }

        cout << "\n";

        cout << "morto: ";

        for (int i = 0; i < morto.size(); i++)
        {
            cout << morto.at(i) << " ";
        }

        cout << "\n";
        cout << "\n";
        
    }

    cout << tot << "\n";
    return 0;
}