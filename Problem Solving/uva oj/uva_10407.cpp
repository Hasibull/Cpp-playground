#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool comp(const int &a, const int &b)
{
    return abs(a) < abs(b);
}

inline int gcd(int a, int b)
{
    return b == 0? a : gcd(b, a % b);
}

int main()
{
    vector<int> sequence;
    int s;
    while (cin >> s, s != 0)
    {
        sequence.clear();
        sequence.push_back(s);
        while (cin >> s, s != 0)
            sequence.push_back(s);

        sort(sequence.begin(), sequence.end(), comp);

        for (size_t i = 0; i < sequence.size() - 1; ++i)
            sequence[i] = abs(sequence[i + 1] - sequence[i]);

        sequence.erase(sequence.end() - 1);

        int g = sequence[0];
        for (size_t i = 1; i < sequence.size(); ++i)
            g = gcd(g, sequence[i]);

        cout << g << endl;
    }
    return 0;
}
