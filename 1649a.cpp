#include <iostream>
#include <cmath>
#include <vector>
int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int  b, n, k = 0;
        std::cin >> n;
        std::vector<int> a;
        for (int j = 0; j < n; j++) {
            std::cin >> b;
            a.push_back(b);
        }
        for (int j = 0; j < n - 1; j++) {
            if (a[j] != a[j + 1]) {
                k += 1;
            }
        }
        std::cout << k<<std::endl;
    
        
    }
    return 0;
}
