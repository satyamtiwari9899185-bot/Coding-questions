#include<iostream>
using namespace std;
int main(){
	int arr[] = {2, 6, 8, 4, 5, 9}, n = 6, target = 5, i;
	for(i = 0; i < n; i++){
		if(arr[i] == target)
		{
			cout<< i << endl;
			break;
		}
	}
	return 0;
}
