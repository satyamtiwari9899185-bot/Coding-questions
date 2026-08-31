#include<iostream>
#include<set>
using namespace std;
int main(){
	int arr[] = {5, 8, 2, 8, 1, 6}, n = 6;
	int i;
	set<int>s;
	for(i = 0; i < n; i++){
		if(s.find(arr[i])!=s.end())
		{
			cout<< i << endl;
		}
		s.insert(arr[i]);
	}
	return 0;
}
