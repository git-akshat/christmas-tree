# include <bits/stdc++.h>
using namespace std;

void delay()
{
    long timer = 120000000;
    while(timer-- > 0);
    system("clear");
}

void base(int n, char symbol)
{
    for(int i=0; i<4; i++)
    {
        for(int k=0; k<(n)/2-2; k++)
        {
            cout << " ";
        }
        for(int j=0; j<4; j++)
        {
            cout << symbol;
        }
        cout << endl;
    }
    
}

void tree(int n, char symbol)
{
    for(int i=1; i<n; i+=2)
    {
        for(int k=0; k<(n-i)/2+1; k++)
        {
            cout << " ";
        }
        for(int j=0; j<i; j++)
        {
            cout << symbol;
        }
        cout << endl;
    }
}



int main ()
{
    int n = 50; // tree size
    while(1)
    {
        tree(n, '*');
        base(n, '#');
        delay();

        tree(n, '#');
        base(n, '*');
        delay();

        tree(n, '0');
        base(n, '#');
        delay();
    }
}