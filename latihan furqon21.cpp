#include<iostream>
using namespace std;

#define max_stack 5

struct stack{
	int top, data [max_stack];
}tumpukan;

void init(){
tumpukan.top = -1;
}

bool isEmpty(){
	return tumpukan.top == -1;
}

bool isFull(){
	int data;
	return tumpukan.top == max_stack -1;
}

void push(){
	if (isFull()){
		cout << "\nTumpukan Penuh" << endl;
	}
	else{ 
	tumpukan.top++;
	cout << "\nMasukkan data = ";cin >> tumpukan.data[tumpukan.top];
	cout << "data " << tumpukan.data[tumpukan.top] << "masuk ke stack" << endl;
	}
}

void pop(){
	if (isEmpty()){
		cout << "\nData kosong\n" << endl;
	}
	else {
		cout << "\nData" << tumpukan.data[tumpukan.top]<< "sedah terambil" << endl;
		tumpukan.top--;
	}
}
 void printstack(){
 	if (isEmpty()){
 		cout << "tumpukan kosong";
	 }
	 else{
	 	cout << "\nTumpukan : ";
	 	for (int i= tumpukan.top; i >= 0; i--)
	 	cout << tumpukan.data[i] << ((i==0)? " ":",");
	 }
 }

int main(){
	int pilihan, data;
	init();
	
	do {
		printstack();
		cout << "\n1. input (push)\n";
		cout << "2. hapus (pop)\n";
		cout << "3. keluar\n";
		cout << "masukkan pilihan: ";
		cin >> pilihan;
		switch (pilihan)
		{
			case 1 :
				push();
				break;
			case 2 :
				pop();
				break;
			default:
				cout << "pilihan tidak tersedia" << endl;
				break;
		}
	} while (pilihan!=3);
}
