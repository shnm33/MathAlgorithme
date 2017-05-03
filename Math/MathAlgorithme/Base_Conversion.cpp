#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	int n, b;
	string s = "";

	cin >> n >> b;
	
	while (n > 0) {
		int r = n % b;
		if (r < 10) {
			s += (char)(r +'0');
		}
		else {
			s += (char)(r + 'A' - 10);
		}
		n = n / b;
	}
	
	reverse(s.begin(), s.end());
	cout << s;
	return 0;
}