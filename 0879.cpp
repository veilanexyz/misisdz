#include <iostream>
#include <queue>

int main() {
    long long k = 0;
    int n = 0, c = 0, m = 0;
    std::queue<int> q;
    std::cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int a = 0;
        std::cin >> a;
        if (m < a) {m = a;}
        q.push(a);
    }
    int f = q.front();
    if (f == m) {
        std::cout << f;
    }
    else {
        while (c != k) {
        q.pop();
        if (f > q.front()) {
            c += 1;
            q.push(q.front());
        }
        else {
          if(f != m){
            c = 1;
            q.push(f);
            f = q.front();}
            else {
                break;
            }
        }
        }
        std::cout << f;
    }
    return 0;
}
