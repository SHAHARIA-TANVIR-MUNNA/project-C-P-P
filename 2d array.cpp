#include<iostream>
using namespace std;
int main(){
int col,row,i,j;
cout<<"ENTER VELUE OF COLLUMN : ";
cin>>col;
cout<<"ENTER VALUE OF ROW : ";
cin>>row;
int arr[col][row];
cout<<"\nENTER VALUE OF 2D ARRAY \n";
for(i=0;i<col;i++){
        for(j=0;j<row;j++){
            cout<<"arr["<<i<<"]"<<"["<<j<<"]=";
             cin>>arr[i][j];
        }


}
cout<<"\nPRINT 2D ARRAY \n";

for(i=0;i<col;i++){
        for(j=0;j<row;j++){
             cout<<"arr["<<i<<"]"<<"["<<j<<"]="<<arr[i][j]<<"\n";
        }


}

return 0;
}
