#include<iostream>
using namespace std;
int main(){
	int n;
	cout<< " enter the number are = ";
	cin>> n;
	int i;
	int sum = 0;
	int copyofNumber = n;
	for(i = 1; i < n; i++){
		if(n % i == 0)
		{
			sum = sum + i;
		}
	}
	if(copyofNumber == sum)
	{
		cout<< " it is a perfect number " << endl;
	}else{
		cout<< " it is not a perfect number " << endl;
	}
	return 0;
}
