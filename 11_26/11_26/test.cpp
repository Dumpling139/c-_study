//#include<iostream>
//using namespace std;
//namespace Date {
//	void func()
//	{
//		cout << "func()" << endl;
//	}
//	int _year = 2024;
//	int _month = 11;
//	int _day = 26;
//}

////ָ�������ռ����
//int main()
//{
//	cout << Date::_year << endl;
//	return 0;
//}
//
////using�������ռ���ĳ����Աչ����
//using Date::_year;
//
//int main()
//{
//	cout << _year << endl;
//	return 0;
//}
//
////չ�������ռ���ȫ����Ա��
//
//using namespace Date;
//
//int main()
//{
//	cout << _year << endl;
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//
//int main() {
//	int a = 10;
//	float b = 1.1;
//	char c = 'M';
//	//�Զ�ʶ������
//	cout << a<<" "<<b<<" "<<c << endl;
//	printf("%d %f %c\n", a, b, c);
//	cin >> a >> b >> c;
//	cout << a << " " << b << " " << c << endl;
//	return 0;
//}


//int i = 0;
//
//namespace Date {
//	int i = 1;
//}
//int main()
//{
//	cout << Date::i << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
////��ȱʡ
//void func(int a, int b = 0 , int c = 0)
//{
//	cout << a+b+c << endl;
//}
//
//int main() {
//	func(1);
//	func(10);
//	func(1, 2, 3);
//	return 0;
//}


//���������Ͳ�ͬ
#include<iostream>
using namespace std;
//int Add(int a, int b) {
//	return a + b;
//}
//
//float Add(float a, float b) {
//	return a + b;
//}
//
//int main() {
//	int a = 1;
//	int b = 2;
//	float c = 1.1;
//	float d = 2.2;
//	cout << Add(a, b) << endl;
//	cout << Add(c, d) << endl;
//	return 0;
//}
//�����ĸ�����ͬ
//
//void func()
//{
//	cout << "func()" << endl;
//}
//
//void func(int a, int b)
//{
//	cout << "func(int a, int b)" << endl;
//}
//
//int main() {
//	func();
//	func(1, 2);
//	return 0;
//}
//��������˳��ͬ

//void func(int a,char b)
//{
//	cout << "func(int, char)" << endl;
//}
//
//namespace Date {
//	void func(char a, int b)
//	{
//		cout << "func(char, int)" << endl;
//	}
//}
//
//using namespace Date;
//
//
//int main() {
//	int a = 0;
//	char b = 'A';
//	func(a, b);
//	func(b, a);
//	return 0;
//}


int main() {
	int a = 0;
	int& b = a;
	int& c = b;
	a++;
	b++;
	c++;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << &a << endl;
	cout << &b << endl;
	cout << &c << endl;
}



















