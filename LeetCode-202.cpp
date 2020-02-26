/*************************************************************************
	> File Name: LeetCode-202.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 17时19分53秒
 ************************************************************************/

#include<iostream>
using namespace std;
bool isHappy(int n){
    int a=getnum(n),b=n;
    while(a!=b){
        a=getnum(a);
        a=getnum(a);
        b=getnum(b);
    }
    if(a==1)return true;
    return false;

}
int getnum(int n){
    int p,sum=0;
    while(n){
        p=n%10;
        sum = sum +p*p;
        n=n/10;
    }
    return sum;
}
