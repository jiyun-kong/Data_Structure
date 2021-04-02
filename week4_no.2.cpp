# include <iostream>
using namespace std;

class Qarr {		// 선형 큐
public:
	int* arr;
	int rear;
	int front;
	int capacity;
	int winPoint;

	Qarr(int capacity) {
		this->capacity = capacity;
		arr = new int[capacity];
		rear = -1;
		front = 0;
		winPoint = 0;

		for (int i = 0; i < capacity; i++) {
			arr[i] = 0;
		}
	}
	int getWinPoint() {
		return winPoint;
	}
	void increaserWinPoint() {
		winPoint++;
	}
	void enqueue(int value) {
		++rear;
		arr[rear] = value;
	}
	void dequeue() {
		arr[front] = 0;
		++front;
	}
	int* _front() {
		return &arr[front];
	}
	void competition(Qarr player1, Qarr player2) {
		for (int i = 0; i < capacity; i++) {
			//cout << "\n\n=== round " << i + 1 <<" ===" << endl;
			if (*(player1._front()) < *(player2._front())) {
				//cout << "player1.arr[" << i << "] : " << *(player1._front()) << "  player2.arr[" << i << "] : " << *(player2._front()) << endl;
				int gap = *(player2._front()) - *(player1._front());
				//cout << "gap : " << gap << endl;
				player2.increaserWinPoint();
				//cout << "player1의 winpoint : " << player1.getWinPoint() << "  player2의 winpoint : " << player2.getWinPoint() << endl;
				player1.dequeue();
				player2.dequeue();
				//cout << "before player2._front() : " << *(player2._front()) << endl;
				*(player2._front()) += gap;
				//cout << "after player2._front() : " << *(player2._front()) << endl;

			}
			else if (*(player1._front()) == *(player2._front())) {
				//cout << "player1.arr[" << i << "] : " << *(player1._front()) << "  player2.arr[" << i << "] : " << *(player2._front()) << endl;
	
				//cout << "player1의 winpoint : " << player1.getWinPoint() << "  player2의 winpoint : " << player2.getWinPoint() << endl;
				player1.dequeue();
				player2.dequeue();
			}
			else {
				//cout << "player1.arr[" << i << "] : " << *(player1._front()) << "  player2.arr[" << i << "] : " << *(player2._front()) << endl;
				int gap = *(player1._front()) - *(player2._front());
				//cout << "gap : " << gap << endl;
				player1.increaserWinPoint();
				//cout << "player1의 winpoint : " << player1.getWinPoint() << "  player2의 winpoint : " << player2.getWinPoint() << endl;
				player1.dequeue();
				player2.dequeue();
				//cout << "before player1._front() : " << *(player1._front()) << endl;
				*(player1._front()) += gap;
				//cout << "after player1._front() : " << *(player1._front()) << endl;
			}
		}

		//cout << "player1의 winpoint : " << player1.getWinPoint() << "  player2의 winpoint : " << player2.getWinPoint() << endl;
		if (player1.getWinPoint() > player2.getWinPoint()) {
			cout << "1" << endl;
		}
		else if (player1.getWinPoint() == player2.getWinPoint()) {
			cout << "0" << endl;
		}
		else {
			cout << "2" << endl;
		}
	}
};
int main() {
	int testTime, cardNum;
	cin >> testTime;

	for (int i = 0; i < testTime; i++) {
		cin >> cardNum;

		Qarr player1(cardNum);
		Qarr player2(cardNum);

		int value;

		for (int j = 0; j < cardNum; j++) {
			cin >> value;
			player1.enqueue(value);
		}
		for (int j = 0; j < cardNum; j++) {
			cin >> value;
			player2.enqueue(value);
		}

		player1.competition(player1, player2);

	}



	return 0;
}