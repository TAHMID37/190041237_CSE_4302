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
{auto it = std::lower_bound (first, last, value);
return (it == first ? last : --it);}
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
#define debugxx(v) {for(auto x:v){cout<<x.fi<<" "<<x.se<<endl;}cout<<endl;}
#define debugx(v){for(auto y:v) {cout<<y<<" ";}cout<<endl;}

class flight
{
    private:

    int flight_no;
    string destination;
    float distance;
    float fuel;
    float max_fuel_capacity;

    public:




    void calfuel()
    {
        if(distance<=1000)
            {
                fuel=500;
            }
        else if(distance>1000&&distance<=2000)
            {
                fuel=1100;
            }
        else if(distance>2000)
            {
                fuel=2200;
            }


         if(max_fuel_capacity>=fuel)
                cout<<"Fuel capacity is fit for this flight"<<endl;
         else
             cout<<"fuel capacity is not fit for the flight"<<endl;

    }

    void showinfo()
    {
        cout<<"destination: "<<destination<<endl;
        cout<<"distance: "<<distance<<endl;
        cout<<"max fuel capacity : "<<max_fuel_capacity<<endl;
    }

    void feedinfo()
    {
        cout<<"Enter Flight no:\n";
        cin>>flight_no;
        cout<<"Enter destination:\n";
        cin>>destination;
        cout<<"Enter distance :\n";
        cin>>distance;
        cout<<"Enter max_fuel_capacity:\n";
        cin>>max_fuel_capacity;

        calfuel();

    }










};


int main()
{

}




