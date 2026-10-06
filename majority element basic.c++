#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int arr[] = {1, 2, 2, 1, 1, 1}, n = 6;
	int freq;
	int ans;
	int i, j;
	for(i = 0; i < n; i++){
		freq = 0;
		for(j = 0; j < n; j++){
			if(arr[i] == arr[j])
			{
				freq++;
				ans = arr[i];
			}
		}
		if(freq > n/2)
		{
			cout<< ans << endl;
		}
	}
	return 0;
}
