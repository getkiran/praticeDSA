#include <iostream>

using namespace std;

int main()
{
    int a[5][5]= {{ 11, 21, 31, 41, 51 },{ 12, 22, 32, 42, 52 },{ 13, 23, 33, 43, 53 } ,{ 14, 24, 34, 44, 54 },{ 15, 25, 35, 45, 55 }};
    int i, j, x =5, y=5, key =23;

    for (i = 0; i <x;i++)
    {
        for(j =0; j <y; j++)
        {
            if (a[i][j] == key)
            {
                cout<<"MATCHING FOUND "<<endl;
            }
        }
    }
}

