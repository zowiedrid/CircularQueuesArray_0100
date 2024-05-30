#include <iostream>
using namespace std;

class Queues { //membuat class queue
	int front, rear, max =5;
	int queue_array[5];
	public:
		Queues() { //membuat konstruktor	
			front = -1;
			rear = -1;
		}

		void insert(int add_item) { //membuat fungsi insert
			int num;
			cout << "Masukkan angka: ";
			cin >> num;
			cout << endl;


			//cek apakah queue penuh
			if ((front == 0 && rear == max - 1) || (front == rear + 1)) { //kondisi jika queue penuh
				cout << "Queue penuh" << endl;
				return;
			}

			//cek apakah queue kosong
			if (front == -1) { //kondisi jika queue kosong
							front = 0;
							rear = 0;
			}
			
		}
};