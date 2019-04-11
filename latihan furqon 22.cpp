#include<iostream>
using namespace std;

#define MAX 5

struct Queue{
	int front, rear, data[MAX];
}Q;

bool isFull(){
	return Q.rear == MAX;
}

bool isEmpty(){
	return Q.rear == 0;
}

void printQueue(){
	if (isEmpty()){
		cout << "antrian kosong" << endl;
	}
	else {
		cout << "QUEUE : ";
		for (int i= Q.front; i < Q.rear; i++)
		cout << Q.data[i] << ((Q.rear-1 == i) ? " ":",");
		cout << endl;
	}
}

void enqueue(){
		if (isFull()){
		cout << "antrian kosong" << endl;
	}
	else {
		int data;
		cout << "masukan data : "; cin >> data;
		Q.data[Q.rear] = data;
		Q.rear++;
		cout << "data ditambahkan\n";
		printQueue();
	}
}
void dequeue(){
	if (isEmpty()){
		cout << "antrian masih kosong" << endl;
	}
	else {
		cout << "Mengambil data \" " << Q.data[Q.front] <<  "\"..." << endl;
		for (int i= Q.front; i < Q.rear; i++)
		Q.data[i] = Q.data[i+1];
		Q.rear--;
		printQueue();
	}
}

int main (){
	int choose;
	do
	{
		cout << "----------------\n";
		cout << "	menu pilihan\n";
		cout << "----------------\n";
		cout << " [1] enqueue \n";
		cout << " [2] dequeue \n";
		cout << " [3] keluar \n\n";
		cout << "----------------\n";
		cout << "	masukkan pilihan : "; cin >> choose;
		switch (choose)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			default:
				cout << "pilihan tidak tersdia";
				break;
		}
	} while (choose!=3);
	return 0;
}
