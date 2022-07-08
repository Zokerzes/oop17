
#include<vector>
#include <iostream>
using namespace std;
void print(vector<int>v) {
	for (int item : v) {
		cout << item<<endl;

	}
	cout << endl;
}
int main()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
		cout <<"capacity " << v.capacity()<<" size"<<v.size()<<endl;
	};
	
	//print(v);
	v.begin();
	vector<int>::iterator iBegin = v.begin();
	//v.erase(iBegin + 2, iBegin + 6);
	print(v);
	//cout<<v.capacity();
	v.resize(3, 0);
	print(v);
	v.resize(30, 0);
	print(v);
	
}

