
#include <iostream>
using namespace std;
class NewClass
{
public:
 int *d;
 int size;
 NewClass(int size)
 {
  this->size = size;
  this->d = new int[size];
  for (int i = 0; i < size; i++)
  {
   d[i] = i;
  }
  cout << "конструктор" <<"\t"<< this << endl;
 };
 ~NewClass()
 {
  cout << "деструктор" <<"\t"<<this<< endl;
  delete[] d;
 };
 NewClass(const NewClass &pointer)
 {
  this->data = new int[pointer.size];
  for (int i = 0; i < pointer.size; i++)
  {
   this->d[i] = pointer.d[i];
  }
  cout << "конструктор копирования"<<this<< endl;
 }
};
void function(NewClass cop)
{
 cout << "функция function" << endl;
};
NewClass fun()
{
 cout << "функция fun" << endl;
 NewClass tmp(4);
    return tmp;
};
int main()
{
 setlocale(LC_ALL, "ru");
 NewClass a(20);
 NewClass b(a); 
 function(a);
 fun();
 NewClass a(2);
 NewClass b(a);

 system("pause");
}﻿
