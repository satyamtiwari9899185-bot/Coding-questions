#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int>vec1 = {2, 3, 0, 1, 8, 9, 6};
	vector<int>ve2;
	sort(vec1.begin(), vec1.end());
	reverse(vec1.begin(), vec1.end());
	cout<< max(5, 6) << endl;
	cout<< min(2, 9) << endl;
	int a = 2, b = 6;
	swap(a, b);
	cout<< a << endl;
	cout<< b << endl;
	for(int x : vec1){
		cout<< x << endl;
	}
	return 0;
}
