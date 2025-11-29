#include <iostream>
#include "Header1.h"

using namespace std;
void checkValidParams(int n, double h) {
	if (n < 1 || h == 0.0) {
		throw "Wrong Data";
	}
}
double calculate(int n, double x) {
	double y = 0.0;
	if (x < 0.0) {
		for (int i = 1; i <= n - 1; i++) {
			for (int j = 1; j <= n; j++) {
				y += (x - i + j);
			}
		}
	}
	else {
		for (int i = 1; i <= n - 1; i++) {
			y += x / static_cast<double>(i);
		}
	}
	return y;
}
