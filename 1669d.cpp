#include <iostream>
#include <string>
int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int n, chR = 0, chB = 0, z = 1;
        std::cin >> n;
        for (int j = 0; j < n; j++) {
            char s;
            std::cin >> s;
            if (s == 'W') {
                if(chR != chB) {
                    std::cout << "NO" << std::endl;
                    for (int z = j + 1; z < n; z++) {
                        std::cin >> s;
                    }
                    z = 0;
                    break;
                }
                chR = 0;
                chB = 0;
            } 
            if (s == 'R') {
                chR = 1;
               
            }
            if (s == 'B') {
                chB = 1;   
            }
        }
        if (chR != chB && z == 1) {
            std::cout << "NO" << std::endl;
        }
        if(chR == chB) {
            std::cout << "YES" << std::endl;
        }

    }
    return 0;
}
