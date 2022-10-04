#include <iostream>
using namespace std;
int main() {
    int x = 0, a, b, c, d;
    cin >> x;
    for (int i = x + 1; i <= 10000; i++){
        a = i / 1000;
        b = (i / 100) % 10;
        c = (i % 100) / 10;
        d = i % 10;
        if (a != b && b != c && c != d && a != c && a != d && b != d){
            cout << i;
            break;
        }
    }
}
