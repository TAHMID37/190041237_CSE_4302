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

class BankAccount
{
  private:
    string customer_name,type_of_account;
    int account_num=0, balance=0;

  public:

    void customerDetails_(string s,int x)
    {
        customer_name=s;
        account_num=x;
    }
    void accountType(string s)
    {
        if(s=="Current"||s=="Saving")
            type_of_account=s;
        else
            exit(1);
    }

    void Balance()
    {
        cout<<balance<<endl;
    }

    void Deposit(int add)
    {
        balance+=add;
        cout<<"Final_balance: "<<balance<<endl;
    }

    void Withdraw(int remove)
    {
        if (balance>=remove)
        {
           balance-=remove;

            cout<<"Amount Withdrawn: "<<remove<<endl;
            cout<<"Current  Balance: "<<balance<<endl;
        }
        else
            cout<<"Error"<<endl;

    }
    void display()
    {
        cout<<"Customer name: "<<customer_name<<endl;
        cout<<"Account_number: "<<account_num<<endl;
        cout<<"Type of Account: "<<type_of_account<<endl;
        cout<<"Balance: "<<balance <<endl;
    }
};


int main()
{
    BankAccount b1;
    b1.customerDetails_("Tahmid",237);
    b1.accountType("Current");
    b1.Deposit(1000);
    b1.Balance();
    b1.Withdraw(500);
    b1.Balance();
    b1.display();

}




