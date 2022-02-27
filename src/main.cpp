#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto sum = int{ 0 };
	for (int i = 0; i <= n; ++i) {
		sum += (i + 1) * i + (i * (i + 1)) / 2;
	}

	cout << sum;

	return 0;
}