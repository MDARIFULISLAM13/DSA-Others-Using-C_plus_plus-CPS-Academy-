/**
 *
 * Author : Md.Ariful Islam
 * Date : 13-09-2024
 * time : 03:27:49
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n";
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    map<string, int> m;
    while (t--)
    {
        string s;
        cin >> s;
        if (m[s] == 0)
        {
            cout << "NO\n";
            m[s]++;
        }
        else
        {
            cout << "YES\n";
            m[s]++;
        }
    }

    return 0;
}