#include"string.h"
#include"Date.h"
//int main() {
//	String s("Hello");
//	cout << "����� ������: " << static_cast<int>(s) << '\n' << "������ � �������� 2: " << s[2] << '\n' << "������ ����� '�': " << s('o') << '\n';
//
//	return 0;
//}
int main() {
	Date today(4, 1, 2025);
	Date tomorrow = ++today;
	Date yesterday = --today;

	cout << "�������: " << today << '\n' << "������: " << tomorrow << '\n' << "�����: " << yesterday << '\n';

	Date data(2, 1, 2022);
	if (today == data) { cout << "������� � � ����� ������ ���� �� �� �����" << '\n'; }

	if (today != yesterday) { cout << "����������� ���� - ��� �� ��������� ����" << '\n'; }

	if (tomorrow > today) 
	{
		cout << "������ �������� ����� ������������" << '\n';
	}

	if (yesterday < today) { cout << "��������� ���� ����� �����������" << '\n';
	}

	cout << "������� ����: ";

	Date input(0, 0, 0);

	cin >> input;
	cout << "�� �����: " << input << '\n';

	return 0;
}