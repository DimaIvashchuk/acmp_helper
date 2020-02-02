#include <bits/stdc++.h>
using namespace std;
int main(){
	
	long long int N, S, res = 0;;
	cin>>N>>S;
	multiset<long long int> arr;
	for(int i = 0; i < N; i++){
		long long int x;
		cin>>x;
		arr.insert(x);
	}
	multiset<long long int>::iterator it = arr.begin();
	for(; it != arr.end(); it++){
		if(S - *it < 0){
			cout<<res;
			return 0;
		}
		res++;
		S-=*it;
	}
	cout<<res;
}
