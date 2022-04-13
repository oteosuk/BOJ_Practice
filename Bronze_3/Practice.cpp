//#define _CRT_SECURE_NO_WARNINGS
//#include <bits/stdc++.h> 왠만한거 전부
//#include <cstdio>   printf(), scanf()
//#include <algorithm> max(),min()
//#include <string>
//#include <cmath>   sqrt()
//#include <cstdlib> abs()
//const double PI = 3.1415926535;

#include <iostream>

using namespace std;

int main() {
    
    int a = -1;
    while (a != 0)
    {
        int leaf_sum = 1;
        cin >> a;
        if (a == 0)
            return 0;
        for (int i = 0; i < a; i++)
        {
            int split, cut;

            cin >> split >> cut;

            leaf_sum = leaf_sum * split - cut;
        }
        cout << leaf_sum << '\n';
    }
}