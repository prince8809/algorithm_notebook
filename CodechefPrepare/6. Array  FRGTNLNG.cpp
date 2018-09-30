#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<string>language;
        vector<string>queries;
        while(n--)
        {
            string s;
            cin>>s;
            queries.push_back(s);
        }
        while(q--)
        {
            int no;
            cin>>no;
            while(no--)
            {
                string s2;
                cin>>s2;
                language.push_back(s2);

            }

        }
        for(int i=0;i<queries.size();i++)
        {
            bool present=false;
            for(int j=0;j<language.size();j++)
            {

                if(queries[i]==language[j])
                {cout<<"YES ";present=true;break;}
            }
            if(present==false)
                cout<<"NO ";

        }
        cout<<endl;
    }
    return 0;
}
