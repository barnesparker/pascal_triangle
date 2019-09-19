#include <iostream>
#include <vector>
#include "Pascal.h"
using namespace std;

int main()
{
	bool repeat = 0;
	const int TABLE = 0;
	int form = 0;
	int rows = 0;
	cout << "Welcome to the Pascal Triangle builder!" << endl << endl;
	while (rows < 1)
	{
		cout << "Enter how many rows you would like it to be (>0): ";
		cin >> rows;
		if (rows < 1)
		{
			cout << "Must be greater than 0" << endl;
		}
	}
	Pascal triangle;
	cout << "Would you like it in table form or triangle form? (Enter 0 for table, 1 for triangle): ";
	cin >> form;
	triangle.buildTriangle(rows);
	if (form == TABLE)
	{
		cout << triangle.toTable() << endl;
	}
	else
	{
		cout << triangle.toTriangle() << endl;
	}
	system("pause");
	return 0;
}