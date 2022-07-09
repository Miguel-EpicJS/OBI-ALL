#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main()
{

    int linhas, colunas, linhasColidas, colunasColidas, sum = 0;

    cin >> linhas >> colunas >> linhasColidas >> colunasColidas;

    vector<vector<int>> fazenda(linhas);      // matrix
    vector<int> fazendaArr(linhas * colunas); // array

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {

            int x;

            cin >> x;
            fazenda[i].push_back(x);
            fazendaArr.push_back(x);
        }
    }

    if (linhasColidas == 1 && colunasColidas == 1)
    {
        cout << *max_element(fazendaArr.begin(), fazendaArr.end()) << "\n";
    }
    else if (linhasColidas == linhas && colunasColidas == colunas)
    {
        sum = accumulate(fazendaArr.begin(), fazendaArr.end(), sum);
        cout << sum << "\n";
    }
    else
    {
        vector<int> fazendaSum;
        for (int i = 0; i <= fazenda.size() - linhasColidas; i++)
        {
            for (int j = 0; j <= fazenda.at(i).size() - colunasColidas; j++)
            {
                int arrS = 0;
                for (int ic = 0; ic < linhasColidas; ic++)
                {
/*                     cout << fazenda.at(i+ic).at(j) << " ";
 */                    arrS += fazenda.at(i+ic).at(j);
                    /* cout << "(" << i+ic << "," << " " << j << ") "; */
                    for (int jc = 1; jc < colunasColidas; jc++)
                    {
/*                         cout << fazenda.at(i+ic).at(j+jc) << " ";
 */                        arrS += fazenda.at(i+ic).at(j+jc);
                        /* cout << "(" << i+ic << "" << ", " << j+jc << ") "; */
                    }
                }
                 
                fazendaSum.push_back(arrS);
                
/*                 cout << "\n";
 */                


            }
        }

        cout << *max_element(fazendaSum.begin(), fazendaSum.end()) << "\n";
    }

    return 0;
}