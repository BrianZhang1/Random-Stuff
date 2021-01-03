#include <iostream>
using namespace std;

struct node {
	int data;
	node* next;
};

int main() {

	// Create Linked List
	int nodes;
	int nodeVal;
	node* n = new node();
	node* h = n;
	node* t = n;
	cout << "How many nodes would you like (>=1 please): ";
	cin >> nodes;
	cout << "Node value: ";
	cin >> nodeVal;
	n->data = nodeVal;
	for(int i = 0; i < nodes - 1; i++) {
		cout << "Node value: ";
		cin >> nodeVal;
		n = new node();
		t->next = n;
		t = t->next;
		n->data = nodeVal;
	}

	// Print Linked List
	cout << "Linked List Values:" << endl;
	for(node* i = h; i != t; i = i->next) {
		cout << i->data << endl;
	}
	cout << t->data << endl;

	// Reverse Linked List
	node* prev = h;
	node* next = h->next;
	for(node* i = next; i != t; i = next) {
		next = i->next;
		i->next = prev;
		prev = i;
	}
	t->next = prev;
	node* temp = h;
	h = t;
	t = temp;

	// Print Reversed Linked List
	cout << "Reversed Linked List Values:" << endl;
	for(node* i = h; i != t; i = i->next) {
		cout << i->data << endl;
	}
	cout << t->data << endl;
}

