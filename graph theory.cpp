#include <bits/stdc++.h>
#include<string>
using namespace std;
#define forf(i, k, n)  for (int i = k; i < n; i++)
#define forb(i, n, k)  for (int i = n - 1; i >= k; i--)
#define YES            cout << "YES\n";
#define NO             cout << "NO\n";
#define yes            cout << "Yes\n";
#define no             cout << "No\n";
#define seti           set<int>
#define useti          unordered_set<int>
#define mapii          map<int, int>
#define umapii         unordered_map<int, int>
#define vpi            vector <pair<int, int>>
#define vi             vector<int>
#define pi             pair<int, int>
#define vvi            vector<vector<int>>
#define pb             push_back 
#define sz             size()
#define mp             make_pair
#define fi             first
#define se             second
#define all(var)       var.begin(), var.end()
#define present(c, x)  (c.find(x) != c.end())
#define dl             cout << "\n";
#define desc           greater<int>()
#define bpop           __builtin_popcount
#define imin           LLONG_MIN
#define imax           LLONG_MAX
int M = 1e9 + 7;
const int MN = 4e5 + 1;

//1. graph theory adjacent vectors  + dfs code

vi adj[MN];
bool vis[MN];
int dist[MN];
int gcd_dfs[MN]; 


//basic dfs

void dfs(int node  ){

    vis[node] = 1 ;
    cout<<node<<" ";
    for(auto child  : adj[node] ) {
        if(vis[child]==0){
            dfs(child) ;
        }
    }
}

// single source shortest path

void sssp(int node,int d){
    vis[node]=1;
    dist[node]=d;

    for(auto child: adj[node]){
        if(vis[child]==0){
            sssp( child,dist[node]+1);
        }
    }
}

//calculating gcd of subtree

int Dfs(int node){
    vis[node]=1;
    int g=node;
    for(auto child: adj[node]){
        if(vis[child]==0) 
        {
            g=__gcd(g,Dfs(child));   
        }
    }
    gcd_dfs[node]=g;
    return gcd_dfs[node];
    
}


//bipartite graph

bool col[MN];

bool dfs(int node,int c){
	vis[node]=1;
	col[node]=c;
	
	for(auto child: adj[node]){
		if(vis[child]==0){
			if(dfs(child,c^1)==false){
				return false;
			}
		}
		else{
			if(col[child]==col[node]) return false;
		}
	}
	return true;
}

void solve(){


    int n,m;
    cin >> n >> m;

    forf(i,1,n+1){
        adj[i].clear();
        vis[i] = 0 ;
    }

	//making adjacency list

        while(m--){
        int x,y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    dfs(1  );

}



int main(){

	solve();





    return 0;
}

