#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

class Pascal
{
public:
	Pascal();
	void buildTriangle(int num_rows);
	void fillRows();
	string toTable();
	string toTriangle();

	
private:
	vector<vector<int>*> rows;
};
