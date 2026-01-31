
#include<iostream>
using namespace std;
int main()
{
//ARRAY INPUT AND OUTPUT AND SUM
    int i,n,sum=0;
    cout<<"ENTER ARRAY SIZE:";
    cin>>n;
    int num[n];
    cout<<"\nENTER ARRAY VALUES \n\n";
    for(i=0; i<n; i++)
    {
        cout<<"ENTER VALUE OF num["<<i<<"]=";
        cin>>num[i];
        // cout<<"\n";


    }
    cout<<"\nDISPLAYING THE ARRAY VALUES \n\n";
    for(i=0; i<n; i++)
    {
        cout<<"ENTER VALUE OF num["<<i<<"]="<<num[i]<<"\n";
        sum=sum+num[i];


    }
    cout<<"\nSUM OF ARRAY="<<sum;
//COPLETE ARRAY INPUT AND OUTPUT AND SUM
    cout<<"\n\n";

//START ARRAY ODD AND EVEN AND MAX AND MINIMUM
    cout<<"\nDISPLAYING ARRAY ODD OR EVEN NUMBER \n\n";
    for(i=0; i<n; i++)
    {
        if(num[i]%2==0)
        {
            cout<<num[i]<<" IS EVEN NUMBERE \n";
        }
        else
        {
            cout<<num[i]<<" IS ODD NUMBERE\n";
        }
    }
    cout<<"\nDISPLAYING THE ARRAY MAX OR NINIMUM NUNBER \n\n";
//nax
    for(i=0; i<n; i++)
    {
        if(num[0]<num[i])
        {
            num[0]=num[i];
        }
    }
    cout<<"THE MAX NUMBER IN ARRAY IS="<<num[0];
//min
    for(i=0; i<n; i++)
    {
        if(num[0]>num[i])
        {
            num[0]=num[i];
        }
    }
    cout<<"\nTHE MIN NUMBER IN ARRAY IS="<<num[0];
    return 0;



}
