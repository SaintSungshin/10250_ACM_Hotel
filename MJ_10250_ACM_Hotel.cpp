#include <iostream>
using namespace std;

int main() {
	
	//Get T
	cout << "The number of test data set (T): ";
	int number;
	cin >> number;
	int *list = new int[number];
	
	//Get H, W, N and print the room number for each set
	int height, width, nth;

	for (int i = 0; i < number; i++) {
		cout << "Enter H, W, and N:  ";
		cin >> height >> width >> nth;

		int h = nth % (height + 1) + 1;
		int w = nth / (height + 1) + 1;

		int roomNum = (h * 100) + (w);

		cout << "Room Number: " << roomNum << endl;
	}

	system("pause");
	return 0;
}