#include<iostream>
using namespace std;

int main()
{
    int adj_mat[50][50]={0,0};
    int n,i,j;
    string cities[n];
    cout<<"Enter the Number of Cities=";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the City Name: ";
        cin>>cities[i];
    }

    cout<<"Your Cities are: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<cities[i]<<endl;
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            cout<<"Enter the Fuel Required to reach "<<cities[i]<<" and "<<cities[j]<<" =";
            cin>>adj_mat[i][j];
            adj_mat[j][i]=adj_mat[i][j];
        }
    }
    cout<<endl;

    for(i=0;i<n;i++)
    {
        cout<<"\t"<<cities[i]<<"\t";    
    }
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<cities[i];
        for(j=0;j<n;j++)
        {
            cout<<"\t"<<adj_mat[i][j]<<"\t";
        }
        cout<<endl;
    }

}
