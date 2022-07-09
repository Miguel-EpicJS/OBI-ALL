#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int l, a, p, r;

    cin >> l >> p >> p >> r;

    bool cabe = sqrt(pow(l, 2) + pow(a, 2) + pow(p, 2)) <= r*2;
	cout << (cabe ? "S" : "N") << endl;

    return 0;
}