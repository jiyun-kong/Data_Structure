# include <iostream>
using namespace std;

int main() {
	int size, testNum, shift;
	cin >> testNum;

	int* arr;

	for (int i = 0; i < testNum; i++) {
		cin >> size >> shift;
		arr = new int[size];

		for (int j = 0; j < size; j++) {
			cin >> arr[j];
		}

		// shift 연산
		for (int j = 0; j < shift; j++) {
			int first = arr[0];

			for (int k = 0; k < size; k++) {
				if (k == size - 1) {
					arr[k] = first;
				}
				else {
					arr[k] = arr[k + 1];
				}
			}
		}


		// 출력
		for (int j = 0; j < size - 1; j++) {
			cout << arr[j] << " ";
		}
		cout << arr[size - 1] << endl;
	}
	



	return 0;
}