#include <iostream>

using namespace std;

int main() {

    int resp=0, x, y, z;
    cin >> x >> y >>z;
    
    // Se x>=y e x<=z, x é o número do meio
    if (x>=y && x<=z) {
        resp=x;
    }
    
    // Se x>=z e x<=y, x é o número do meio
    if (x>=z && x<=y) {
        resp=x;
    }
    
    // Se y>=x e y<=z, y é o número do meio
    if (y>=x && y<=z) {
        resp=y;
    }
    
    // Se y>=z e y<=x, y é o número do meio
    if (y>=z && y<=x) {
        resp=y;
    }
    
    // Se z>=x e z<=y, z é o número do meio
    if (z>=x && z<=y) {
        resp=z;
    }
    
    // Se z>=y e z<=x, z é o número do meio
    if (z>=y && z<=x) {
        resp=z;
    }
    cout << resp << "\n";

    return 0;
}