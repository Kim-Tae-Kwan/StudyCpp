#include <stdio.h>
#include <io.h>
#include <conio.h>
#include <iostream>
using namespace std;

class TextPrint {
public:
    char* book[80];

};




void main()
{
    _finddata_t fd;
    long handle;
    int result = 1;

    handle = _findfirst("C:\\DEV\\*.txt", &fd);  //���� ���� �� ��� ������ ã�´�.
    while (1) {
        if (handle == -1)
        {
            printf("There were no files.\n");
            break;
        }

        while (result != -1)
        {
            printf("File: %s\n", fd.name);
            result = _findnext(handle, &fd);
        }
      //  result = 1;
    }
        _findclose(handle);

    return;
}
