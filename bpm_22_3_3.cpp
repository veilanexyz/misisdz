#include <iostream>
#include <string>
int main() {
	std::string s;
	int a = 0, b = 0, c = 0;
	std::cin >> s;
	for (int i = 0; i < s.size() - 1; i++) {
		if (s[i] != '.') {
			if (s[i] == 'A' && (s[i + 1] != 'A' && s[i + 2] != 'A' || s[i + 1] == '.' || s[i + 2] == '.')) {
				a += 1;
			}
			if (s[i] == 'B' && (s[i + 1] != 'B' && s[i + 2] != 'B' || s[i + 1] == '.' || s[i + 2] == '.')) {
				b += 1;
			}
			if (s[i] == 'C' && (s[i + 1] != 'C' && s[i + 2] != 'C' || s[i + 1] == '.' || s[i + 2] == '.')) {
				c += 1;
			}
		}
		if ((i + 1) % 3 == 0 && (a == b && b == c && a == c) && s[i] != '.')
		{
			std::cout << "YES" << std::endl;
			return 0;
		}
	}
	std::cout << "NO" << std::endl;
	return 0;
}
