#include <cstdio>

int GCD(int a, int b) {

	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main() {

	int tc;
	scanf_s("%d",&tc);

	while (tc--) {
		int sum = 0;
		int a[111];
		int n;

		scanf_s("%d", &n);

		for (int i = 0; i < n; i++) {
			scanf_s("%d", &a[i]); 
		}
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++){
				sum += GCD(a[i], a[j]);
			}
		}

		printf("%d", sum);
	}


	return 0;
}