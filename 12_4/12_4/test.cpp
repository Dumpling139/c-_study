
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
	// ����ͨ��f(NULL)��?ָ��汾��f(int*)��������������NULL�������0����?��f(int x)����������ĳ�����㣡�
	f(NULL);
	f((int*)NULL);
	f(nullptr);
	return 0;
}