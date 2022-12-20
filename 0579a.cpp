#include <iostream>

int main() {
    int a = 0; 
    std::cin >> a;
    int k = 0;
    while (a != 0) {
        k += a & 1;
        a = a >> 1;
    }
    std::cout << k;
    return 0;
}
