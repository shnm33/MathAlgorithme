#include<iostream>
using namespace std;

int GCD(int a, int b);

int main() {
	int a, b;

	cin >> a >> b;
	cout << GCD(a, b);
}
int GCD(int a,int b){
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
	return t_a;
}