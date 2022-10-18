#include <iostream>
int main()
{
    int n, a[100], b[100];
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        std::cin >> k;
        a[k - 1] = i+1;
    }
    for (int i = 0; i < n; i++) {
        std::cout << a[i]<<' ';
    }
    
    return 0;
}
