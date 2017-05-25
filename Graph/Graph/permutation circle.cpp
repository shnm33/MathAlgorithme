#include <iostream>

using namespace std;
int a[1001];
bool c[1001];

void dfs(int x) {
	if (c[x]) return; // true �� �̹� �湮�� ���
	c[x] = true; // �湮�� ���� üũ
	dfs(a[x]);// ���� ���� ����
}

int main() {
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i]; //�� �Է�
		c[i] = false; // �ʱ�ȭ
	}
	int PCN = 0;//Permutation Circle Number
	for (int i = 1; i <= n; i++) {
		if (c[i] == false) {//�̹湮�̸�
			dfs(a[i]);//Ž�� ����
			PCN++;//�Ϸ��� ���� ����Ŭ �� ����
		}
	}
	cout << PCN << endl;
}