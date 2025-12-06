#include "dependencies.h"

void aprox() {
	double value = 0,
		valuex=0,
		step = 0.1,
		prev = -0.1,
		current = 0;
	while (true) {
		valuex = func1(prev) - func2(prev);
		value = func1(current) - func2(current);
		if (value == 0) break;
		if (valuex < value) {
			step = -step;
			step *= step;
		}
		else {
			prev = current;
			current += step;
		}
		std::cout << current << '\n';
	}
	std::cout << round_acc(current, accuracy);
}