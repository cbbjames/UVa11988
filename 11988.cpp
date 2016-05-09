//#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char s[100005];
int Next[100005] = {0};
int main() {
	while (scanf("%s",s+1)==1) {
		int cur,last;
		cur = last = 0;
		Next[0] = 0;
		for (int i = 1; i <= strlen(s+1); i++) {
			if (s[i] == '[') { cur = 0; }
			else if (s[i] == ']') { cur = last; }
			else {
				Next[i] = Next[cur];
				Next[cur] = i;
				if (cur == last) last = i;
				cur = i;
			}
		}
		for (int i = Next[0]; i != 0; i = Next[i])
		cout << s[i];
	cout << endl;
	}
	
	//system("PAUSE");
	return 0;
} 