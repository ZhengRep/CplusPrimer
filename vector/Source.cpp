#include<iostream>
#include<vector>

using namespace std;

int main()
{
	/*
	Initialize a vector:
	vector<T> v1; //Default initialization, v1 is empty.
	vector<T> v2 = v1; //v2 is a copy of the elements in v1
	vector<T> v2(v1); //v2 has a copy of each element in v1
	vector<T> v3(n, val); //v3 has n elements of value val
	vector<T> v4(n); //v4 has n copies of a value-initialized object
	vector<T> v5{a, b, c...} //v5 has as many elements as there are initializers, elements are initialized by corresponding initializers.
	vector<T> v5 = {a, b, c...} // Equivalent to v5 {a, b, c...}
	*/

	//vector<int> v1{ 1, 2, 3, 4 };
	////vector<int> v2{ 1, 2, 4, 4 };
	//v1 = { 5, 6 }; // Replace the elements in v1 with a copy of the elements in the comma-separated list.
	//for (auto i : v1) {
	//	cout << i << " ";
	//}
	//cout << endl;

	//count the number of  grades by clusters of ten: 0--9, 10--19, ..., 90--99, 100
	/*vector<unsigned> scores(11, 0);
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100) {
			++scores[grade / 10];
		}
	}
	for (auto i : scores) {
		cout << i << " ";
	}
	cout << endl;*/

	/*vector<int> v1{ 1, 2, 3, 4, 5 };
	auto it = v1.end() - 1;
	cout << *it << endl; //undefined behavior, this is different between debug and release

	*/ 

	string s("some string");
	if (s.begin() != s.end()) {
		auto it = s.begin(); //string:: const_iterator
		*it = toupper(*it);
	}
	cout << s << endl;

	return 0;
}