#include<iostream>
using namespace std;
int main(){
	int arr[] = {1, 1, 2, 6, 6, 3, 3}, n = 7;
	int i;
	int ans = 0;
	for(i = 0; i < n; i++){
		ans = ans ^ arr[i];
	}
	cout<< " unique number in the array are = " << ans << endl;
	return 0;
}
