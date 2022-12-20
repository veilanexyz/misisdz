#include <iostream>
#include <cmath>
#include <fstream>
#include "complex.hpp"
/*double ravnomer(const Rdec2D&, v_c, v_m) {
	double r_something = norm(const Rdec2D cat) + v_c;
}*/

/*double normalizecat(const Rdec2D&, s_c, s_m, v_m) {
	double v = ((s_m - s_c) / abs(s_m - s_c)) * v_m;
	return v;
}*/


//скорость через вектор реализовать!!!!!!!!!!!
//+точка норы (либо задать лежащую на ОХ или на ОУ)
//mouse может не только по перпендикуляру
int main() {
	std::ofstream file{ "table.txt" };
	Rdec2D cat{ 0.0, 5.0 };
	Rdec2D mouse{ 0.0, 7.0 };
	Rdec2D v_c{ 0.0, 5.0 };
	Rdec2D v_m {0.0, 7.0 };
	Rdec2D point{ 0.0, 10.0 };
	int n = 0;
	file<< "n	t	x	y	v_x    v_y"<<"\n";
	for (double t = 0; t < 10; t++) {
		Rdec2D vec_cat_to_mouse = mouse - cat;
		v_c = edi(vec_cat_to_mouse) * norm(v_c);
		cat += v_c * t;
		mouse +=  v_m * t;
		file << n << "	" << t << "    " << cat.x << "	" << cat.y << "    " << cat.x/t << "	" << cat.y/t << "    "<<"\n";
		std::cout << v_c<<std::endl;
		n += 1;
	}
}
