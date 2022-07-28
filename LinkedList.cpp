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
class linkedlist {
	Node* head;
public:
	linkedlist() {
		head = NULL;

	}
	linkedlist(Node* head) {
		this->head = head;
	}

	bool isEmpty() {
		if (head == NULL) {
			return true;
		}
		else
		{
			return false;
		}
	}
	int getLenght() {
		if (isEmpty()) {
			return 0;
		}
		else {
			int count = 0;
			Node* temp = head;
			while(temp!= NULL) {
				count++;
				temp = temp->getNext();
			}
			return count;
		}
	}
	void insertAtBeginning(int val) {
		if (isEmpty()) {
			head=new Node(val);
		}
		else {
			Node* t = new Node(val);
			t->setNext(head);
			head = t;
		}
	}
	void insertAtLast(int val) {
		if (head != NULL) {
			Node* temp = head;
			while (temp->getNext() != NULL) {
				temp = temp->getNext();
			}
			Node* t = new Node(val);
			temp->setNext(t);

		}
		else {
			Node* t = new Node(val);
			t->setNext(head);
			head = t;
		}
	}
	bool removeFromBeginning() {
		if (isEmpty()) {
			return false;
		}
		else
		{
			Node* temp = head->getNext();
			delete head;
			head = temp;
			return true;
		}
	}
	bool removeFromLast() {
		if (head != NULL) {
			int length = getLenght();
			Node* temp = head;
			while (temp->getNext() != NULL) {
				temp = temp->getNext();
			}
			delete temp;
			temp = head;
			for (int i = 0; i < length - 2; i++) {
				temp = temp->getNext();
			}
			temp->setNext(NULL);
			return true;
		}
		else {
			return false;
		}
	}
	int getFirstElement() {
		return head->getData();
	}

	int getFinalElement() {
		Node* temp = head;
		while(temp->getNext() != NULL) {
			temp = temp->getNext();
		}
		return temp->getData();
	}
	void allElements() {
		Node* temp = head;
		while (temp!= NULL) {
			cout << temp->getData()<<endl;
			temp = temp->getNext();
			
		}
	}
};
int main() {
	linkedlist l1;
	l1.insertAtBeginning(25);
	l1.insertAtLast(33);
	l1.insertAtBeginning(44);
	l1.insertAtLast(72);
	l1.allElements();
	
	l1.removeFromBeginning();
	cout << "After removing first value:";
	l1.allElements();

	cout << "After removing last value:";
	l1.removeFromLast();
	l1.allElements();

	
	
}
