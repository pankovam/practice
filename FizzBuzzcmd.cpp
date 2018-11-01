#include <iostream>
#include <string.h>

using namespace std;

void FizzBuzz(int i)
{ 

	if  (i % 3 == 0 && i % 5 == 0)
	cout << "FizzBuzz" << endl;

	else if (i % 5 == 0)
		cout << "Buzz" << endl;

	else if (i % 3 == 0)
		cout << "Fizz" << endl;

	else
		cout << i << endl;
}

int main(int argc, char* argv[])

{   
	string str1;

	setlocale(LC_ALL, "Russian");

	for (int i = 0; i < argc; i++)
		str1 = argv[i];
		
		if (str1 == "FizzBuzz")
		{
			FizzBuzz(3);
			FizzBuzz(15);
			FizzBuzz(145);
		}

		else

		{
			cout << "ошибка" << endl;
		}

	system("pause");

	return 0;
}
