#include <bits/stdc++.h>

using namespace std;

void decode(){
	int n, m;
	cin >> n >> m;
	if(n == 1) cout << 0;
	else cout << min(2, n-1)*m;
	cout << "\n";
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		decode();
	}
	return 0;
}
