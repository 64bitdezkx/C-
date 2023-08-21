#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void myPrint_int(int val) {
	cout << val << endl;
}
//void myPrint_Person(Person *p){
//	cout<< (*p)->m_name << (*p)->m_age<< endl;
//}


////原生指针也是迭代器
//void test01() {
//	int arr[5] = { 1,2,3,4,5 };
//	int* p = arr;
//	for (int i = 0; i < 5; i++) {
//		cout << *(p++) << endl;
//	}
//}
//
//void test02() {
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	vector<int>::iterator itBegin = v.begin();///指向数组的第一个元素
//	vector<int>::iterator itEnd = v.end();//指向数组元素最后一个元素的下一个位置
//
//	//第一种遍历
//	while (itBegin != itEnd) {
//		cout << *itBegin << endl;
//		itBegin++;
//	}
//
//	//第二种遍历
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << endl;
//	}
//
//	for_each(v.begin(), v.end(), myPrint);
//}

class Person {
public:
	Person(string name, int age) {
		this->m_name = name;
		this->m_age = age;
	}
	int m_age;
	string m_name;
};


//void test03() {
//	vector<Person>v;
//	
//	Person p1("zkx1", 18);
//	Person p2("zkx2", 19);
//	Person p3("zkx3", 20);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//
//	vector<Person>::iterator itBegin = v.begin();///指向数组的第一个元素
//	vector<Person>::iterator itEnd = v.end();//指向数组元素最后一个元素的下一个位置
//
//	//第一种遍历
//	while (itBegin != itEnd) {
//		cout<< itBegin->m_age<<itBegin->m_name << endl;
//		itBegin++;
//	}
//
//	for (vector<Person>::iterator itP = v.begin(); itP != v.end(); itP++) {
//		cout << itP->m_age << itP->m_name << endl;
//	}
//
//}
//
//void test04() {
//	vector<Person*> p;
//	Person p1("zkx1", 18);
//	Person p2("zkx2", 19);
//	Person p3("zkx3", 20);
//
//	p.push_back(&p1);
//	p.push_back(&p2);
//	p.push_back(&p3);
//
//	vector<Person*>::iterator beginP = p.begin();
//	vector<Person*>::iterator endP = p.end();
//	while (beginP != endP) {
//		cout << (*beginP)->m_age << "  " << (*beginP)->m_name << endl;
//		beginP++;
//	}
//
//
//	for (vector<Person*>::iterator itp = p.begin(); itp != p.end(); itp++) {
//		cout << (*itp)->m_age <<"  " << (*itp)->m_name <<endl;
//
//	}
//
//	//for_each(p.begin(), p.end(), myPrint);
//
//}

void test05(){
	

}

int main()
{
	//test02();
	//test03();
	//test04();


	system("pause");
	return EXIT_SUCCESS;
}