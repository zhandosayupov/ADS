#include <bits/stdc++.h>

using namespace std;

long long BinaryExponentiation(long  long number, long long exp){
	long long answer = 1;
	while(n){
		if(n % 2 == 1){
			answer *= number;
			exp--;
		}
		else{
			answer *= answer;
			n /= 2;
		}
	}
	return answer;
}

int main(){
	int n, m; cin >> n >> m;
	cout << BinaryExponentiation(n, m);
}