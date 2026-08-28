#include<iostream>
using namespace std;
int main(){
	int n, arr[n];
	cout<< " enter the number are = ";
	cin>> n;
	int i;
	for(i = 0; i < n; i++){
		cin>> arr[i];
	}
	int j;
	int frequency = 0;
	int ans = 0;
	for(i = 0; i < n; i++){
		for(j = 0; i < n; j++){
			if(arr[i] == arr[j])
			{
				frequency++;
			}else{
				frequency = 0;
				ans = arr[i];
			}
		}
		if(frequency > (n/2))
		{
			cout<< ans << endl;
		}
	}
	return 0;
}
