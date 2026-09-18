#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;
int main(){
	string s = "level";
	queue<char>q;
	unordered_map<char, int>mp;
	int i;
	for(i = 0; i < s.length(); i++){
		if(mp.find(s[i]) == mp.end())
		{
			q.push(s[i]);
		}
		mp[s[i]]++;
		while(q.size() > 0 && mp[q.front()] > 1){
			q.pop();
		}
	}
	if(q.empty())
	{
		cout<< " -1 ";
	}else{
		cout<< q.front();
	}
	return 0;
}
