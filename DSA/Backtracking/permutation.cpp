#include<bits/stdc++.h>

using namespace std;

int number[20], used[20];

void permutations(int a, int b) {
    if(a == b + 1) {
        for(int i=1; i<=b; i++) {
            cout<<number[i]<<" ";
        }
        cout<<endl;
        return;
    }

    for(int i=1; i<=b; i++) {
        if(!used[i]) {
            used[i] = 1;
            number[a] = i;
            permutations(a+1, b);
            used[i] = 0;
        }
    }
}

int main()
{
    permutations(1, 3);

    return 0;
}