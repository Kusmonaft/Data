#include"string.h"
#include"Date.h"
//int main() {
//	String s("Hello");
//	cout << "Длина строки: " << static_cast<int>(s) << '\n' << "Символ с индексом 2: " << s[2] << '\n' << "Индекс буквы 'о': " << s('o') << '\n';
//
//	return 0;
//}
int main() {
	Date today(4, 1, 2025);
	Date tomorrow = ++today;
	Date yesterday = --today;

	cout << "Сегодня: " << today << '\n' << "Завтра: " << tomorrow << '\n' << "Вчера: " << yesterday << '\n';

	Date data(2, 1, 2022);
	if (today == data) { cout << "Сегодня и в любой другой день то же самое" << '\n'; }

	if (today != yesterday) { cout << "Сегодняшний день - это не вчерашний день" << '\n'; }

	if (tomorrow > today) 
	{
		cout << "Завтра наступит после сегодняшнего" << '\n';
	}

	if (yesterday < today) { cout << "Вчерашний день перед сегодняшним" << '\n';
	}

	cout << "Введите дату: ";

	Date input(0, 0, 0);

	cin >> input;
	cout << "Вы ввели: " << input << '\n';

	return 0;
}