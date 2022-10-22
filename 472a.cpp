#include <bits/stdc++.h>

using namespace std;

bool is_composite(int num)
{
    if (num < 4){
        return false;
    }
    if (num == 2 || num == 3){
        return false;
    }
    if (num % 2 == 0 || num % 3 == 0){
        return true;
    }
    for (int i = 5; i <= sqrt(num); i+=6){
        if (num % i == 0 || num % (i + 2) == 0){
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    for (int j = 4; j <= n / 2; j++){
        if (is_composite(j) && is_composite(n-j)){
            cout << j << " " << n-j;
            return 0;
        }
    }

    return 0;
}
