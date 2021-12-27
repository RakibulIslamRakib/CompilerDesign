#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s) && !cin.eof())
    {
        bool IsValid=true;
        int B_Min_Position=100000,A_Max_Position=-1,countA=0,countB=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A') {
                A_Max_Position=max(i,A_Max_Position);
                countA++;
            }
            else if(s[i]=='B'){
                B_Min_Position=min(i,B_Min_Position);
                countB++;
            }
            else IsValid=false;
        }
        if(IsValid==true && A_Max_Position<B_Min_Position && countA==countB)
        {
            cout<<"A^"<<countA<<"B^"<<countB<<endl;
            printf("The String is recognized With grammer A^NB^N,N>0\n");
        }
        else
        {
            printf("Given String is not recognized With grammer A^NB^N,N>0\n");
        }
    }
}

