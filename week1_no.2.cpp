# include <iostream>
using namespace std;

int main() {
	int testCase;
	cin >> testCase;

	int size, shiftNum;
	int* arr;

	for (int i = 0; i < testCase; i++) {
		cin >> size >> shiftNum;
		arr = new int[size];
		
		for (int j = 0; j < size; j++) {
			cin >> arr[j];
		}

		// shift ¿¬»ê
		for (int j = 0; j < shiftNum; j++) {

			int last = arr[size - 1];

			for (int k = size - 1; k >= 0; k--) {
				if (k == 0) {
					arr[k] = last;
				}
				else {
					int temp = arr[k];
					arr[k] = arr[k - 1];
				}
			}
		}
 		
		for (int k = 0; k < size - 1; k++) {
			cout << arr[k] << " ";
		}
		cout << arr[size - 1] << endl;
	}



	return 0;
}