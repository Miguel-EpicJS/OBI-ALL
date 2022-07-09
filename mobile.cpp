#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;

    cin >> n;

    int mobiles[10001][2];
    int pesos[10001] = {};
    
    vector< vector<int> > connections = vector<vector<int>>(10001);


    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            cin >> mobiles[i][j];
        } 

    }

    for (int i = 0; i < n; i++)
    {

        pesos[mobiles[i][1]] += 1;

        connections.at(mobiles[i][1]).push_back(mobiles[i][0]);
    }

    cout << "\n";

    for (int i = 0; i < n; i++)
    { 
        cout << pesos[mobiles[i][1]] << "(" << mobiles[i][1] << ") ";
    }
    cout << "\n";
    for (int i = 0; i <= n; i++)
    { 

        cout << i << "("; 
        for (long unsigned int j = 0; j < connections.at(i).size(); j++)
        {
            cout << connections.at(i).at(j) << ", ";            
        }
        cout << ")" << connections.at(i).size() <<  "\n";

    }

    cout << "\n";

    return 0;
}