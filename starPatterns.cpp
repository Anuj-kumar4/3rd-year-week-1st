
#include <iostream>
using namespace std;

void pattern1(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<"* ";
        cout<<endl;
    }
}

void pattern2(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}

void pattern3(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
}

void pattern4(int n)
{
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
}

void pattern5(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
            cout<<" ";

        for(int j=1;j<=2*i-1;j++)
            cout<<"*";

        cout<<endl;
    }
}

void pattern6(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
            cout<<" ";

        for(int j=1;j<=2*i-1;j++)
            cout<<"*";

        cout<<endl;
    }

    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
            cout<<" ";

        for(int j=1;j<=2*i-1;j++)
            cout<<"*";

        cout<<endl;
    }
}

void pattern7(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }

    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
}

void pattern8(int n)
{
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
            cout<<" ";

        for(int j=1;j<=2*i-1;j++)
            cout<<"*";

        cout<<endl;
    }
}


int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"\nPattern 1 - Square\n";
    pattern1(n);

    cout<<"\nPattern 2 - Hollow Square\n";
    pattern2(n);

    cout<<"\nPattern 3 - Triangle\n";
    pattern3(n);

    cout<<"\nPattern 4 - Inverted Triangle\n";
    pattern4(n);

    cout<<"\nPattern 5 - Pyramid\n";
    pattern5(n);

    cout<<"\nPattern 6 - Diamond\n";
    pattern6(n);

    cout<<"\nPattern 7 - Half Diamond\n";
    pattern7(n);

    cout<<"\nPattern 8 - Half Diamond Inverted\n";
    pattern8(n);

    return 0;

}