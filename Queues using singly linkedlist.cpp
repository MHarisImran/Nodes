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

class variant  {

	Node* head;
	Node* last;
public:
	variant() {
		head = NULL;
		last = NULL;
	}
	variant(Node* head, Node* last) {
		this->head = head;
		this->last = last;
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


	int Size() {
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
		Node* temp = new Node(val );
		if (isEmpty()) {
			head = temp;
			last = temp;
		}
		else {
			temp->setNext(head);
			head = temp;
		}
	}

	void insertAtLast(int val) {
		Node* temp = new Node(val);
		if (isEmpty()) {
			head = temp;
			last = temp;
		}
		else {
			last->setNext(temp);
			last = temp;
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
		if (isEmpty()) {
			return false;
		}
		else
		{
			Node* temp = head;
			while (temp->getNext() != last) {
				temp = temp->getNext();
			}
			delete last;
			last = temp;
			last->setNext(NULL);
		}
	}

	int getFirstElement() {
		return head->getData();
	}

	int getLastElement() {
		return last->getData();
	}

	int print() {
		Node* temp = head;
		while (temp->getNext() != NULL) {
			cout << temp->getData() << endl;
			temp = temp->getNext();

		}
	}
};

class Queue {
	variant Q;
	int size;
public:
	Queue() {
		size = 15;
	}

	Queue(int size) {
		this->size = size;
	}

	void setQ(variant Q) {
		this->Q = Q;
	}

	void setsize(int size) {
		this->size = size;
	}

	int getSize() {
		return size;
	}

	variant getQ() {
		return Q;
	}

	bool isEmpty() {
		if (Q.isEmpty()) {
			return true;
		}
		else
		{
			return false;
		}

	}

	bool isFull() {
		if (Q.Size() == size) {
			return true;
		}
		else {
			return false;
		}

	}

	void push(int temp) {
		if (isFull()) {
			cout << "The Queue is full";
		}
		else {
			Q.insertAtBeginning(temp);
		}
	}

	int pop() {
		if (isEmpty()) {
			return 0;
		}
		else {
			int temp;
			temp = Q.getLastElement();
			Q.removeFromLast();
			return temp;
		}
	}

	int top() {
		if (isEmpty()) {
			return 0;
		}
		else {
			int temp;
			temp = Q.getLastElement();
			return temp;
		}
	}


};
int main() {
	Queue Q1;

	Q1.push(52);

	Q1.push(23);

	Q1.push(13);

	Q1.push(12);

	Q1.push(11);

	cout <<"The size of the queue is:" << Q1.getSize() << endl;

	cout<<Q1.pop()<<endl;

	cout<<Q1.pop()<<endl;

	cout<<Q1.pop()<<endl;

	Q1.getQ();

	Q1.setsize(25);

	cout << "The size of the queue is:" << Q1.getSize() << endl;
	cout << Q1.top() << endl;

}