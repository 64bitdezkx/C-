#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>


//ԭ��ָ��Ҳ�ǵ�����
void test01() {
	int arr[5] = { 1,2,3,4,5 };
	int* p = arr;
	for (int i = 0; i < 5; i++) {
		cout << *(p++) << endl;
	}
}

void test02() {
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	vector<int>::iterator itBegin = v.begin();///ָ������ĵ�һ��Ԫ��
	vector<int>::iterator itEnd = v.end();//ָ������Ԫ�����һ��Ԫ�ص���һ��λ��

	while (itBegin != itEnd) {
		cout << *itBegin << endl;
		itBegin++;
	}
}

int main()
{
	test02();




	system("pause");
	return EXIT_SUCCESS;
}