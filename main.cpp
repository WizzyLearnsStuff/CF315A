#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	int a[1000], b[1000];

	int hist[1001] = {0};

	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		hist[b[i]]++;
	}

	int count = 0;
	for (int i = 0; i < n; i++) {
		count += (a[i] == b[i] && hist[a[i]] < 2) || (hist[a[i]] == 0);
	}

	cout << count;
}
