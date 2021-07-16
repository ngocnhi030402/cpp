#include <iostream>
#include <stack>

using namespace std;

int main() {
	int n, u, v ;
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		cin >> u >> v;
	}
	stack<int> s;
	int graph[1000];
	bool visited[1000];
	int path[1000];
	
	for (int i = 0; i < v; i++) {
		visited[i] = false;
		path[i] = -1;
	}


}