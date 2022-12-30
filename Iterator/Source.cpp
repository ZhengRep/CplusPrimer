#include<iostream>
using namespace std;

int main()
{
	//string s("12345");
	//auto beg = s.begin(), end = s.end();
	//auto mid = s.begin() + (end - beg) / 2; //original midpoint this is difference_type(is a signed integral type)
	//char sought = '1';
	//while (mid != end && *mid != sought) {
	//	if (*mid < sought) {
	//		end = mid;
	//	}
	//	else {
	//		beg = mid;
	//	}
	//	mid = beg + (end - beg) / 2;
	//}

	//unsigned sz1 = 20;
	//constexpr unsigned sz2 = 10;
	//int arr1[sz2];

	//char str[] = "c++";

	//int arr[10];
	//int(&arrRef)[10] = arr; //arrRef refers to an array of ten ints

	//decltype(arrRef) arrRef2 = arr; //get data type from data name

	int ia[] = { 0, 1, 2, 3, 4, 5, 6, 8, 9 };
	int* beg = begin(ia); //begin(array) and array.begin() is different
	int* last = end(ia);
	cout << "beg" << *beg << endl;
	cout << "last" << *last << endl; //end() returns a pointer one past the last element in the given array.

	return 0;
}