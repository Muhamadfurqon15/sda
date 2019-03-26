#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};
node *n,*h,*t;
int main(){
	n = new node;
	n->data = 1;
	h =n;
	t =n;
	cout << n->data<< endl;
	cout << n << endl;
	
	n = new tnode;
	n->data=14;
	t->next = n;
	
	
	
}
