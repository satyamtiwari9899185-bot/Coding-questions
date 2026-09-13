#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cout<< " enter the number are = ";
	cin>> n;
	int digit;
	vector<int>ans;
	while(n > 0){
		digit = n % 16;
		ans.push_back(digit);
		n = n / 16;
	}
	reverse(ans.begin(), ans.end());
	for(int x : ans){
		cout<< x << endl;
	}
	return 0;
}
