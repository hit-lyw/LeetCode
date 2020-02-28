/*************************************************************************
	> File Name: LeetCode-20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 17时25分30秒
 ************************************************************************/

#include<iostream>
using namespace std;
bool isValid(char * s){
    bool ans = true;
	if(s)
	{
		char *stack = (char*)calloc(strlen(s)+1, sizeof(char));
		int i, top = -1;
		for(i = 0;s[i];++i)
		{
			if(s[i] == '('||s[i] == '['||s[i] == '{'||top == -1)
				stack[++top] = s[i];
			else if(s[i] == stack[top] + 1||s[i] == stack[top] + 2)
				--top;
			else{
				ans = false;
				break;
			}
		}
		if(top > -1) ans = false;
	}
	return ans;
}

