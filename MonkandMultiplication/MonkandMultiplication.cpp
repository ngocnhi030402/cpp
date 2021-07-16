#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	priority_queue<int> q;
	int x = 1;
	int n, a[1000], b[3];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		q.push(a[i]);
		//for (int i = 0; i < a[i]; i++) 
		if (i == 0 || i == 1) {
			cout << -1 << endl;
		}
		else {
			for (int j = 0; j < 3; j++) {
				b[j] = q.top();
				cout << "q.top(): " << q.top() << endl;
				q.pop();
			}
			cout << b[0] * b[1] * b[2] << endl;
			for (int j = 0; j < 3; j++) {
				q.push(b[j]);
				cout << "b[j]: " << b[j] << endl;
			}
		}
	}
	return 0;
}