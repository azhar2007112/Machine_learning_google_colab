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

    int t;
    ci t;
    while(t--)
    {
        int m,n;
        ci m;
        ci n;
        ll cnt=0;

        if(m==n)
        {
            cout<<"0"<<endl;

        }


        if(m<n)
            {
             swap(m,n);
            }

        while(m%8==0 && m/8>=n)
        {
            m=m/8;
            cnt++;
        }
        while(m%4==0 && m/4>=n)
        {
            m=m/4;
            cnt++;
        }
        while(m%2==0 && m/2>=n)
        {
            m=m/2;
            cnt++;
        }
        if(m=n)
        {
            cout<<cnt<<endl;

        }
        else
        {

          cout<<"-1"<<endl;
        }

    }


    return 0;
}



