#include <iostream>
using namespace std;

//khai bao node
struct node {
	int data;
	node* next;
	//trung voi ten cua struct
};

//tao mot node co gia tri x
node* create_node(int x) {
	node* temp = new node; //tao moi mot node
	temp->next = NULL;
	//NODE nay chua tro den phan tu khac nen "next nhan gtri NULL
	temp->data = x; // gan gia tri cho node
	return temp;
}

//them mot phan tu vao cuoi
node* add_element(node* p, int x) {
	node* temp = create_node(x);
	//tao 1 node moi co gia tri la x
	p->next = temp; // them node do vao cuoi danh sach
	return temp;
	//tra ve node temp, vi temp gio da la node cuoi cua list
}

void printlist(node* l) {
	node* p = l;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}
}

int main() {
	int n, x;
	cin >> n;
	cin >> x;
	node* l = create_node(x);
	node* p = l;
	for (int i = 1; i < n; i++) {
		cin >> x;
		p = add_element(p, x);

	}
	printlist(l);
	return 0;
}

