#include <iostream>
using namespace std;
int check[1000000];

int pow(int x, int p) {// x의 자리수를 p번 곱함;
	int ans = 1;
	for (int i = 0; i<p; i++) {
		ans = ans * x;
	}
	return ans;
}

int next(int a, int p) {
	int ans = 0;
	while (a > 0) {
		ans += pow(a % 10, p);//1의 자리수를 p 번 곱함
		a /= 10;//1의 자리수 삭제
	}
	return ans;
}

int length(int a, int p, int cnt) {

	if (check[a] != 0) {//사용한 노드면 리턴
		return check[a] - 1; // 전 카운트값으로 리턴
	}

	check[a] = cnt; // check[a]에 cnt값 입력

	int b = next(a, p);// 다음 수열 수 구함
	return length(b, p, cnt + 1);//다음 수열의 수로 탐색 시작

}

int main() {

	int a, p;

	cin >> a >> p;

	cout << length(a, p, 1) << '\n';

	return 0;

}