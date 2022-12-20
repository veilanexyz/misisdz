#include <iostream>
#include <cmath>
float fact(float i) {
	float k = 1.0;
	for (float j = 1.0; j < i; j+=1.0) {
		k *= j;
	}
	return k;
}
int main() {
	float s = 0.0;
	float i = 1.0;
	for (float x = 0.1; x <= 1; x += 0.05) {
		while (s < 0.0001) {
			s += (pow((2.0 * x), i)) / fact(i);
			i += 1.0;
		}
		std::cout << "x = " << x << std::endl;
		std::cout << "s = " << s << std::endl;
		s = 0.0;
		i = 1.0;
	}
	return 0;
}
