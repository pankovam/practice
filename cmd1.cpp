#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
using namespace std;


int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Russian");
	for (int i = 0; i < argc; i++) 
		cout << argv[i] << endl;
	system("pause");
	return 0;
}







