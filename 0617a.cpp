#include <iostream>
using namespace std;
int main() {
    int x = 0, k = 0;
    cin >> x;
    k += x / 5;
    x %= 5;
    k += x / 4;
    x %= 4;
    k += x / 3;
    x %= 3;
    k += x / 2;
    x %= 2;
    cout << k + x;
    
}
