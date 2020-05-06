#include <iostream>
using namespace std;

auto func() { return 3.141592; }

int main()
{	
	//const char*
	auto NPCName = "Farmer";
	cout << NPCName << endl;

	//int
	auto Number = 3.141592;
	cout << Number << endl;

	//int*
	int Usermode = 4;
	auto pUsermode = &Usermode;
	cout << "pUsermode = " << *pUsermode << "address = " << pUsermode << endl;

	//&
	auto& refUsermode = Usermode;

	auto result = func();
	cout << "result is " << result << endl;


	return 0;
}