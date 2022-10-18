#include <iostream>
#include <string>
int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k = 1;
        std::cin >> n;
        std::string s;
        
        std::cin >> s;
        if (n == 1) {
                k = 0;
        }
        if (n == 2 && (s[0] == 'W' || s[1] == 'W')) {
            k = 0;
        }
        if(n>2) {
            for (int j = 0; j < n - 2; j++) {
                if (s[j] == s[j + 1] && s[j + 1] == s[j + 2] && s[j] != 'W' && s[j+1] != 'W' && s[j+2] != 'W') {
                    k = 0;
                }
                if (s[j + 1] == 'W' && s[j] != 'W' && s[j + 2] != 'W') {
                    k = 0;
                }
            
            }

        }
        
        if (k == 1) {
            std::cout << "YES" << std::endl;
        }
        if (k == 0) {
            std::cout << "NO" << std::endl;
        }

    }
    
    
    return 0;
}
