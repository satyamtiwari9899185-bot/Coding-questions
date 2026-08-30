#include<iostream>
using namespace std;
int main(){
	int arr[] = {2, 1, 7, 4, 0, 9}, n = 6;
	int i;
	int j;
	int product = 1;
	int ans[n];
	for(i = 0; i < n; i++){
		product = 1;
		for(j = 0; j < n; j++){
			if(i!=j)
			{
				product = product * arr[j];
			}
		}
		ans[i] = product;
	}
	for(int x : ans){
		cout<< x << endl;
	}
	return 0;
}
