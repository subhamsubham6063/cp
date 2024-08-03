//                                         ॐ
#include<bits/stdc++.h>
using namespace std;
#define ll int_fast64_t
#define subham ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define all(a) (a).begin(), (a).end()
#define nl "\n"
#define rr return;
#define what_is(x) cerr << #x << " is " << x << endl;
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << " = " << a << endl;
    err(++it, args...);
}



void solve ()
{

          

}


signed main()
{
  subham;
 ll testCase = 1;
  cin>>testCase;
  while (testCase--)
  {
    solve();
  }
  return 0;
}
