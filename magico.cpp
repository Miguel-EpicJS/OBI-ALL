#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int square[11][11];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> square[i][j];
        }
        
    }
    
    int sum = 0;
    int tot = 0;


    for (int i = 0; i < n; i++)
    {
        sum += square[i][0];
    }
    
    for (int i = 0; i < n; i++)
    {
        int tempS = 0;
        for (int j = 0; j < n; j++)
        {
            
            tempS += square[i][j];

        }
        
        if (tempS == sum) {
            tot++;
        }

    }
    for (int i = 0; i < n; i++)
    {
        int tempS = 0;
        for (int j = 0; j < n; j++)
        {
            
            tempS += square[j][i];

        }
        
        if (tempS == sum) {
            tot++;
        }

    }

    

    cout << tot << "\n";   

    return 0;
}