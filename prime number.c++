#include<iostream>
using namespace std;
int main(){
//	int n;
//	cout<< " enter the number are = ";
//	cin>> n;
//	int i;
//	bool isPrime = true;
//	for(i = 2; i < n; i++){
//		if(n % i == 0)
//		{
//			isPrime = false;
//			break;
//		}
//	}
//	if(isPrime)
//	{
//		cout<< " it is a prime number ";
//	}else{
//		cout<< " it is not a prime number ";
//	}
    int n;
    cout<< " enter the number are = ";
    cin>> n;
    int i;
    bool isPrime = true;
    for(i = 2; i*i <= n; i++){
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if(isPrime)
    {
        cout<< " it is a prime number ";
    }else{
        cout<< " it is not a prime number ";
    }
	return 0;
}
