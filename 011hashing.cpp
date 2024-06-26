/*

Given array a of N integers. Given Q queries and each query given a number X,
print count of that number in array

Constraints:
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5

*/

/*

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;

        int count = 0;
        for(int i=0; i<n; i++){
            if(a[i]==x){
                count++;
            }
        }
        cout << count << endl;

    }

    return 0;
}

Time Complexity: O(n) + O(t*n) = O(n^2) = O(10^10)
Code will not run in 1 sec

Solution: To pre-compute the value of count (Hashing is used here)
*/

#include<bits/stdc++.h>
using namespace std;
const int K = 1e7;
long long int hsh[K] = {0};  //HASH ARRAY -> will be used to store the count

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
        hsh[a[i]]++;
    }

    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        cout << hsh[x] << endl;
    }
}

/*
Time Complexity: O(N) + O(T) = O(N)
*/

/*

In hash array,
0th index will store how many times 0 has occured
1st index will store how many times 1 has occured
.
.
.
xth index will store how many times x has occured

*/

/*

For negative numbers,

    1st Way: By using STL
                -   Maps
                -   Unordered Maps

    2nd Way: Without using STL

        Exa:    A = [-4, 2, 1, -3, -4, -6]

                add +6 to each element

                A'= [2, 8, 7, 3, 2, 0]

                so hash array will have index from 0 to 8,
                hsh = [1, 0, 2, 1, 0, 0, 0, 1, 1]

                Count of -4 in A => Count of 2 in A'

*/