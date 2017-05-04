#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>

using namespace std;

long long a[1000000];
int main() {
	int n;
	int cnt = 1;
	int ans_cnt = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a,a+n);

	long long ans = a[0];

	for (int i = 1; i < n; i++) {
		if (a[i - 1] == a[i]) {
			cnt++;
		}
		else cnt = 1;
		if (ans_cnt < cnt) {
			ans_cnt = cnt;
			ans = a[i];
		}
	}
	cout << ans <<" " <<ans_cnt; 
}