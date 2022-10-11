#include <iostream>
#include <cmath>
#include <vector>
int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {

        int n, k, d;
        std::cin >> n;
        std::vector<int> a;
        std::vector<int> b;
        for (int j = 0; j < n * 2; j++) {
            std::cin >> d;
            a.push_back(d);
        }
        for (int j = 0; j < n; j++) {
            std::cin >> d;
            b.push_back(d);
        }
        for (int j = 0; j < n * 2; j += 2) {
            k = a[j];
            a[j] = a[j] + b[j / 2];
            a[j + 1] = a[j] + ceil((a[j + 1] - a[j]) / 2);
        }
        std::cout << a[n * 2 - 1]<<std::endl;
    }
    return 0;
}
