#include <iostream>

using namespace std;
int a[1001];
bool c[1001];

void dfs(int x) {
	if (c[x]) return; // true 면 이미 방문한 노드
	c[x] = true; // 방문한 노드로 체크
	dfs(a[x]);// 다음 노드로 실행
}

int main() {
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i]; //값 입력
		c[i] = false; // 초기화
	}
	int PCN = 0;//Permutation Circle Number
	for (int i = 1; i <= n; i++) {
		if (c[i] == false) {//미방문이면
			dfs(a[i]);//탐색 실행
			PCN++;//완료후 순열 사이클 수 증가
		}
	}
	cout << PCN << endl;
}