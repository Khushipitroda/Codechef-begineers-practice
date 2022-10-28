/*You are given a binary string AA of length NN.

You can perform the following type of operation on the string AA:

Choose two different indices ii and jj (1\leq i,j\leq N)(1≤i,j≤N);
Change A_iA 
i
  and A_jA 
j
  to A_i \oplus A_jA 
i
 ⊕A 
j
 . Here \oplus⊕ represents the bitwise XOR operation.
Find the minimum number of operations required to convert the given string into a palindrome.

Input Format
First line of the input contains TT, the number of test cases. Then the test cases follow.
First line of each test case contains an integer NN denoting the size of the string.
Second line of each test case contains a binary string AA of length NN containing 00s and 11s only.
Output Format
For each test case, print the minimum number of operations required to make the string a palindrome.*/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int ans = 0;
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1])
                ans++;
        }
        cout<<(ans+1)/2<<endl;
    }
	return 0;
}
