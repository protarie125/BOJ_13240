#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	const auto& vc = vector<char>{ '*', '.' };

	int n, m;
	cin >> n >> m;

	for (auto i = 0; i < n; ++i) {
		for (auto j = 0; j < m; ++j) {
			cout << vc[(i + j) % 2];
		}
		cout << '\n';
	}

	return 0;
}