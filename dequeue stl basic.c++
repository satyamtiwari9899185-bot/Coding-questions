#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();
    cout<< " front = " << q.front() << endl;
    cout<< q.empty() << endl;
    cout<< " back = " << q.back() << endl;
    while(!q.empty()){
        cout<< q.front() << endl;
        q.pop();
    }
	return 0;
}
