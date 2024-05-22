#include<bits/stdc++.h>

using namespace std;

bool binarySearch(int a[], int l, int r, int pivot){
	if (l > r) return false;
	else{
		int m = (l + r) / 2;
		if (a[m] == pivot) return true;
		if (a[m] > pivot) return binarySearch(a, l, m - 1, pivot);
		else return binarySearch(a, m + 1, r, pivot);
	}
}

int main(){
	int n, x;
	cin >> n >> x;
	int a[n + 1];
	for (int i = 1; i <= n; i++) cin >> a[i];
	cout << binarySearch(a, 1, n, x);
	return 0;
}
