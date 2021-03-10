# include <iostream>
# include <string>
using namespace std;

class Array {
private :
	int size;
	int* arr;

public :
	Array(int _size) {
		this->size = _size;
		this->arr = new int[size];

		for (int i = 0; i < size; i++) {
			arr[i] = 0;
		}
	}

	void at(int idx) {
		cout << arr[idx] << endl;
	}
	void add(int idx, int value) {
		for (int i = size - 2; i >= idx; i--) {
			arr[i + 1] = arr[i];
		}
		arr[idx] = value;
	}
	void remove(int idx) {
		for (int j = idx + 1; j < size; j++) {
			arr[j - 1] = arr[j];
		}
		arr[size - 1] = 0;
	}
	void set(int idx, int value) {
		arr[idx] = value;
		cout << value << endl;
	}
	void print() {
		for (int i = 0; i < size - 1; i++) {
			cout << arr[i] << " ";
		}
		cout << arr[size-1] << endl;
	}
	void find_min() {
		int min = 10000;

		for (int i = 0; i < size; i++) {
			if (min > arr[i]) {
				min = arr[i];
			}
		}
		cout << min << endl;
	}
};
int main() {
	int size, testNum, idx, value;
	string cmd;
	cin >> size >> testNum;

	Array myarr(size);

	for (int i = 0; i < testNum; i++) {
		cin >> cmd;

		if (cmd == "at") {
			cin >> idx;

			myarr.at(idx);
		}
		else if (cmd == "add") {
			cin >> idx >> value;

			myarr.add(idx, value);
		}
		else if (cmd == "remove") {
			cin >> idx;

			myarr.remove(idx);
		}
		else if (cmd == "set") {
			cin >> idx >> value;

			myarr.set(idx, value);
		}
		else if (cmd == "print") {
			myarr.print();
		}
		else if (cmd == "find_min") {
			myarr.find_min();
		}

	}

	return 0;
}