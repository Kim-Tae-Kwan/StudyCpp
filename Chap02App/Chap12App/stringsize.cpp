#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s("C++ String");

	cout << s << " ���ڿ��� ���� = " << s.size() << endl;
	cout << s << " ���ڿ��� ���� = " << s.length() << endl;
	cout << s << " ���ڿ��� �Ҵ� ũ�� = " << s.capacity() << endl;
	cout << s << " ���ڿ��� �ִ� ���� = " << s.max_size() << endl;

	cout << boolalpha << s.empty() << endl;

	s.clear();
	cout << s << endl;
	
	return 0;
}