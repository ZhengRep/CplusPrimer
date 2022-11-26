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

	//string str("Some String!");
	//for (auto &c : str) {
	////for(char c : str){
	//	c = toupper(c);
	//}
	//cout << str << endl;

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

	/*
	string s1; //default initialization, s1 is the empty string
	string s2(s1); //s2 is a copy of s1
	string s2 = s1; //s2 is a copy of s1
	string s3 = "value"; //s3 is a copy of string literal
	string s3("value");
	string s4(n, 'c'); //Initialize s4 with n copies of the character 'c'
	*/

	/*const string hexdigits = "0123456789ABCDEF";
	cout << "Enter a series of numbers between 0 and 15" << "separated by spaces. Hit ENTER when finished: " << endl;
	string result;
	string::size_type n;
	while (cin >> n) {
		if (n < hexdigits.size()) {
			result += hexdigits[n];
		}
	}
	cout << "Your hex number is:" << result << endl;*/

	string s1(4, 'H');
	cout << s1 << endl;

	return 0;
}