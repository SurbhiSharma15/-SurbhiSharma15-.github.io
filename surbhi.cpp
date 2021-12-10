#include<bits/stdc++.h>
using namespace std;
#define M   1000000007
#define int long long
#define vi     vector<int>
int mod(int n) {return (n % M + M) % M; }
int modM(int n, int m) { return ((n % M * m % M) + M) % M; }
int modA(int n, int m) { return ((n % M + m % M) + M) % M; }
int modS(int n, int m) { return ((n % M - m % M) + M) % M; }
int minv(int a){ return power(a , M-2 ); }


//==================================mathematical utility functions=============================================

//1    factorisation using spf(smallest prime factor)

//making spf array

vi spf;

void spff(int n){
	spf.assign(n+1,0);
	for(int i=1;i<=n;i++){
		spf[i]=i;
	}
	for(int i=2;i*i<=n;i++){
		if(spf[i]==i){
			for(int j=i;j<=n;j+=i){
				if(spf[j]==j){
					spf[j]=i;
				}
			}
		}
	}
}

void factorise(int n){
	while(1){
		cout<<spf[n]<<"*";
		n/=spf[n];
		if(n==1) break;
	}
	
}

//2   mod power

int power(int a,int n){
	int res=1;
	while(n){
		if(n&1){
			ans=(ans*n)%M;
		}
		n>>=2;
		n=(n*n)%M;
	}
	return ans;
}

//3   prime numbers generation

vector<int> primevec;

void seive(int n){
	vector<bool> v;
	v.assign(n+1,0);
	for(int i=2;i*i<=n;i++){
		if(v[i]==false){
			for(int j=i*i;j<=n;j+=i){
				v[j]=true;
			}
		}
	}
	
	for(int i=2;i<=n;i++){
		if(v[i]==0){
			primevec.pb(i);
		}
	}
}//use primevec.clear() after each n


//4  prime number

void isprime(int n){
	if(n==0 || n==1){
		return false;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}


//5  all the divisors

vi divisors;
for(int i=1;i*i<=n;i++){
	if(n%i==0){
		divisors.pb(i);
		if(i!=n/i) divisors.pb(n/i);
	}
}

//6 simple factorisation

vi v=seive(1000000);
int prime factorise (int n){
	int count=0;
	for(auto x: v){
		if(x>n) break;
		while(n%x==0){
			count++;
			n/=x;
		}	
	}
	if(n>1) count++;
	return count;
}


//===================================common utility functions=======================================

//factorial generation for ncr and npr

vi fact;

void fc(int n){
	fact.pb(1);
	for(int i=1;i<=n;i++){
		fact.pb(modM(fact[i-1],i));
	}
}

//1   npr

int npr(int n,int r){
	return modM (fact[n],minv(fact[n-r]));
}

//2   ncr

int ncr(int n,int r){
	return modM(fact[n],minv(modM(fact[n-r],fact[r])));
}

//3  perfect square

bool issqr(int n){
	int x=sqrt(n);
	if(x*x==n) return true;
	else return false;
}

//4  palindrome

bool ispalin(string s){
	int l=s.length();
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[n-i-1]) return false;
	}
	return true;
}

//5 digit sum

int digisum(int n){
	int ans=0;
	while(n){
		ans+=(n%10);
		n/=10;
	}
	return ans;
}

//searchinggg

int binarySearch(int arr[],int n,int key)
{
    int s=0, e=n-1;
    int mid;

    while(s<=e)
    {
        mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;

        }
        else if (arr[mid]>key)
        {
            e = mid-1;
        }
        else if(arr[mid]<key)
        {
            s = mid+1;
        }
    }
    return -1;
   
}

int lowerbound(int arr[],int n,int key){
    int lo=0;
    int up=n-1;
    int mid;
    while(lo<up){
        mid=(lo+up)/2;
        if(arr[mid]<key) lo=mid+1;
        else up=mid;
    }

    if(arr[lo]>=key) return lo;
    if(arr[up]>=key) return up;

    return -1;


}

int upperbound(int arr[],int n,int key){
    int lo=0;
    int up=n-1;
    int mid;
    while(lo<up){
        mid=(lo+up)/2;
        if(arr[mid]<=key) lo=mid+1;
        else up=mid;
    }

    if(arr[lo]>key) return lo;
    if(arr[up]>key) return up;

    return -1;


}

//or

int upperbound(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int mid;
    int ans=n;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]<=key) low=mid+1;
        else high=mid-1,ans=mid;
    }

   return ans;

}

//bool comparative operator

bool comp (string &a, string &b) {
        return a.size() < b.size();
    }

int32_t main()
{



	




    return 0;
}

