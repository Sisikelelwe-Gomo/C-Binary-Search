#include <iostream>

using namespace std;

int main()
{
    int a[100], n, i, beg, endd,mid, item;
    cout<< "\n------------BINARY SEARCH---------------\n"<<endl;
    cout<<"Enter No. of Elements = "<<endl;
    cin>>n;

    cout<<"Enter Elements in Sorted Order = \n "<<endl;
    for(i = 1; i <= n; i++)
    {
        cin>> a[i];
    }

    cout << "\nEnter Item you want to Search = " <<endl;
    cin>>item;

    beg = 1;
    endd = n;
    mid = (beg + endd)/2;

    while (beg <= endd && a[mid] != item)
    {
        if (a[mid] < item)
            beg = mid + 1;
        else
            endd = mid - 1;
        mid = (beg + endd)/2;
    }
    if (a[mid] == item)
    {
        cout << "\nElement found at location : " << mid;
    }
    else
        {
            cout << "Element not found";
        }
    return 0;
}
