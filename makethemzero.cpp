/*You are given an array AA of length NN.

You can perform the following operation on the array any number of times:

Choose any subsequence SS of the array AA and a positive integer XX such that XX is a power of 22 and subtract XX from all the elements of the subsequence SS.
Find the minimum number of operations required to make all the elements of the array equal to 00.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
First line of each test case contains an integer NN denoting the length of the array AA.
Second line contains NN space-separated integers A_1, A_2, \ldots, A_NA 
1
 ,A 
2
 ,…,A 
N

  - denoting the elements of array AA.
Output Format
For each test case, output in a single line, the minimum number of moves required to make all the elements of the array AA equal to 00.*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
    	int t, array[32]={};
    	cin>>t;
    	for(int i=0;i<t;i++){
        	int a,j=0;
            cin>>a;
            while(a){
            if(array[j]==0)
                array[j]=a%2;
            a/=2;
            j++;
        }
    }
    int ans=0;
    for(int i=0;i<32;i++){
        ans+=array[i];
    }
    cout<<ans<<endl;
    }

}
