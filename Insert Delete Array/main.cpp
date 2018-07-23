#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the size of Array: "<<endl;
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter the Elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the Operation: "<<endl;
    int p;
    cin>>p;
    switch(p)
    {
    case 1:
        cout<<"Enter the Element you want to insert: ";
        int a1;
        cin>>a1;
        cout<<"Enter the Index: ";
        int pos,i;
        cin>>pos;
        int temp;
        for(i=n;i>=pos;i--)
        {
            a[i]=a[i-1];
        }
        n++;
        a[pos]=a1;
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }
        break;

    case 2:
        cout<<"Enter the Element you want to find: "<<endl;
        int a2;
        cin>>a2;

        for(int i=0;i<n;i++)
        {
            if(a[i]==a2)
            {
                cout<<"Element Found at "<<i<<endl;
                break;
            }
        }
        break;

    case 3:
        cout<<"Enter the Position you want to delete: "<<endl;
        int e1  ;
        cin>>e1;
                for(i=e1;i<n;i++)
                {
                    a[i]=a[i+1];
                }
            n=n-1;

        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }

        break;
    }
    return 0;
}
