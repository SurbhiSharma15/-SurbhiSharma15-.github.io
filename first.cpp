//:):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):)
//:):):):):)::):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):
//:):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):)
//:):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):)
//:):) -----------------------------------------------------------:):):):):):)
//:):)|   --------               -------     -------    --------   |:):):):):)
//:):)|   |         |       |   |       |   |       |   |          |:):):):):)
//:):)|   |         |       |   |       |   |       |   |          |:):):):):)
//:):)|   --------  |       |   |-------    |-------|   --------   |:):):):):)
//:):)|          |  |       |   | \         |       |           |  |:):):):):)
//:):)|          |  |       |   |   \       |       |           |  |:):):):):) 
//:):)|   --------   -------    |     \      -------    --------   |:):):):):)
//:):) ----------------------------------------------------------- :):):):):):
//:):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):)
//:):):):):)::):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):
//:):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):)
//:):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):)


#include <bits/stdc++.h>
#include<string>
using namespace std;

#define surbhi   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
#define int long long

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
#define imin           INT_MIN
#define imax           INT_MAX

int M = 1e9 + 7;
const int MN = 4e5 + 1;

int mod(int n) { return (n % M + M) % M; }
int modM(int n, int m) { return ((n % M * m % M) + M) % M; }
int modA(int n, int m) { return ((n % M + m % M) + M) % M; }
int modS(int n, int m) { return ((n % M - m % M) + M) % M; }
int lcm (int a , int b ) {return (a*b)/__gcd(a,b) ;}

int gcd(int a,int b){
if(b==0) return a;
 return gcd(b,a%b);
}

bool isPrime(int n){
    if(n==1)
        return false;
    if(n==2 || n==3)
        return true;
    if(n%2==0 || n%3==0)
        return false;
    for(int i=5; i*i<=n; i=i+6){
        if(n % i == 0 || n % (i + 2) == 0)
            return false; 
    }
    return true;
}
 
int power(int x,int n){
 int res=1;
while(n>0){
 
if((n & 1) !=0) res=(res * x % M)% M;
 
n=n>>1;
x=(x % M * x % M) % M;
 
}
return res;
}

int powerr(int a, int n , int d ) {
   int res = 1;
    while(n)
    {
        if(n % 2 == 1)
        {
            res = ((res % d) * (a % d)) % d;
            n--;
        }
        else
        {
            a = ((a % d) * (a % d)) % d;
            n /= 2;
        }
    }
    return res;
}



//=======================================================================================

  bool isvowel(char c){
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' ) return true;
    else return false;
  }

  int hehe(int x,int arr[],int n){
    int ma=0;
    for(int i=x;i<n;i++){
        ma=max(ma,arr[i]);
    }
    return ma;

  }



void solve(){
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    string ss;
    cin >> ss;
    int ans=0;
    forf(i,0,n){
        if(s[i]+ss[i]=='1'+'0') ans+=2;
        else if((s[i]=='1' && s[i+1]=='0') && (ss[i]=='1' && ss[i+1]=='0')){
            ans+=2;
            i++;
        }
        else if((s[i]=='0' && s[i+1]=='1') && (ss[i]=='0' && ss[i+1]=='1')){
            ans+=2;
            i++;
        }
        else if(s[i]=='0' && ss[i]=='0') ans++;
    }
    cout<<ans<<endl;
    
}

 

int32_t main()
{

    surbhi
   
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
    
    solve();
    
    }

    return 0;
}
