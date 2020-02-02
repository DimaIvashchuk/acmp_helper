#include <iostream>
#include <math.h>
int main()
{
    int a;
     
    std::cin >> a;
    long long b = floor((1 + a) * 1. / 2. * (fabs(a - 1) +1));
    std::cout << b;
}
