#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s("C++ String");

	cout << s << " 문자열의 길이 = " << s.size() << endl;
	cout << s << " 문자열의 길이 = " << s.length() << endl;
	cout << s << " 문자열의 할당 크기 = " << s.capacity() << endl;
	cout << s << " 문자열의 최대 길이 = " << s.max_size() << endl;

	cout << boolalpha << s.empty() << endl;

	s.clear();
	cout << s << endl;
	
	return 0;
}