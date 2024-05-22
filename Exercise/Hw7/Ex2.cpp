#include<bits/stdc++.h>

using namespace std;
string s;

void backtrack(int i){
	if (i == 3){
		cout << s << endl;
		return;
	}
	else{
		for (char j = 'a'; j <= 'd'; j++){
			s = s + j;
			backtrack(i + 1);
			s.pop_back();
		}
	}
}
		

int main(){
	backtrack(0);
	return 0;
}
