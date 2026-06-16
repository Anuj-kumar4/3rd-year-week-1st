#include <iostream>
using namespace std;

void pattern1(int n);
void pattern2(int n);
void pattern3(int n);
void pattern4(int n);
void pattern5(int n);
void pattern6(int n);

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"\nPattern 1 - Number Square\n";
    pattern1(n);

    cout<<"\nPattern 2 - Incrementing Pattern\n";
    pattern2(n);

    cout<<"\nPattern 3 - Right Triangle\n";
    pattern3(n);

    cout<<"\nPattern 4 - Inverted Diamond\n";
    pattern4(n);

    cout<<"\nPattern 5 - Sandwich Pattern\n";
    pattern5(n);

    cout<<"\nPattern 6 - Incrementing Diamond\n";
    pattern6(n);

    return 0;
}

// Pattern 1
void pattern1(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<"1 ";
        cout<<endl;
    }
}

// Pattern 2
void pattern2(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<j<<" ";
        cout<<endl;
    }
}

// Pattern 3
void pattern3(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<j<<" ";
        cout<<endl;
    }
}

// Pattern 4
void pattern4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<i+2<<" ";
        }
        cout<<endl;
    }
}

// Pattern 5
void pattern5(int n)
{
    int mid = n/2 + 1;

    // Upper Part
    for(int i=1;i<=mid;i++)
    {
        for(int j=1;j<=2*(i-1);j++)
            cout<<" ";

        for(int j=1;j<=n-2*(i-1);j++)
            cout<<i+2<<" ";

        cout<<endl;
    }

    // Lower Part
    for(int i=mid-1;i>=1;i--)
    {
        for(int j=1;j<=2*(i-1);j++)
            cout<<" ";

        for(int j=1;j<=n-2*(i-1);j++)
            cout<<i+2<<" ";

        cout<<endl;
    }
}

// Pattern 6
void pattern6(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<i+2<<" ";

        cout<<endl;
    }

    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            cout<<i+2<<" ";

        cout<<endl;
    }
}