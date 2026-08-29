#include<iostream>
using namespace std;
int main(){
	int arr[] = {2, 8, 9, 5, 0, 6}, n = 6;
	int i;
	int j;
	int w;
	int ht;
	int area;
	int maxWater = 0;
	for(i = 0; i < n; i++){
		for(j = i+1; j < n; j++){
			w = j - i;
			ht = min(arr[i], arr[j]);
			area = ht * w;
			maxWater = max(maxWater, area);
		}
	}
	cout<< " maximum water in with container are = " << maxWater << endl;
}
