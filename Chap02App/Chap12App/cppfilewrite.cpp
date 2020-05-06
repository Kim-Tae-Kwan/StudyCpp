#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream f;

	f.open("c:\\temp\\cpptest.txt");
	if (f.is_open()) {
		f << "Kim" << 92956608 << endl;
		f.close();
	}
	else {
		cout << "파일 열기 실패" << endl;
	}

	ifstream fi;
	char str[128];
	int i=0;

	fi.open("c:\\temp\\cpptest.txt");
	if (fi.is_open()) {
		fi.getline(str, 128);
		cout << str << i << endl;
		f.close();
	}
	else {
		cout << "파일 열기 실패" << endl;
	}


	return 0;
}