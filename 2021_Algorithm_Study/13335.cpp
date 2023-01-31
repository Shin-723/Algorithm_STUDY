#include <iostream>
#include <algorithm>
#include <vector>

#define INF 987654321

using namespace std;

int arr[1001];

int main() {
	int n, w, l;
	cin >> n >> w >> l;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	vector<int> v;
	int time = 0, total = 0;
	for (int i = 0; i < n; i++) {
		while (1) {
			if (v.size() == w) {
				total -= v.front();
				v.erase(v.begin());
			}
			if (total + arr[i] <= l) break;
			v.push_back(0);
			time++;
		}
		v.push_back(arr[i]);
		total += arr[i];
		time++;
	}
	cout << time + w << "\n";
	return 0;
}