#include <iostream>
int main()
{
    int k = 0;
    int a[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            std::cin >> a[i][j];
            if(a[i][j] == 1)
                k = abs(i - 2) + abs(j - 2);
        }
    }
    std::cout<<k;
    return 0;
}
