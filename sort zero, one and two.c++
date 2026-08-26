#include<iostream>
using namespace std;
int main(){
	int arr[] = {1, 0, 1, 2, 0, 2, 0, 1}, n = 8;
	int i;
	int countZero = 0;
	int countOne = 0;
	int countTwo = 0;
	for(i = 0; i < n; i++){
		if(arr[i] == 0)
		{
			countZero++;
		}else if(arr[i] == 1){
			countOne++;
		}else{
			countTwo++;
		}
	}
	int index = 0;
	for(i = 0; i < countZero; i++){
		arr[index] = 0;
		index++;
	}
	for(i = 0; i < countOne; i++){
		arr[index] = 1;
		index++;
	}
	for(i =  0; i < countTwo; i++){
		arr[index] = 2;
		index++;
	}
	for(i = 0; i < n; i++){
		cout<< arr[i] << endl;
	}
	return 0;
}
