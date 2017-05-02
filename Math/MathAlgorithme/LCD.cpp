#include<iostream>
using namespace std;

int LCD(int a, int b);

int main() {

	int a, b;
	cin >> a >> b;

	cout << LCD(a, b);

	return 0;

}

int LCD(int a, int b) {
	int c, d;
	c = a;
	d = b;
	while (d != 0) {
		int r = c%d;
		c = d;
		d = r;
	}
	return c* a/c * b/c;
}