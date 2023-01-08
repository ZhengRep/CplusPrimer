#include<iostream>
#include<vector>

using namespace std;

int main()
{
	// array change to vector
	//int int_arr[] = { 0, 1, 2, 3, 4, 5 };
	//vector<int> ivec(begin(int_arr), end(int_arr)); //(pointer_begin, pointer_end)

	//string s("Hello World");
	//const char* str = s.c_str(); //this is const char because all pointer same data.

	//using a Range for with multidimensional Arrays
	constexpr int rowCnt = 3, colCnt = 4;
	int ia[rowCnt][colCnt];
	//size_t cnt = 0;
	//for (auto& row : ia) { //row is a reference to an array for four ints
	//	for (auto& col : row) { //col iterates through one of those 4-elements arrays.
	//		col = cnt++;
	//	}
	//}

	//for (auto row : ia) { //if no reference, row will be int*
	//	for (auto col : row) {
	//		cout << row << endl;
	//	}
	//}

	//mutidimensional array is array of arrays
	int ia[3][4];
	int(*p)[4] = ia;
	p = &ia[2];

	return 0;
}