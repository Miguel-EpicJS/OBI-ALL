#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);
  
    int index = it - v.begin();
    return index;
    
}

int main()
{
    vector<int> gab = { 4, 5, 6, 7, 12, 11, 13, 1, 2, 3 };

    int partidas, lApt = 0, lBpt = 0, Apt = 0, Bpt = 0;

    cin >> partidas;

    vector< vector<int> > adalberto(partidas, vector<int>(3)), bernadete(partidas, vector<int>(3)); 

    for (int i = 0; i < partidas; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            int x;

            cin >> x;

            adalberto.at(i).at(j) = x;   
        }
        for (int j = 0; j < 3; j++)
        {
            int x;
            
            cin >> x;

            bernadete.at(i).at(j) = x;
        }
        
    }
        

    for (int i = 0; i < partidas; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            if ( getIndex( gab, adalberto.at(i).at(j)) >= getIndex( gab, bernadete.at(i).at(j)) )
            {
                lApt++;
            } else {
                lBpt++;
            }
        }


        if (lApt >= lBpt)
        {
            Apt++;
        } else {
            Bpt++;
        }

        lApt = 0;
        lBpt = 0;
    }
    
    cout << Apt << " " << Bpt << "\n";
    

    return 0;
}