#include <iostream>
#include <queue>
#include <algorithm>
int main()
{
    int n, z[1000], min = 10000, m = 0;
    int a[1000];
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = n; j > i; j--) {
            if (a[i] == a[j]) {
                z[a[i]] = j;
            }
            
        }
    }
    for (int i = 0; i < sizeof(z); i++) {
        if (min > z[i] && z[i] != 0) {
            min = z[i];
            m = i;
        }
    }
    std::cout << m << std::endl;
    return 0;
}
//лучше через map или set или с массивом с длиной между первым и последним вхождением столовой 
