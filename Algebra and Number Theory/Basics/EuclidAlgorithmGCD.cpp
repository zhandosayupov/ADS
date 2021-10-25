#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b){
	while(b){
		a %= b;
		swap(a, b);
	}
	return a;
}

int main(){
	int a, b; cin >> a >> b;
	cout << gcd(a, b);
}