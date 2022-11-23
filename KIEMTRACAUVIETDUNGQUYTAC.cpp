#include <bits/stdc++.h>
using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define sz(a) int((a).size())
#define pb push_back
#define pf push_front
#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;

void solve(string s){
	stack<char>st;
	for (char x : s){
		if (st.empty() || x=='(' || x=='[') st.push(x);
		else{
			if (x==')'){
				if (st.top()=='(' && x==')') st.pop();
				else{
					cout << "NO\n"; return;
				}
			}
			if (x==']'){
				if (st.top()=='[' && x==']') st.pop();
				else{
					cout << "NO\n"; return;
				}
			}
		}
	}
	if (!st.empty()){
		cout << "NO\n"; return;
	}
	cout << "YES\n";
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t; cin >> t;
	cin.ignore();
	while (t--){
		string s; getline(cin,s);
		string res="";
		for (int i=0; i<sz(s); i++){
			if (s[i]=='(' || s[i]==')' || s[i]=='[' || s[i]==']') res+=s[i];
		}
		solve(res);
	}
	return 0;
}