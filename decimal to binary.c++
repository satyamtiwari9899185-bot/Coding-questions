#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cout<< " enter the number are = ";
	cin>> n;
	int i;
	int digit;
	vector<int>ans;
	while(n > 0){
		digit = n % 2;
		ans.push_back(digit);
		n = n / 2;
	}
	reverse(ans.begin(), ans.end());
	for(int x : ans){
		cout<< x << endl;
	}
	return 0;
}
