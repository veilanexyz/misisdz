#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
    int n;
    std::vector<int> v1;
    std::cin >> n;
    for (int i = 0; i < n * 4; i++) {
        int k = 0;
        for (int j = 0; j < 4; j++) {
            int a;
            std::cin >> a;
            k += a;
        }
        std::cin >> k;
        v1.push_back(k);
    }
    int t = v1[0];
    sort(v1.begin(), v1.end());
    for (int i = n; i > 0; i--) {
        if (t == v1[i]) {
            std::cout << i + 1 << std::endl;
        }
    }
    return 0;
}
//что-то не так с вектором
