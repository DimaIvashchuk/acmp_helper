#include <iostream>

using namespace std;

int main() {
	int N;
	
	cin >> N;	
	
	int *a = new int[N];
	int minInd = 0;
	int maxInd = 0;
	int sum = 0, exp = 1;
	
	for(int i = 0; i < N; i++) {
		cin >> a[i];
		if(a[i] > a[maxInd])
			maxInd = i;
		if(a[i] < a[minInd])
			minInd = i;
		if(a[i] >= 0)
			sum += a[i];
	}
	
	for(int i = min(maxInd, minInd) + 1; i < max(maxInd, minInd); i++)
		exp *= a[i];
	
	cout << sum << ' ' << exp;
	return 0;
}
