/*
학과: 컴퓨터공학과 학번 : 12201682 분반 : 001 이름 : 공지윤
학생 명예서약(Honor Code) : 나는 정직하게 시험에 응할 것을 서약합니다.
*/
//# include <iostream>
//# include <string>
//using namespace std;
//
//class Array {
//private :
//	int* arr;
//	int size;
//
//public :
//	Array(int size) {	
//		this->size = size;
//		this->arr = new int[size];
//
//		for (int i = 0; i < size; i++) {
//			arr[i] = 0;
//		}
//	}
//	void append(int idx, int value) {
//		arr[idx] = value;
//	}
//	void leftShift(int shiftTime) {
//		for (int i = 0; i < shiftTime; i++) {
//			int tmp = arr[0];
//
//			for (int j = 1; j <= size - 1; j++) {
//				arr[j - 1] = arr[j];
//			}
//			arr[size - 1] = tmp;
//		}
//	}
//	void rightShift(int shiftTime) {
//		for (int i = 0; i < shiftTime; i++) {
//			int tmp = arr[size - 1];
//
//			for (int j = size - 1; j >= 1; j--) {
//				arr[j] = arr[j - 1];
//			}
//			arr[0] = tmp;
//		}
//	}
//	void print() {
//		for (int i = 0; i < size - 1; i++) {
//			cout << arr[i] << " ";
//		}
//		cout << arr[size - 1] << endl;
//	}
//};
//int main() {
//	int testCase, arrSize, shiftTime, element;
//	string direction;
//
//	cin >> testCase;
//
//	for (int i = 0; i < testCase; i++) {
//		cin >> arrSize >> shiftTime >> direction;
//		Array myArr(arrSize);
//
//		for (int j = 0; j < arrSize; j++) {
//			cin >> element;
//			myArr.append(j, element);
//		}
//
//		if (direction == "left") {
//			myArr.leftShift(shiftTime);
//		}
//		else if (direction == "right") {
//			myArr.rightShift(shiftTime);
//		}
//		
//		myArr.print();
//	}
//
//
//
//
//	return 0;
//}