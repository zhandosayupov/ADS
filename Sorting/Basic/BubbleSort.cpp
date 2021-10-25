#include <bits/stdc++.h>

using namespace std;

template<typename C>
void BubbleSort(C& container, int first, int last){
	for(int i = first; i < last; i++){
		for(int j = first; j < last - i - 1; j++){
			if(container[j] > container[j + 1]){
				swap(container[j], container[j + 1]);
			}
		}
	}
}

int main(){
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	BubbleSort(a, 0, n);
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}