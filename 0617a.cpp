#include <iostream>
int main() {
    int x = 0, k = 0;
    std::cin >> x;
    k += x / 5;
    x %= 5;
    k += x / 4;
    x %= 4;
    k += x / 3;
    x %= 3;
    k += x / 2;
    x %= 2;
    std::cout << k + x;
    
}
