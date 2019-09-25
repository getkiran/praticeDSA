#include <iostream>

using namespace std;

void printSpiral(int r, int c, int a[5][4])
{
    int m = 0, n = r-1; //row position of 0th and r -1
    int k = 0, l = c-1; //colomn position of 0th and c -1
    int i,j; // used for looping
while (l >= k)
{
//cout<<"======================================="<<endl;
    for (i=k; i<=l;i++)
    {
        cout<<a[m][i]<<endl;
    }
    m++;
//cout<<"======================================="<<endl;
    for (i=m; i<=n; i++)
    {
//        cout<<"i= "<<i<<" l= "<<l<<endl;
        cout<<a[i][l]<<endl;
    }
    l--;
//cout<<"======================================="<<endl;
    for (i=l; i>=k; i--)
    {
//        cout<<"n= "<<n<<" i= "<<i<<endl;
        cout<<a[n][i]<<endl;
    }
    n--;

//cout<<"======================================="<<endl;
    for (i=n; i>=m; i--)
    {
//        cout<<"i= "<<i<<" l= "<<l<<endl;
        cout<<a[i][k]<<endl;
    }
    k++;


}
}

int main()
{
    cout<<"1, 2, 3, 4"<<endl;
    cout<<"5, 6, 7, 8"<<endl;
    cout<<"9 ,10, 11, 12"<<endl;
    cout<<"13, 14, 15, 16"<<endl;
    cout<<"17, 18, 19, 20"<<endl;
    int b[5][4] = {1,2,3,4,5,6,7,8,9, 10, 11,12,13,14,15,16, 17,18,19,20};
    printSpiral(5,4,b);
}
