#include <iostream>
#include <cmath>
#include <fstream>
#include "complex.hpp"
int main() {
	std::ofstream file{ "fiziktable.txt" };
	Rdec2D body{ 2.3, 5.6 };
	Rdec2D v_body{ 3.0, 9.7 };
	double k = 3.0;
	double m = 4.6;
	double mas = 5.0;
	file << "n	t	x	y	v_x    v_y	a_x	a_y" << "\n";
	int n = 0;
	for (int t = 0; t < 10; t++) {
		Rdec2D rx = -k * (body - (body + v_body * t));
		Rdec2D rt = -m * (edi(body));
		Rdec2D r = rx + rt;
		file << n << "	" << t << "    " << r.x << "	" << r.y << "    " << v_body.x << "		" << v_body.y << "    " << r.x / mas << "	"<<r.y / mas "\n";
		n += 1;
	}
	
}
