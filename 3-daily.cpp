#include <iostream>
#include <string>
using namespace std;

string exOne(string strOne, int numOne, int i) {

	string strOneOne = "";
	while (i < numOne) {
		i++;
		 strOneOne += strOne;
	}
	return strOneOne;
}

string exTwo(int numTwo, string strTwo, int i) {

	while (i <= numTwo) {
		strTwo += to_string(i);
		i++;
	}
	return strTwo;
}

int main()
{
	string strOne, strTwo;
	int i = 0, numOne, numTwo;

	cout << "---Ex. 1---" << endl;
	cout << "Enter a word" << endl;
	cin >> strOne;
	cout << "Enter a number of amounts you want the word to be repeated" << endl;
	cin >> numOne;
	cout << exOne(strOne, numOne, i)<< endl;

	cout << "---Ex. 2---" << endl;
	cout << "Enter a number" << endl;
	cin >> numTwo;
	cout << exTwo(numTwo, strTwo, i) << endl;
}
