#include<iostream>
using namespace std;
int main(){
	int gas[] = { 2, 1, 0, 6, 9, 8};
	int cost[] = { 3, 9, 5, 7, 2, 6};
	int totalGas = 0;
	int totalCost = 0;
	int start = 0;
	int currGas = 0;
	int n = 6;
	int i;
	for(int x : gas){
		totalGas = totalGas + x;
	}
	for(int x : cost){
		totalCost = totalCost + x;
	}
	if(totalGas < totalCost)
	{
		cout<< " -1 ";
	}else{
	    for(i = 0; i < n; i++){
		    currGas = currGas + (gas[i] - cost[i]);
		    if(currGas < 0)
		    {
			   start = i + 1;
			    currGas = 0;
		    }
	    }
	    cout<< start << endl;
    }
	return 0;
}
