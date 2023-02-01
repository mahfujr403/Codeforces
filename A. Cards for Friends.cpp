
    cin>>w>>h>>n;

    while(w% 2 == 0)
    {
        g*=2;
        w /= 2;
    }

    while( h% 2 == 0)
    {
        g*=2;
        h /= 2;

    }
    if(g >= n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }


    return 0;
}
