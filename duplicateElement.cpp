#include <iostream>

using namespace std;

int main()
{
    int a[15] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5};
    int i, j, x =15;

    for (i = 0; i <x;i++)
    {
        for(j =i; j <x; j++)
        {
//            cout<<"a[i] = "<<a[i]<<endl;
//            cout<<"a[j] = "<<a[j]<<endl;
            if (a[i] == a[j] && i != j)
            {
                cout<<"MATCHING FOUND FOR = "<<a[i]<<endl;
            }
        }
    }
}

