#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int pecas[1001];
    int sum = 0;
    for (int i = 0; i < n-1; i++)
    {
        cin >> pecas[i];
        sum += pecas[i];
    }
    
    cout << (n*(n+1)/2) - sum << "\n";

}