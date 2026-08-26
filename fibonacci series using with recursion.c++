#include<iostream>
using namespace std;
int fibonacciSeries(int n){
	if(n == 0 || n == 1)
	{
		return 1;
	}
	return fibonacciSeries(n-1) + fibonacciSeries(n-2);
}







int main(){
	int n;
	cout<< " enter the number are = ";
	cin>> n;
	cout<< fibonacciSeries(n) << endl;
	return 0;
}
