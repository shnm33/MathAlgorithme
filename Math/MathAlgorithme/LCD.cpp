#include<iostream>
#include<math.h>
using namespace std;

int LCD(int a, int b);
int main() {
	int a, b;
	cin >> a >> b;
	cout << LCD(a, b);
	return 0;
}

int LCD(int a, int b) {
	int t_a, t_b, r;
	if (a > b) {
		t_a = a;
		t_b = b;
	}
	else {
		t_a = b;
		t_b = a;
	}
	while (t_b != 0) {
		r = t_a % t_b;
		t_a = t_b;
		t_b = r;
	}
	return a*b*t_a;
}