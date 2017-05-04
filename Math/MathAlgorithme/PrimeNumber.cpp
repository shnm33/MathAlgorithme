#include<iostream>
#include<string>
using namespace std;
bool prime(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int main() { 
	
	int t, cnt = 0;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		if (prime(n)) {
			cnt++;
		}
	}
		cout << cnt;

	return 0;

}