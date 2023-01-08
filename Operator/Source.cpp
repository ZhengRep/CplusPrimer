#include<iostream>
#include<windows.h>
using namespace std;

int two()
{
	return 2;
}

int three()
{
	
	Sleep(5);
	return 3;
}

int four()
{
	return 4;
}

int main()
{
	//cout << two() + three() * four() << endl;
	int i = 0;
	cout << i << " " << ++i << endl;
	return 0;
}