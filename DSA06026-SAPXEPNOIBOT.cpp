#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
 
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int main(){
	int n; cin >> n;
	int a[n];
	for (int &x : a) cin >> x;
	for (int i=0; i<n-1; i++){
		bool ok=false;
		for (int j=0; j<n-i-1; j++){
			if (a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				ok=true;
			}
		}
		if (ok){
			cout << "Buoc " << i+1 << ": ";
			for (int x : a) cout << x << " ";
			cout << endl;
		}else break;
	}
	return 0;
}
