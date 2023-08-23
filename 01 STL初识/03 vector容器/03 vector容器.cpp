#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>

void printVector(vector<int> & v){
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
}

void test01() {
	vector<int>v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	vector<int> v2(v1.begin(), v1.end());

	printVector(v2);
	cout << v1.size() << endl;
	cout << v2.size() << endl;

	vector<int> v3;
	v3.assign(v2.begin(), v2.end()-1);
	v2.swap(v3);
	printVector(v3);
	printVector(v2);
}

int main()
{
	test01();


	system("pause");
	return EXIT_SUCCESS;
}