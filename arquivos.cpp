#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N, B;

    cin >> N >> B;

    vector<int> val(N);

    for (int i = 0; i < N; i++)
    {
        cin >> val[i];
    }

    sort(val.begin(), val.end());
    
    int result = N;

    vector<bool> mark(N, false);    

    int j = N-1;

    for (int i = 0; i < N; i++)
    {
        if(mark[N]) continue;

        while (j >= 0 && val[j] + val[i] > B) j--;
        
        if (j > i)
        {
            mark[i] = mark[j] = true;
            result--;
            j--;
        }
    }
    
    cout << result << "\n";

    return 0;
}