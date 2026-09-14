#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>vec1;
	vec1.push_back(1);
	vec1.push_back(2);
	vec1.push_back(3);
	for(int x : vec1){
		cout<< x << endl;
	}
	vec1.pop_back();
	cout<< " front = " << vec1.front() << endl;
	cout<< " size = " << vec1.size() << endl;
	cout<< " back = " << vec1.back() << endl;
	cout<< " capacity = " << vec1.capacity() << endl;
	vector<int>vec2 = {1, 2, 3, 4, 5, 6};
	for(int p : vec2){
		cout<< p << endl;
	}
	vector<int>vec3(8, 3);
	for(int k : vec3){
	 cout<< k << endl;
	}
	return 0;
}
