#include <iostream>

using namespace std;

int main()
{
    int n,i,j,k;

    cin>>n;

    for( i = 1 ;i<=n;i++ )
    {
        for( j=2*(n-i); j>0; j--)
        {
            cout<<" ";
        }
        for( k = 1 ; k<=2*i-1 ;k++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}
