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
			while (temp != NULL) {
				count++;
				temp = temp->getNext();
			}
			return count;
		}
	}
	void insertAtBeginning(int val) {
		if (isEmpty()) {
			head = new Node(val);
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
		while (temp->getNext() != NULL) {
			temp = temp->getNext();
		}
		return temp->getData();
	}
	void allElements() {
		Node* temp = head;
		while (temp != NULL) {
			cout << temp->getData() << endl;
			temp = temp->getNext();

		}
	}
};
class Stack {
	linkedlist L ;
	int Size;
public:
	
	Stack() {
		L = 0;
		Size = 20;
	}

	Stack(int Size) {
		this->Size = Size;
	}

	void setL(linkedlist L) {
		this->L = L;
	}

	void setsize(int Size) {
		this->Size = Size;
	}

	int getSize(){
		return Size;
	}

	linkedlist getL() {
		return L;
	}

	bool isEmpty() {
		if (L.isEmpty()) {
			return true;
		}
		else
		{
			return false;
		}

	}

	bool isFull() {
		if (L.getLenght() == Size) {
			return true;
		}
		else {
			return false;
		}

	}

	void push(int temp) {
		if (isFull()) {
			cout << "The stack is full";
		}
		else {
			L.insertAtBeginning(temp);
		}
	}

	int pop() {
		if (isEmpty()) {
			return 0;
		}
		else {
			int temp;
			temp = L.getFirstElement();
			L.removeFromBeginning();
			cout<< temp<<endl;
		}
	}

	int top() {
		if (isEmpty()) {
			return 0;
		}
		else {
			int temp;
			temp = L.getFirstElement();
			cout<< temp<<endl;
		}
	}


};
int main() {
	Stack S;
	S.isEmpty();

	S.push(30);
	S.pop();
	
	S.isFull();

	S.push(20);
	S.top();

	S.push(40);

	S.top();
}