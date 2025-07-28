#include<iostream>
using namespace std;
class book {
private:
	string name;
	string author;
	int page_number;

public:
	book(string name, string author, int page_number) { // constructer, used this pointer
		this->name = name;
		this->author = author;
		this->page_number = page_number;
	}

	void printBookInfo() {
		cout << "book's name is " << name << endl;
		cout << "book's author is " << author << endl;
		cout << "book's page number is " << page_number << endl;
	}

	~book() { // destructer
		cout << "object is deleted." << endl;
	}

};
int main() {
	book x("Kumarbaz", "Fyodor Mihailovic Dostoyevski", 235);
	x.printBookInfo();
	return 0;

}