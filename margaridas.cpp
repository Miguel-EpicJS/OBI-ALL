#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMax(int mat[1001][1001], int l, int c)
{
 
    int maxElement = 0;
 
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            if (mat[i][j] > maxElement) {
                maxElement = mat[i][j];
            }
        }
    }
 
    return maxElement;
}

int sumSubMatrix(int mat[1001][1001], int sX, int sY, int eX, int eY) {

    int sum = 0;

    for (int i = sX; i < eX; i++)
    {
        
        for (int j = sY; j < eY; j++)
        {
            
            sum += mat[i][j] ;

        }
        
    }
    
    return sum;
}

int main()
{

    int l, c, m, n;

    cin >> l >> c >> m >> n;

    int matriz[1001][1001];

    vector<int> el;

    for (int i = 0; i < l; i++)
    {
        
        for (int j = 0; j < c; j++)
        {
            
            cin >> matriz[i][j];

        }
        

    }
    
    if (m == 1 && n == 1)
    {
        cout << findMax(matriz, l, c) << "\n";
    } else {

        for (int i = 0; i < l; i+=m)
        {
            for (int j = 0; j < c; j+=n)
            {
                
                el.push_back(sumSubMatrix(matriz, i, j, i+m, j+n)); 

            }
            
        }
        
        cout << *max_element(el.begin(), el.end()) << "\n";
        
    }


    

    return 0;   
}