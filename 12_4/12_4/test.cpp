
#include<iostream> 
using namespace std; 

//inline int Add(int x,int y)
//{
//	int ret = x + y;
//	return ret;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	return 0;
//}
void f(int x)
{
	cout << "f(int)" << endl;
}

void f(int* x)
{
	cout << "f(int*)" << endl;
}

int main() {
	f(0);
	// 本想通过f(NULL)调?指针版本的f(int*)函数，但是由于NULL被定义成0，调?了f(int x)，因此与程序的初衷相悖。
	f(NULL);
	f((int*)NULL);
	f(nullptr);
	return 0;
}