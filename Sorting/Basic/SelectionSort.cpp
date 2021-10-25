#include <bits/stdc++.h>

using namespace std;

template<typename C>
void SelectionSort(C& container, int first, int last){
	for(int i = first; i < last; i++){
		int min_index = i;
		for(int j = i; j < last; j++){
			if(container[min_index] > container[j]){
				min_index = j;
			}
		}
		if(min_index != i){
			swap(container[min_index], container[i]);
		}
	}
}

int main(){
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	SelectionSort(a, 0, n);
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}