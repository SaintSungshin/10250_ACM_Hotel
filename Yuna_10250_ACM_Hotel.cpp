#include<iostream>
using namespace std;

/*
int main()
{
	cout << "Enter the data number : ";
	int dataNumber;
	cin >> dataNumber;
	
	//2차원배열 동적 할당함 list[dataNumber][3]으로 만듦
	int** list = new int*[dataNumber];
	for (int i = 0; i < 3; i++) {
		list[i] = new int[dataNumber];
	}

	cout << "Enter 층수, 각 층 의 방수, 몇 번째 손님 "<<endl;
	for (int i = 0; i < dataNumber; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> list[i][j];
		}
	}

	/*방 할당하기 
	-> 마지막에 firstNumber *100 + secondNumber*10 + thirdNumber 하면 호수 구할수 있음*/
	
	/*int** number = new int*[dataNumber];
	for (int i = 0; i < 3; i++) {
		number[i] = new int[dataNumber];
	}

	for (int i = 0; i < dataNumber; i++) {
		for (int j = 0; j < 3; j++) {
			number[i][j] = 0;
		}
	}
	//호텔의 층수 구하기
	for (int i = 0; i < dataNumber; i++) {

			if (list[i][2] > list[i][0]) {
				number[i][0] = (list[i][2] / list[i][0]) + 1;
				number[i][1] = 0;
				number[i][2] = list[i][2] % list[i][0];
			}
			else {
				number[i][0] = 1;
				number[i][1] = 0;
				number[i][2] = list[i][2];
			}
		
	}

	for (int i = 0; i < dataNumber; i++) {
		cout << "The hotel number is " 
			<< number[i][0] * 100 + number[i][1] * 10 + number[i][2] << endl;
	}


	return 0;
}
*/

int main()
{
	cout << "Enter the data number : ";
	int dataNumber;
	cin >> dataNumber;

	//2차원배열 동적 할당함 list[dataNumber][3]으로 만듦
	int** list = new int*[dataNumber];
	for (int i = 0; i < 3; i++) {
		list[i] = new int[dataNumber];
	}

	//answer는 호수를 담는 배열 -> [0]: 마지막 수  [1] : 층 수
	int** answer = new int*[dataNumber];
	for (int i = 0; i < 3; i++) {
		answer[i] = new int[dataNumber];
	}

	cout << "Enter 층수, 각 층 의 방수, 몇 번째 손님 " << endl;
	for (int i = 0; i < dataNumber; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> list[i][j];
		}
	}
	
	for (int i = 0; i < dataNumber; i++) {
		answer[i][0] = 1;	//호텔 방의 마지막 수
		answer[i][1] = 0;	//호텔 방의 층수
	}
	
	for (int i = 0; i < dataNumber; i++) {
		while (list[i][2] > list[i][0]) {
			list[i][2] -= list[i][0];
			answer[i][0]++;
		}
		answer[i][1] = list[i][2];
	}

	for (int i = 0; i < dataNumber; i++) {
		cout << i+1 << "의 호텔 방 번호 : " << answer[i][1] *100 + answer[i][0]<<endl;
	}
	




	return 0;
}