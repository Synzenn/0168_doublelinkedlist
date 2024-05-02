#include <iostream>
#include <string>
using namespace std;

struct Node{
	string name;
	int noMhs;
	Node *next;
	Node *prev;
};

Node *START = NULL;

void addNode(){
	Node* newNode = new Node();
	cout << "\nEnter the roll number of the student :";
	cin >> newNode->noMhs;
	cout << "\nEnter the name of the student :";
	cin >> newNode->name;

}

