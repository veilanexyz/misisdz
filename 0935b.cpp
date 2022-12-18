#include <iostream>
int main()
{
    int n, x=0, y=0, k=0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        char d;
        std::cin >> d;
        if (d == 'U') {
            y += 1;
        }
        else {
            x += 1;
        }
        if (x == y && x != 0 && y != 0) {
            k += 1;
        }
    }
    std::cout << k<<std::endl;
    return 0;
}
