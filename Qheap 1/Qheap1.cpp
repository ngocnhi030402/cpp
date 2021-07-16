//#include<iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//priority_queue<int, vector <int>, greater<int> > q;
//priority_queue<int, vector <int>, greater<int> > k;
////vector<int> h;
//
//int main() {
//	int n,x,a,b;
//	cin >> n;
//	while (n--) {
//		cin >> x;
//		if (x == 1) {
//			cin >> a;
//			//h.push_back(a);
//			q.push(a);
//		}
//		else if (x == 2) {
//			cin >> b;
//			k.push(b);
//		}
//		else if (x == 3) {
//			while (!k.empty() && q.top() == k.top()) {
//				q.pop();
//				k.pop();
//			}
//			cout << q.top() << endl;
//		}
//		else {
//			break;
//		}
//	}
//	return 0;
//}


#include<iostream>
#include <queue>
#include <vector>
using namespace std;


priority_queue<int, vector <int>, greater<int> > q,p;
vector<int> h;

int main() {
	int n, x, a, b;
	cin >> n;
	while (n--) {
		cin >> x;
		if (x == 1) {
			cin >> a;
			//h.push_back(a);
			q.push(a);
		}
		else if (x == 2) {
			cin >> b;
			/*int index = 0;
			for (int i = 0; i < h.size(); i++) {
				if (b == h[i]) {
					index = i;
				}
			}
			vector<int>::iterator it;
			it = h.begin() + index;
			h.erase(it);
			while (!q.empty()) {
				q.pop();
			}*/
			p.push(b);

		}
		else if (x == 3) {
			while (!p.empty() && p.top() == q.top()) {
				q.pop();
				p.pop();
			}
			cout << q.top() << endl;
		}
		else {
			break;
		}
	}
	return 0;
}



