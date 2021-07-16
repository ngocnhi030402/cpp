#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
using namespace std;
//quan he phu thuoc => lop A phu thuoc lop B

//quan he thu nap(Aggregation) => ton tai doc lap
//class ClassA {
//public:
//	void myMethod(ClassB b) {
//		b.doWork();
//	}
//};

//quan he hop thanh(Composition) => phu thuoc
//class ClassA {
//private:
//	ClassB* b;
//public:
//	ClassA() {
//		b = new ClassB();
//	}
//};

class Manager {
private:
	string name;

public:
	Manager() {

	}
	Manager(string name) {
		this->name = name;
	}

	string getName() {
		return name;
	}
};
class Employee {
private:
	string name;
	Manager manager;
public:
	Employee(string name, Manager manager) {
		this->name;
		this->manager = manager;
	}
	string getManagerName() {
		return manager.getName();
	}
	string getName() {
		return name;
	}

};

class Point {
private:
	int x, y;
public:
	Point() {

	}
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	int getX() {
		return x;
	}
	void setX(int x) {
		this->x = x;
	}
	int getY() {
		return y;
	}
	void setY(int y) {
		this->y = y;
	}
};
class Line {
private:
	Point begin, end;
public:
	Line(Point begin, Point end) {
		this->begin = begin;
		this->end = end;
	}
	Line(int x1, int y1, int x2, int y2) {
		this->begin = Point(x1, y1);
		this->end = Point(x2, y2);
	}
	Point getBegin() {
		return begin;
	}
	Point getEnd() {
		return end;
	}
	void setBegin(Point begin) {
		this->begin = begin;
	}
	void setEnd(Point end) {
		this->end = end;
	}
	double getLength() {
		return sqrt(pow(end.getX() - begin.getX(), 2) + pow(end.getY() - begin.getY(), 2));
	}
};
class Triangle {
private:
	Point vertice1, vertice2, vertice3;
public:
	Triangle() {

	}
	Triangle(int x1, int y1, int x2, int y2, int x3, int y3) {
		this->vertice1 = Point(x1, y1);
		this->vertice2 = Point(x2, y2);
		this->vertice3 = Point(x3, y3);
	}
	Triangle(Point vertice1, Point vertice2, Point vertice3) {
		this->vertice1 = vertice1;
		this->vertice2 = vertice2;
		this->vertice3 = vertice3;
	}
	double getPerimeter() {
		double d1 = sqrt(pow(vertice1.getX() - vertice2.getX(), 2) + pow(vertice1.getY() - vertice2.getY(), 2));
		//d1+d2+d3
		return d1;
	}
};

class Author {
private:
	string name, email;
public:
	Author() {

	}
	Author(string name, string email) {
		this->name = name;
		this->email = email;
	}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
	void setEmail(string email) {
		this->email = email;
	}
	string getEmail() {
		return email;
	}
};
class Book : public Author {
private:
	string name;
	double price;
	vector<Author> authors;
public:
	Book(string name, vector<Author> authors, double price) {
		this->name = name;
		this->price = price;
		this->authors = authors;
	}
	string getName() {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}

	double getPrice() {
		return price;
	}

	void setPrice(double price) {
		this->price = price;
	}

	string getAuthorNames() {
		string authorNames = "";
		for (int i = 0; i < authors.size() - 1; i++) {
			authorNames += authors[i].getName() + ",";
		}
		authorNames += authors[authors.size() - 1].getName();
		return authorNames;
	}
};

class Customer {
private:
	int id, discount;
	string name;
public:
	Customer() {

	}
	Customer(int id, string name, int discount) {
		this->id = id;
		this->name = name;
		this->discount = discount;
	}
	int getId() {
		return id;
	}
	string getName() {
		return name;
	}
	void setName(string name) {
		this->name = name;
	}

	int getDiscount() {
		return discount;
	}
	void setDiscount(int discount) {
		this->discount = discount;
	}
};
class Invoice {
private:
	int id;
	vector<Customer> customer;
	double amount;
public:
	Invoice(int id, Customer customer, double amount) {

	}
};
int main() {
	Point begin(1, 1);
	Point end(2, 2);
	Line line1(begin, end);
	cout << line1.getLength() << endl;
	Line line2(2, 3, 4, 5);
	cout << line2.getLength() << endl;

	Point vertice1(1, 3);
	Point vertice2(2, 3);
	Point vertice3(4, 5);
	Triangle triangle1(vertice1, vertice2, vertice3);
	Triangle triangle2(1, 3, 2, 3, 4, 5);
	cout << triangle1.getPerimeter() << endl << triangle2.getPerimeter() << endl;

	vector<Author> authors;
	authors.push_back(Author("Nhi", "nhi123mail"));
	authors.push_back(Author("Quynh", "anhquynhdong_mail"));
	
	Book book1("name", authors, 100);
	cout << book1.getAuthorNames() << endl;
	cout << book1.getPrice() << endl << book1.getName() << endl;
	return 0;
}