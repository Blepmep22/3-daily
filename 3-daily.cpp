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

	char komma = ',';
	while (i <= numTwo) {
		strTwo += to_string(i);
		i++;
	
		//if (i < numTwo) {
			//strTwo + komma;
		//}
	}
	return strTwo;
}

string exThree(int numThree, string strThree, int i) {

	char komma = ',';
	while (numThree >=i) {
		strThree += to_string(numThree) + komma;
		numThree--;
	}
	return strThree;
}

int exFour(int numFour) {
	
	int factorial = 1;
	for (int a = 1; a <= numFour; a++) {
		factorial = factorial * a;
	}
	return factorial;
}

int main()
{
	string strOne, strTwo, strThree;
	int i = 0, numOne, numTwo, numThree, numFour;

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

	cout << "---Ex. 3---" << endl;
	cout << "Enter a number" << endl;
	cin >> numThree;
	cout << exThree(numThree, strThree, i) << endl;

	cout << "---Ex. 4---" << endl;
	cout << "Enter a number" << endl;
	cin >> numFour;
	cout << exFour(numFour) << endl;
}
