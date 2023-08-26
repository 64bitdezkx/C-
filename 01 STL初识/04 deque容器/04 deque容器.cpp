#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<deque>

void pruintDeque(deque<int> &d) {
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}



void test01() {

	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_back(40);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	d.push_front(400);

	d.insert(++d.begin(), 2, 1000);
	pruintDeque(d);//400 1000 1000 300 200 100 10 20 30 40

	d.erase(++d.begin());
	d.erase(++d.begin());

	pruintDeque(d);//400 300 200 100 10 20 30 40
	deque<int> ::iterator it1 = d.begin();
	it1 = it1 + 1;
	deque<int> ::iterator it2 = d.begin();
	it2 = it2 + 2;

	d.erase(it1, it2);
	pruintDeque(d);


}

int main()
{
	test01();


	system("pause");
	return EXIT_SUCCESS;
}