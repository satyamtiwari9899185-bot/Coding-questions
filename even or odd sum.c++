#include<iostream>
using namespace std;
int main(){
	int n, i;
	int  evenSum = 0;
	int oddSum = 0;
	cout<< " enter the number are = ";
	cin>> n;
	for(i = 0; i < n; i++){
		if(i%2==0)
		{
			evenSum = evenSum + i;
		}else{
			oddSum = oddSum + i;
		}
	}
	cout<< " even sum are = " << evenSum << endl;
	cout<< " odd sum are = " << oddSum << endl;
	return 0;
}
