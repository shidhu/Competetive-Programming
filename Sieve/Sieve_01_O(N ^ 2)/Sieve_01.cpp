
/*

	Complexity: O(N ^ 2)

*/

/**
  *  @Author: Pranta Sarker
  *
  **/


#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(0)
#define bfast cin.tie(0)
#define outs(x) cout << x << " "
#define outn(x) cout << x << "\n"
#define sf scanf
#define pf printf
#define pfn(x , k) printf(k , x)
#define nl puts("")
#define psb push_back
#define mset(c,v) memset(c , v , sizeof c)
#define loop0(n) for(int i=0; i<n; i++)
#define loop1(n) for(int i=1; i<=n; i++)
#define mpair(x , y) make_pair(x , y)
#define all(x) x.begin(), x.end()
#define pi acos(-1.0)
#define psb push_back
#define clr clear()

typedef unsigned long long ull;
typedef long long LL;
typedef vector<int>vii;
typedef vector<LL>vll;
typedef vector<string>vs;
typedef map<int, int>mpii;
typedef map<string, int>mpsi;
typedef map<char, int>mpci;
typedef map<LL, LL>mpll;

const int mod = 1000007;
const int high = 1001;

bool mark[high];
vii prime;

void sieve()
{
	int i , j;

	// erasing all even numbers
	for(i=4; i<high; i+=2)
	{
		mark[i] = true;
	}

	prime.push_back(2);

	for(i=3; i<high; i+=2)
	{
		if(!mark[i])
		{
			for(j = i*i; j<high; j += i)
			{
				mark[j] = true;
			}

			/*

				j = 3*3 = 9 , 12, 15, 18, 21, 24.....


			*/
		}
	}

	for(i=3; i<high; i+=2)
	{
		if(!mark[i])
		{
			prime.push_back(i);
		}
	}

	cout << prime.size() << "\n";

	for(i=0; i<prime.size(); i++)
	{
		cout << prime[i] << "; ";
	}
}

int main()
{
	fast;
	sieve();
}
