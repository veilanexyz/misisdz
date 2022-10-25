#include <iostream>
#include <cmath>
int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int n, s = 1;
        std::cin >> n;
        for (int j = 0; j < n; j++) {
            int z;
            std::cin >> z;
            s *= z;
        }
        int ss = s, kk = 0, k = 0;
        while (ss % 2 == 0) {
            ss /= 2;
            kk++;
        }
        for (int j = ((n / 2) * 2); j > 0; j -= 2) {
            int o = j, m = 0;
            while (o % 2 == 0) {
                o /= 2;
                m++;
            }
            if (n - kk != 0) {
                k += 1;
                kk += m;
            }
            if (n - kk <= 0) {
                break;
            }
        }
        if (kk < n) {
            std::cout << -1 << std::endl;
        }
        else {
            std::cout << k << std::endl;
        }
        
        
    }
    return 0;
}
