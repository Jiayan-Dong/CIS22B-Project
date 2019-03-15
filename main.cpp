#include "Book.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	Book booklist[1024];
	int i = 0;
	fstream bookListIn("book.txt", ios::in);

	system("pause");
	return 0;
}