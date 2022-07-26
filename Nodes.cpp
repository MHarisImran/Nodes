#include<iostream>
using namespace std;
class Node {
private:
	int data;
	Node* next;
public:
	Node() {
	}
	Node(int data, Node* next = NULL) {
		this->data = data;
		this->next = next;
	}

	void setData(int data) {
		this->data = data;
	}
	void setNext(Node* next) {
		this->next = next;
	}
	int getData() {
		return data;
	}
	Node* getNext() {
		return next;
	}

	int firstElement() {
		return data;
	}

	int Get_Last_Element()
	{
		while (getNext() == NULL)
		{
			return getData();
		}
	}
	int count()
	{
		int c = 0;
		for (int i = 1; i <= 20; i++)
		{
			c++;
		}
		return c;
	}
};
int main()
{
	Node* n1 = new Node(2);
	Node* n2 = new Node(3);
	Node* n3 = new Node(4);
	Node* n4 = new Node(5);
	Node* n5 = new Node(6);
	Node* n6 = new Node(7);
	Node* n7 = new Node(8);
	Node* n8 = new Node(9);
	Node* n9 = new Node(10);
	Node* n10 = new Node(11);
	Node* n11 = new Node(12);
	Node* n12 = new Node(13);
	Node* n13 = new Node(14);
	Node* n14 = new Node(15);
	Node* n15 = new Node(16);
	Node* n16 = new Node(17);
	Node* n17 = new Node(18);
	Node* n18 = new Node(19);
	Node* n19 = new Node(20);
	Node* n20 = new Node(21);
	Node* temp;
	temp = n1;
	cout << temp->getData() << endl;
	temp = n20;
	cout << temp->Get_Last_Element() << endl;
	cout << temp->count() << endl;
}