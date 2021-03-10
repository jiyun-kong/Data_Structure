# include <iostream>
# include <string>
using namespace std;

class Array {
private:
	int* arr;
	int n;
public:
	Array(int size) {
		this->n = size;
		this->arr = new int[n];

		for (int i = 0; i < n; i++) {
			arr[i] = 0;
		}
	}

	void find_max() {
		int max = 0;

		for (int j = 0; j < n; j++) {
			if (arr[j] > max) {
				max = arr[j];
			}
		}

		cout << max << endl;
	}

	void print() {
		for (int j = 0; j < n - 1; j++) {
			cout << arr[j] << " ";
		}
		cout << arr[n - 1] << endl;
	}

	void at(int idx) {
		cout << arr[idx] << endl;
	}

	void remove(int idx) {
		for (int j = idx + 1; j < n; j++) {
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = 0;
	}

	void add(int idx, int value) {
		for (int i = n - 2; i >= idx; i--) {
			arr[i + 1] = arr[i];
		}
		arr[idx] = value;
	}

	void set(int idx, int value) {
		arr[idx] = value;
		cout << value << endl;
	}

};

int main() {
	int arrsize, t;
	string cmd;

	cin >> arrsize >> t;

	Array myarr(arrsize);

	for (int i = 0; i < t; i++) {
		cin >> cmd;

		if (cmd == "find_max") {
			myarr.find_max();
		}
		else if (cmd == "print") {
			myarr.print();
		}
		else if (cmd == "at") {
			int num;

			cin >> num;

			myarr.at(num);

		}
		else if (cmd == "remove") {
			int num;

			cin >> num;

			myarr.remove(num);
		}
		else if (cmd == "add") {
			int num1, num2;

			cin >> num1 >> num2;

			myarr.add(num1, num2);
		}
		else if (cmd == "set") {
			int num1, num2;

			cin >> num1 >> num2;

			myarr.set(num1, num2);
		}
	}

	return 0;
}
