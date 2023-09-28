#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    vector<long long int> container(n);

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        container[i] = val;
    }

    int queries;

    cin >> queries;

    for (int i = 0; i < queries; i++)
    {
        int a, b, marbles;

        cin >> a >> b >> marbles;

        for (int j = a; j <= b; j++)
        {
            container[j] += marbles;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << container[i] << " ";
    }
    cout << endl;

    return 0;
}