#include<iostream>
using namespace std;

int main()
{
	int h, w, n;
	cout << "ȣ���� �� ��, �� ��, �׸��� �� ��° �մ��������� ���ʴ�� �Է����ּ���." << endl << "(���α׷��� �����ϰ� ������ 0 0 0 �� �Է����ּ���.)" << endl;

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