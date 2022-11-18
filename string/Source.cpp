#include<iostream>
#include<string>

using namespace std;

/*
EOF:
Control-z stand for end of file
Control-c(break) stand for end input
*/

int main()
{
	/*string word;
	while (cin >> word) {
		cout << word << endl;
	}*/

	string line;

	while(getline(cin, line)){
		cout << line << endl;
	}

	return 0;
}