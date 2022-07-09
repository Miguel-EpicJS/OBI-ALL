#include <iostream>
#include <vector>

using namespace std;

int main() {

    int s, t, p;    


    cin >> s >> t >> p;

    vector<int> sizes(s);
    vector<vector<int>> paths(t);
    vector<int> current;

    current.push_back(p);

    for (int i = 0; i < s; i++)
    {
        cin >> sizes.at(i);
    }
    
    for (int i = 0; i < t; i++)
    {
        int x, y;

        cin >> x >> y;

        paths.at(x-1).push_back(y);
        paths.at(y-1).push_back(x);
    }
    int tot = 0;

    for (int i = 0; i < paths.at(current.back()-1).size(); i++)
    {
        while (sizes.at(paths.at(current.back()-1).at(i)-1) < sizes.at(current.back()-1))
        {
            cout << current.back() << " " << paths.at(current.back()-1).at(i) << " " << sizes.at(paths.at(current.back()-1).at(i)-1) << "\n";
            current.push_back(paths.at(current.back()-1).at(i));
            tot++;
        }
        
    }

    cout << tot << "\n";

    return 0;
}