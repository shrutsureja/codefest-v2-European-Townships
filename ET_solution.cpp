#include <vector>
#include <bits/stdc++.h>
#include <string>
#include <cmath>

typedef long double ld;

#define fr(n) for (int i = 0; i < n; i++)
#define freq1(n) for (int i = 1; i <= n; i++)
#define freq(n) for (int i = 0; i <= n; i++)
#define fra(a, n) for (int i = a; i < n; i++)
#define ll long long int
#define endl "\n"
#define pb push_back
#define read(x) \
    int x;      \
    cin >> x
#define readl(x) \
    ll x;        \
    cin >> x
#define readvi(v, n) \
    vector<int> v;   \
    fr(n)            \
    {                \
        read(x);     \
        v.pb(x);     \
    }
#define readvl(v, n) \
    vector<ll> v;    \
    fr(n)            \
    {                \
        readl(x);    \
        v.pb(x);     \
    }
#define yes cout << "YES\n"
#define no cout << "NO\n"
const ld PI = 3.14159265358979323846L;
const ld E = 2.71828182845904523536L;
const ll mod = 1000000007;

using namespace std;

int convert(string s){
    int temp = 0;
    fr(s.length()){
        temp += temp * 10 + (s[i] - '0');
    }
    return temp;
}

void solve()
{
    readl(n);
    double np=0.0;
    double acp=0.0;
    double time=0.0;
    fr(n){
        string s;
        cin >> s;
        string ss="";
        ll in[4]={0};
        int ptr = 0;
        fr(s.length())
        {
            if(s[i]==','){
                in[ptr++] = convert(ss);
                // cout << convert(ss) << endl;
                ss = "";
            }
            else
                ss += s[i];
        }
        in[3] = convert(ss);
        // cout << in[3] << endl;
        double tw = (in[1] * 3 + in[2] * 4 + in[3] * 6) * 1.0;
        np += round((tw * 1.5) * 100.0) / 100.0;
        acp += round((tw / 2.0) * 100.0) / 100.0;
        time += round((((tw / 3.0) * 2.5) + (((tw * 2.0) / 3.0) * 3.25)) * 100.0) / 100.0;
    }
    cout << fixed << time << ", ";
    cout << fixed << acp << ", ";
    cout << fixed << np;
}

int main()
{
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("ET_large_input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("ET_large_output.txt", "w", stdout);

#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(2);
    int t = 1;
    cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    fr(t)
    {
        cout << "Case #" << i + 1 << ": ";
        solve();
        cout << endl;
    }
    return 0;
}