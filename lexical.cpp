#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    vector<string>result;
    while(getline(cin,input) && !cin.eof())
    {
        if(input=="END" || input=="/0" || input=="end")break;
        stringstream str(input);
        string word;
        while(str >> input)
        {
            result.push_back(input);
        }
    }
    for(auto word:result) cout << word << " ";
    cout << endl;
}
