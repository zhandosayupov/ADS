#include <bits/stdc++.h>

using namespace std;

vector<long long> primes;

void SieveOfEratosthenes(int n){
	vector<bool> primity (n + 1, true);
	primity[0] = primity[1] = false;
	for(int i = 2; i <= n; i++){
		if(primity[i]){
			primes.push_back(i);
			if(i * 1LL * 1 <= n){
				for(int j = i * i; j <= n; j += i){ //start from i * i, because numbers less i * i have lower primes
					prime[j] = false;
				}
			}
		}
	}
}

int main(){
	SieveOfEratosthenes(10000);
	cout << primes[10]
}