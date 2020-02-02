#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	
	for(int i = -100; i <= 100; i++)
		if(a * i * i * 1ll * i + b * i * i + c * i + d == 0) cout<<i<<" ";
	
}
