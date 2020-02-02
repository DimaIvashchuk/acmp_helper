#include<bits/stdc++.h>
using namespace std;
int main(){
	int N, i=0;
	ios::sync_with_stdio(false);
	cin>>N;
	long long int a[N];
	for(; i < N; i++)
		cin>>a[i];
	sort(a, a+N);
	cout<<max(a[0]*a[1]*a[N-1], a[N-1]*a[N-2]*a[N-3]);
}
