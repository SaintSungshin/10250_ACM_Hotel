#include<iostream>
using namespace std;

/*
int main()
{
	cout << "Enter the data number : ";
	int dataNumber;
	cin >> dataNumber;
	
	//2�����迭 ���� �Ҵ��� list[dataNumber][3]���� ����
	int** list = new int*[dataNumber];
	for (int i = 0; i < 3; i++) {
		list[i] = new int[dataNumber];
	}

	cout << "Enter ����, �� �� �� ���, �� ��° �մ� "<<endl;
	for (int i = 0; i < dataNumber; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> list[i][j];
		}
	}

	/*�� �Ҵ��ϱ� 
	-> �������� firstNumber *100 + secondNumber*10 + thirdNumber �ϸ� ȣ�� ���Ҽ� ����*/
	
	/*int** number = new int*[dataNumber];
	for (int i = 0; i < 3; i++) {
		number[i] = new int[dataNumber];
	}

	for (int i = 0; i < dataNumber; i++) {
		for (int j = 0; j < 3; j++) {
			number[i][j] = 0;
		}
	}
	//ȣ���� ���� ���ϱ�
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

	//2�����迭 ���� �Ҵ��� list[dataNumber][3]���� ����
	int** list = new int*[dataNumber];
	for (int i = 0; i < 3; i++) {
		list[i] = new int[dataNumber];
	}

	//answer�� ȣ���� ��� �迭 -> [0]: ������ ��  [1] : �� ��
	int** answer = new int*[dataNumber];
	for (int i = 0; i < 3; i++) {
		answer[i] = new int[dataNumber];
	}

	cout << "Enter ����, �� �� �� ���, �� ��° �մ� " << endl;
	for (int i = 0; i < dataNumber; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> list[i][j];
		}
	}
	
	for (int i = 0; i < dataNumber; i++) {
		answer[i][0] = 1;	//ȣ�� ���� ������ ��
		answer[i][1] = 0;	//ȣ�� ���� ����
	}
	
	for (int i = 0; i < dataNumber; i++) {
		while (list[i][2] > list[i][0]) {
			list[i][2] -= list[i][0];
			answer[i][0]++;
		}
		answer[i][1] = list[i][2];
	}

	for (int i = 0; i < dataNumber; i++) {
		cout << i+1 << "�� ȣ�� �� ��ȣ : " << answer[i][1] *100 + answer[i][0]<<endl;
	}
	




	return 0;
}