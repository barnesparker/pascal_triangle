#include "Pascal.h"

Pascal::Pascal()
{
}
void Pascal::buildTriangle(int num_rows)
{
	for (int i = 0; i < num_rows; i++)
	{
		rows.push_back(new vector<int>);
	}
	fillRows();
}
void Pascal::fillRows()
{
	rows[0]->push_back(1);
	for (int i = 1; i < rows.size(); i++)
	{
		rows[i]->push_back(1);
		if (i != 1)
		{
			for (int j = 0; j < i - 1; j++)
			{
				rows[i]->push_back(rows[i - 1]->at(j) + rows[i - 1]->at(j + 1));
			}
		}
		rows[i]->push_back(1);
	}
}
string Pascal::toTriangle()
{
	stringstream ss;
	for (int i = 0; i < rows.size(); i++)
	{
		ss << setw(2 * (rows.size() - i));
		for (int j = 0; j < rows[i]->size(); j++)
		{
			ss << rows[i]->at(j) << "    ";
		}
		ss << endl;
	}
	return ss.str();
}
string Pascal::toTable()
{
	stringstream ss;
	ss << "*-------*-------*---------------*" << endl;
	ss << "|  row  | entry |     value     |" << endl;
	ss << "*-------*-------*---------------*" << endl;
	for (int i = 0; i < rows.size(); i++)
	{
		for (int j = 0; j < rows[i]->size(); j++)
		{
			ss << "|   " << i << "   |   " << j << "   |       " << rows[i]->at(j) << "       |" << endl;
		}
	}
	return ss.str();
}
