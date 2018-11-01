#include <iostream> 
using namespace std; 

void FizzBuzz(int i) 
{ 
if (i % 3 == 0 && i % 5 == 0) 
cout « "FizzBuzz" « endl; 
else if (i % 5 == 0) 
cout « "Buzz" « endl; 
else if  (i % 3 == 0) 
cout « "Fizz" « endl; 
else 
cout « i « endl; 
} 


int main(int argc, char* argv[]) 
{ 
FizzBuzz(15);
FizzBuzz(6);
FizzBuzz(27);
system("pause"); 
return 0; 
}