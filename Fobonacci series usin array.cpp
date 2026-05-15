#include<iostream>
using namespace std;
int main(){
int i,n;
cout<<"ENTER NUMBER ";
cin>>n;
int arr[n];
arr[0]=0;
arr[1]=1;
for(i=2;i<n;i++){
    arr[i]=arr[i-1]+arr[i-2];

}
cout<<"FEBONACCI SERIES :";

//if n=value than
for(i=0;arr[i]<n;i++){
    cout<<" "<<arr[i];
}

/*
for(i=0;i<n;i++){
    cout<<" "<<arr[i];
}
*/




return 0;
}
