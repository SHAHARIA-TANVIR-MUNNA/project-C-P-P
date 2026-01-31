#include<iostream>
using namespace std;

int main()
{
    int first =0,second=1,store,n,i;
    cout<<"ENTER NUMBER OF TERMS OF THE SERISE(MUST BE 2<=n)=";
    cin>>n;
    cout<<"\n"<<first<<" "<<second;
    for(i=2; i<n; i++)
    {
        store=first+second;
        first=second;
        second=store;
        cout<<" "<<store;


    }
    return 0;
}
