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
			else {
				//jika rear berada di posisi terakhir array, kembalikan ke awal
				if (rear == max - 1) {
					rear = 0;
				}
				else {
					rear = rear + 1;
				}
			}
			queue_array[rear] = num;
			
		}

		void remove() { // membuat fungsi remove
			//cek apakah queue kosong
			if (front == -1) { //kondisi jika queue kosong
							cout << "Queue kosong" << endl;
							return;
			}
			cout << "Elemen yang dihapus: " << queue_array[front] << endl;

			//cek jika antrian hanya memiliki satu elemen
			if (front == rear) { //kondisi jika antrian hanya memiliki satu elemen
							front = -1;
							rear = -1;
						}
			

		}
};