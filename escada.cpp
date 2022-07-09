#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main()
{

    int linhas, altTot = 0;

    cin >> linhas;

    vector<int> alturas, complet;

    for (int i = 0; i < linhas; i++)
    {
        int x;
        cin >> x;
        alturas.push_back(x);
    }

    int maxAlt = *max_element(alturas.begin(), alturas.end());
    altTot = accumulate(alturas.begin(), alturas.end(), altTot);

    vector<int> allTempTot;
    vector<int> allTempMod;
    vector<int> allTempSmall;

    for (int i = 1; i <= maxAlt; i++)
    {
        vector<int> temp;
        int modifier = 0, tempTot = 0;
        for (int j = 0; j < linhas; j++)
        {
            if (alturas.at(j) == j + i)
            {
                temp.push_back(alturas.at(j));
            }
            else if (alturas.at(j) <= j + i)
            {
                temp.push_back(alturas.at(j) + ((j + i) - alturas.at(j)));
                modifier += (j + i) - alturas.at(j);
            }
            else if (alturas.at(j) >= j + i)
            {
                temp.push_back(alturas.at(j) - (alturas.at(j) - (j + i)));
                modifier += abs((j + i) - alturas.at(j));
            }
        }

        tempTot = accumulate(temp.begin(), temp.end(), tempTot);

        if (tempTot == altTot)
        {
            allTempTot.push_back(tempTot);
            allTempMod.push_back(modifier);
            allTempSmall.push_back(temp.at(0));

            /* cout << "Modifier: " << modifier << " Temp Tot: " << tempTot << " Tot: " << altTot << " Temp Size: " << allTempTot.size() << "\n";
            for (int i = 0; i < temp.size(); i++)
            {
                cout << temp.at(i) << " ";
            }
            cout << "\n";
            for (int i = 0; i < allTempMod.size(); i++)
            {
                cout << allTempMod.at(i) << " ";
            }
            cout << "\n";
            for (int i = 0; i < allTempTot.size(); i++)
            {
                cout << allTempTot.at(i) << " ";
            }
            cout << "\n";
            for (int i = 0; i < allTempSmall.size(); i++)
            {
                cout << allTempSmall.at(i) << " ";
            }
            cout << "\n"; */
            
        }
    }

    if (allTempMod.size() == 0)
    {
        cout << "-1\n";
    }
    else
    {
        cout << abs(allTempMod.at(0) / 2) << "\n";
    } 

    return 0;
}