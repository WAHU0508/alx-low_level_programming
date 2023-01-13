#include <iostream>
#include<unordered_map>
#include<algorithm>

using namespace std;

int main()
{
    unordered_map<string,int> anagrm;
    int c;
    cin >> c;
    string str;
    for(in i = 0; i < c; i++)
    {
        cin >> str;
        sort(str.begin(),str.end());
        anagrm[str]++;
    }
    int y = 0;
    for(auto [a,b]:anagrm)
    {
        if(b > y)  y = b;
    }
    cout << y << endl;
    return 0;
}