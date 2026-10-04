#include<iostream>
using namespace std;
int main(){
	int arr[] = {2, -1, 8, 0, 5, 9, 3, 6}, n = 8;
	int st, end;
	int i;
	for(st = 0; st < n; st++){
		for(end = st; end < n; end++){
		    for(i = st; i < end; i++){
				cout<< arr[i] << " ";
			}
			cout<< " ";
		}
		cout<< endl;
	}
	return 0;
}
