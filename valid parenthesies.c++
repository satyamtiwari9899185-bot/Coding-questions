#include<iostream>
#include<stack>
using namespace std;
int main(){
	string s = "({}[])";
	stack<char>st;
	int i;
	for(i = 0; i < s.length(); i++){
		if(s[i] == '(' || s[i] == '{' || s[i] == '[')
		{
			st.push(s[i]);
		}else{
			if(st.empty())
			{
				cout<< " false ";
				return 0;
			}
			if((s[i] == ')' && st.top() == '(') ||
			   (s[i] == '}' && st.top() == '{') ||
			   (s[i] == ']' && st.top() == '['))
			{
			   	st.pop();
			}else{
			   	cout<< " false ";
			   	return 0;
			}
		}
	}
	if(st.empty())
	{
	    cout<< " true ";
    }else{
        cout<< " false ";
    }
	return 0;
}
