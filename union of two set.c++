#include<iostream>
#include<set>
using namespace std;
int main(){
	int arr1[] = {2, 5, 1, 8}, arr2[] = {6, 8, 2, 1, 9};
	set<int>s;
	int n1 = 4;
	int n2 = 5;
	int i;
	for(i = 0; i < n1; i++){
		s.insert(arr1[i]);
	}
	for(i = 0; i < n2; i++){
	    s.insert(arr2[i]);
    }
	for(int x : s){
		cout<< x << endl;
	}
	return 0;
}
