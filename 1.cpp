#include <iostream>
#include <math.h>
int main()
{
	int a;
	std::cin >> a;
	std::cout << (1 + a) * 1. / 2. * (fabs(a - 1) +1);
}
