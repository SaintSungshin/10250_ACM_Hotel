#include<iostream>
using namespace std;

int main()
{
	int h, w, n;
	cout << "호텔의 층 수, 방 수, 그리고 몇 번째 손님인지까지 차례대로 입력해주세요." << endl << "(프로그램을 종료하고 싶으면 0 0 0 을 입력해주세요.)" << endl;

	do {
		cout << ": ";

		cin >> h >> w >> n;

		if (n%h == 0)
			cout << (n%h) * 100 + n / h << endl;
		else
			cout << (n%h) * 100 + (n / h) + 1 << endl;
	} while (h + w + n != 0);

	system("pause");
	return 0;
}