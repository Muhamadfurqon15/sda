#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
node *head,*tail;

void init(){
	head = NULL;
	tail = NULL;
}
int kosong(){
	if(tail == NULL)
	return 1;
}
void tambahbelakang(int databaru){
	node *baru,*bantu;
	baru = new tnode;
	
}
