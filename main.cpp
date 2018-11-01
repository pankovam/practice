#include <iostream> 
#include <iomanip> 
#include <cmath> 
#include <locale> 
using namespace std; 

void FizzBuzz(int i) 
{ 
if (i % 3 == 0) 
cout « "Fizz" « endl; 
else if (i % 5 == 0) 
cout « "Buzz" « endl; 
else if (i % 3 == 0 && i % 5 == 0) 
cout « "FizzBuzz" « endl; 
else 
cout « i « endl; 
} 


int main(int argc, char* argv[]) 
{ 
int chislo; 
cout « "Enter shislo: "; 
cin » chislo; 
FizzBuzz(chislo); 
system("pause"); 
return 0; 