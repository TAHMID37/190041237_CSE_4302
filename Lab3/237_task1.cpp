/*  TAHMID RAHMAN

*/
#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define pb push_back
#define fi first
#define se second
#define in insert
#define mp make_pair
#define GCD(a,b) __gcd(a,b);
#define endl "\n"
#define FRU freopen("out.txt","w",stdout)
#define FRO freopen("in.txt","r",stdin)
#define INFLL 9223372036854775807
#define all(x) (x).begin(),(x).end()
#define debug 0
#define MAXN   100001
#define ar array
#define lb lower_bound
#define ub upper_bound
#define minpq priority_queue<ll, vector<ll>, greater<ll>>
#define maxpq priority_queue<ll>
const int mxN=2e5;
const int MOD=1e9+7;
template<typename ForwardIterator, typename T>
ForwardIterator first_less_than (ForwardIterator first, ForwardIterator last, T value)
{
    auto it = std::lower_bound (first, last, value);
    return (it == first ? last : --it);
}
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
#define debugxx(v) {for(auto x:v){cout<<x.fi<<" "<<x.se<<endl;}cout<<endl;}
#define debugx(v){for(auto y:v) {cout<<y<<" ";}cout<<endl;}


class Counter
{
private:
    int count,add;
public:

    Counter():count(0),add(0)
    {

    }

    void setIncrementStep(int step_val):add(step_val)
    {
        add=step_val;
    }
    void increment()
    {
        count+=add;
    }

    int getCount()
    {
        return count;
    }

    void resetCount()
    {
        count=0;
    }
};




int main()
{
     Counter c1;
     c1.setIncrementStep(5);
     c1.increment();

     cout<<c1.getCount()<<endl;

     c1.resetCount();

     cout<<c1.getCount();

}




