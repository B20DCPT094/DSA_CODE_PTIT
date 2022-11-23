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

struct Node{
	int val;
	Node *left,*right;
};

typedef Node* binTree;

binTree creatNode (int val){
	binTree root = new Node;
	root->val=val;
	root->left=root->right=NULL;
	return root;
}

void build (binTree &root, int val){
	if (root==NULL) root=creatNode(val);
	else{
		if (root->val>val) build(root->left,val);
		else build(root->right,val);
	}
}

int height (binTree root){
	if (root==NULL) return -1;
	return 1+max(height(root->left),height(root->right));
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
	while (t--){
		ans=0;
		int n; cin >> n;
		binTree root = NULL;
		while (n--){
			int x; cin >> x;
			build(root,x);
		}
		cout << height(root) << "\n";
	}
	return 0;
}