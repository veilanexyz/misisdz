#include <iostream>
#include <cmath>
int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        
        int n, k;
        std::cin >> n;
        int* a = new int [n * 2];
        int* b = new int[n];
        for (int j = 0; j < n * 2; j++) {
            std::cin >> a[j];
        }
        for (int j = 0; j < n; j++) {
            std::cin >> b[j];
        }
        for (int j = 0; j < n*2; j+=2) {
            k = a[j];
            a[j] = a[j] + b[j];
            a[j + 1] = a[j] + ceil((a[j + 1] - k) / 2);
        }
        std::cout << a[n*2-1];
    }
    return 0;
}
