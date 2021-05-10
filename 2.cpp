/*
학과: 컴퓨터공학과 학번 : 12201682 분반 : 001 이름 : 공지윤
학생 명예서약(Honor Code) : 나는 정직하게 시험에 응할 것을 서약합니다.
*/
//# include <iostream>
//using namespace std;
//
//class Node {
//private :
//	Node* nextNodeAddress;
//	int element;
//
//	friend class Service;
//};
//class Service {
//private :
//	Node* head;
//	Node* tail;
//	int N;			// 고객 수
//
//public :
//	Service(int personNum) {
//		this->N = personNum;
//		this->head = new Node;
//		this->tail = new Node;
//
//		head = NULL;
//		tail = NULL;
//	}
//	void addNum(int idx, int ele) {
//		Node* newNode = new Node;
//		newNode->element = ele;
//		newNode->nextNodeAddress = NULL;
//
//		if (empty()) {
//			head = newNode;
//			tail = newNode;
//		}
//		else {
//			tail->nextNodeAddress = newNode;
//			tail = newNode;
//		}
//
//	}
//	bool empty() {
//		return (head == NULL && tail == NULL);
//	}
//	int upMoo() {
//		Node* curNode = head;
//		Node* tmpNode = head;
//
//		int idx = 1, passNum = 0;
//
//		while (curNode->nextNodeAddress != NULL) {
//			if (curNode->element == idx) {
//				//cout << "idx : " << idx << " - PASS" << endl;
//				curNode = curNode->nextNodeAddress;
//				idx++;
//			}
//			else {
//				//cout << "idx : " << idx << " - NO PASS" << endl;
//				tmpNode = curNode;
//				curNode = curNode->nextNodeAddress;
//				tail->nextNodeAddress = tmpNode;
//
//				tail = tmpNode;
//				tail->nextNodeAddress = NULL;
//
//				passNum++;
//			}
//		}
//		return passNum;
//	}
//
//};
//int main() {
//	int testCase, customerNum, element;
//	cin >> testCase;
//
//	for (int i = 0; i < testCase; i++) {
//		cin >> customerNum;
//		Service goodService(customerNum);
//
//		for (int j = 0; j < customerNum; j++) {
//			cin >> element;
//			goodService.addNum(j, element);
//		}
//		cout << goodService.upMoo() << endl;
//	}
//
//
//	return 0;
//}