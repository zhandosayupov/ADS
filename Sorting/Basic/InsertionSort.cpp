#include <bits/stdc++.h>

using namespace std;

template<typename C>
void InsertionSort(C& container, int first, int last){
	int j;
	for(int i = first + 1; i < last; i++){
		auto temp = container[i];
		j = i - 1;
		while(j >= 0 and container[j] > temp){
			container[j + 1] = container[j];
			j = j - 1;
		}
		container[j + 1] = temp;
	}
}

int main(){
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	InsertionSort(a, 0, n);
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}