#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;

vector<int> a[1001];
bool check[1001];


void dfs(int node) {
	check[node] = true;
	printf("%d ", node);
	for (int i = 0; i < a[node].size(); i++) {
		int next = a[node][i];
		if (check[next] == false) { // 미방문일시dfs 실행 
			dfs(next); 
		}
	}
}	
int main() {
	int n, m; 
	int components = 0;


	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++) {
		int u, v;
		scanf("%d %d", &u, &v);
		a[u].push_back(v);
		a[v].push_back(u);
	}
	for (int i = 1; i <= n; i++) {
		if (check[i] == false) {//해당 노드가 비 방문 노드면 탐색 후 갯수 +1
			dfs(i); 
			components += 1;
		}
	}
	printf("%d\n", components);

	return 0;
}