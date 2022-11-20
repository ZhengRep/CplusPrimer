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

	//string line;

	//while(getline(cin, line)){ //terminate newline character
	//	cout << line << endl;
	//}

	/*string line;
	string::size_type i = line.size();*/

	/*
	a range for:
	for(declaration : expression)
		statement
	*/

	string str("Some String!");
	for (auto c : str) {
	//for(char c : str){
		c = toupper(c);
	}
	cout << str << endl;

	/*
	char c;
	isalnum(c);
	isalpha(c);
	isdigit(c);
	isgraph(c);
	islower(c);
	isprint(c);
	ispunct(c);
	isspace(c);
	isupper(c);
	tolower(c);
	toupper(c);
	*/



	return 0;
}