#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool comp(pair <string, int> &p1, pair <string, int> &p2)
{
    return p1.first < p2.first;
}

bool comp1(pair <string, int> &p1, pair <string, int> &p2)
{
    return p1.second < p2.second;
}

int main()
{
    int n;
    cin >> n;

    vector <pair <string, int> > v;
    for(int i=0; i<n; i++)
    {
        string name;
        int p;
        cin >> name >> p;
        v.push_back(make_pair(name, p));
    }
    sort(v.begin(), v.end(), comp);
    sort(v.begin(), v.end(), comp1);
    vector <pair <string, int> > :: iterator it;
    for(it = v.begin(); it != v.end(); it++)
    {
        cout << it -> first << " " << it -> second << endl;
    }

    return 0;
}