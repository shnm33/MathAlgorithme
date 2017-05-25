#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>

using namespace std;
vector<int> a[20001];
int color[20001];

void dfs(int node, int c) {

	color[node] = c;
	for (int i = 0; i<a[node].size(); i++) {
		int next = a[node][i]; // 다음노드
		if (color[next] == 0) { // 다음 노드의 컬러가 0 이면
			dfs(next, 3 - c); // (3-1) / (3-2)가 번갈아가면서 실행
		}
	}
}

int main() {

	int n, m;

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++) {
		a[i].clear(); // 그래프 색상 초기화
		color[i] = 0;
	}
	for (int i = 0; i<m; i++) {		// 그래프 입력
		int u, v; 
		scanf("%d %d", &u, &v);
		a[u].push_back(v);
		a[v].push_back(u);
	}
	for (int i = 1; i <= n; i++) {
		if (color[i] == 0) {//색이 칠해지지 않은 노드면
			dfs(i, 1); // dfs 실행
		}
	}

	bool ok = true;

	for (int i = 1; i <= n; i++) {
		for (int k = 0; k<a[i].size(); k++) {
			int j = a[i][k];
			if (color[i] == color[j]) {//전 노드와 다음노드 색이 같으면
				ok = false;
			}
		}
	}
	printf("%s\n", ok ? "YES" : "NO");

return 0;

}