/***************************
   ▄████████    ▀█████████
  ███    ███     ███    ███
  ███    ███     ███    ███
 ▄███▄▄▄▄███▄▄   ███    ███
▀▀███▀▀▀▀███▀  ▀███████████
  ███    ███     ███    ███
  ███    ███     ███    ███
  ******************************/
#include <bits/stdc++.h>
#include<string>
#include<map>
#include<iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <map>
#include <stack>
#include <set>
#include <iomanip>
#include <queue>
#include <functional>
#include <list>
#include <sstream>
#include <ctime>
#include <climits>
#include <bitset>
#include <cassert>
#include <complex>

typedef long long ll;
typedef long long int lli;


#define ci cin>>
#define co cout<<
#define fn cout<<n<<endl
#define fc cout<<cnt<<endl
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
//#define sort(s) sort(s.begin(),s.end())
//#define sort(v)  sort(v.begin(), v.end());
#define f for(int i=0;i<n;i++)
#define g for(int j=0;j<2*n;j+=2)
#define au for(auto u:m)
#define vn vector<string> v(n)
using namespace std;


int main()
{
        int n;
        ci n;
        vector<int> a(n), b(n);
        f{
            int x;
            cin >> x;
            x--;
            a[x] = i;
        }
        f{
            int x;
            cin >> x;
            x--;
            b[x] = i;
        }

        vector<int> s(n);
        f{
            int d = a[i] - b[i];
            if(d < 0) d += n;
            s[d]++;
        }
        int a= 0;
        for(int i = 0; i < n; i++) {
            ans = max(a, s[i]);
        }
        cout << a << endl;

    return 0;
}
