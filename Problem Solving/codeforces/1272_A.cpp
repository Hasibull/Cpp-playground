#include <bits/stdc++.h>

using namespace std;

int calc(int a, int b, int c) {
	return abs(a - b) + abs(a - c) + abs(b - c);
}

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		int a, b, c;
		cin >> a >> b >> c;
		int ans = calc(a, b, c);
		for (int da = -1; da <= 1; ++da) {
			for (int db = -1; db <= 1; ++db) {
				for (int dc = -1; dc <= 1; ++dc) {
					int na = a + da;
					int nb = b + db;
					int nc = c + dc;
					ans = min(ans, calc(na, nb, nc));
				}
			}
		}
		cout << ans << endl;
	}

	return 0;
}
