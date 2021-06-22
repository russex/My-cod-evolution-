#include<iostream>
#include<conio.h>
#include <Windows.h>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Rus");
	cout << "Для вывод меню программ нажмите на Enter: " << endl;
	char program;
	do
	{
	int n;
	int t;
	int o = 1;
	program = _getch();
	switch (program)
	{
	case '1':
			setlocale(LC_CTYPE, "Rus");
			cout << "Ввидите размер сторон однобедренной фигуры "; cin >> t;
			if (t % 2 == 0) {

				for (int i = 1; i <= 7; i++)
				{
					cout << " ";

				}
				for (int i = 0; i <= t + 1; i++)
				{
					if (i == 0) {
						setlocale(LC_CTYPE, "C");
						cout << char(201);
					}
					else if (i == t + 1)
					{
						setlocale(LC_CTYPE, "C");
						cout << char(187);
					}
					else
					{
						setlocale(LC_CTYPE, "C");
						cout << char(205);
						cout << char(205);
					}


				}
				cout << endl;

				for (int i = 1; i <= t; i++)
				{
					for (int j = 0; j < 7; j++)
					{

						cout << " ";
					}
					setlocale(LC_CTYPE, "C");
					cout << char(186);
					if (i % 2 != 0) {
						setlocale(LC_CTYPE, "C");
						cout << char(219);
						cout << char(219);
					}
					else {
						setlocale(LC_CTYPE, "C");
						cout << "  ";
					}

					for (int j = 1; j < t; j++)
					{

						if (o % 2 == 0) {

							cout << char(219);
							cout << char(219);
						}
						else {

							cout << "  ";
						}
						o++;
					}

					setlocale(LC_CTYPE, "C");
					cout << char(186);

					cout << endl;
				}
				for (int i = 1; i <= 7; i++)
				{
					cout << " ";

				}
				for (int i = 0; i <= t + 1; i++)
				{
					if (i == 0) {
						setlocale(LC_CTYPE, "C");
						cout << char(200);
					}
					else if (i == t + 1)
					{
						setlocale(LC_CTYPE, "C");
						cout << char(188);
					}
					else
					{
						setlocale(LC_CTYPE, "C");
						cout << char(205);
						cout << char(205);
					}
				}
			}
			else {
				for (int i = 1; i <= 7; i++)
				{
					cout << " ";

				}

				for (int i = 0; i <= t + 1; i++)
				{
					if (i == 0) {
						setlocale(LC_CTYPE, "C");
						cout << char(201);
					}
					else if (i == t + 1)
					{
						setlocale(LC_CTYPE, "C");
						cout << char(187);
					}
					else
					{
						setlocale(LC_CTYPE, "C");
						cout << char(205);
						cout << char(205);
					}


				}
				cout << endl;
				for (int i = 1; i <= t; i++)
				{
					for (int j = 0; j < 7; j++)
					{
						cout << " ";
					}
					setlocale(LC_CTYPE, "C");
					cout << char(186);
					for (int j = 0; j < t; j++)
					{
						if (o % 2 == 0) {
							setlocale(LC_CTYPE, "C");
							cout << char(219);
							cout << char(219);
						}
						else
						{
							setlocale(LC_CTYPE, "C");
							cout << "  ";
						}
						o++;
					}
					setlocale(LC_CTYPE, "C");
					cout << char(186);
					cout << endl;
				}
				for (int i = 1; i <= 7; i++)
				{
					cout << " ";

				}
				for (int i = 0; i <= t + 1; i++)
				{
					if (i == 0) {
						setlocale(LC_CTYPE, "C");
						cout << char(200);
					}
					else if (i == t + 1)
					{
						setlocale(LC_CTYPE, "C");
						cout << char(188);
					}
					else
					{
						setlocale(LC_CTYPE, "C");
						cout << char(205);
						cout << char(205);
					}
				}
			}
			cout << endl;
			setlocale(LC_CTYPE, "Rus");
			cout << "Введите номер программы: " << endl;
			break;
	case '2':
		setlocale(LC_CTYPE, "Rus");
		cout << "Ввидите размер сторон фигуры: "; cin >> t;
		for (int i = 1; i <= t; i++) {
			for (int j = 0; j <= t; j++) {
				if (i % 2 == 0) {
					for (int k = 1; k <= t; k++)
					{
						if (o % 2 == 0) {
							for (int e = 0; e <= t; e++)cout << "* ";
						}
						else
						{
							for (int e = 0; e <= t; e++)cout << "  ";
						}
						if (o < t)o++;
						else o = 1;
					}
					cout << endl;
				}
				else {
					for (int k = 1; k <= t; k++)
					{
						if (o % 2 == 0) {
							for (int e = 0; e <= t; e++)cout << "  ";

						}
						else
						{
							for (int e = 0; e <= t; e++)cout << "* ";
						}
						if (o < t)o++;
						else o = 1;
					}
					cout << endl;
				}

			}
		}
		setlocale(LC_CTYPE, "Rus");
		cout << "Введите номер программы: " << endl;
		break;
	case 13:setlocale(LC_CTYPE, "Rus");
		cout << "Программа №1 ""\"ChessBoard""\": " << endl;
		cout << "Программа №2 ""\"HardChess""\": " << endl;
		cout << "Введите номер программы: " << endl;
		break;
	default:if(program!=27) cout << "Для вывод меню программ нажмите на Enter: " << endl; break;
		}

} while (program!=27);
}






