/*Mario transforms each time he eats a mushroom as follows:

If he is currently small, he turns normal.
If he is currently normal, he turns huge.
If he is currently huge, he turns small.
Given that Mario was initially normal, find his size after eating XX mushrooms.

Input Format
The first line of input will contain one integer TT, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, containing one integer XX.
Output Format
For each test case, output in a single line Mario's size after eating XX mushrooms.

Print:

\texttt{NORMAL}NORMAL, if his final size is normal.
\texttt{HUGE}HUGE, if his final size is huge.
\texttt{SMALL}SMALL, if his final size is small.
You may print each character of the answer in either uppercase or lowercase (for example, the strings \texttt{Huge}Huge, \texttt{hUgE}hUgE, \texttt{huge}huge and \texttt{HUGE}HUGE will all be treated as identical).*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        if(a%3==0){
            cout<<"NORMAL\n";
        }
        else if(a%3==1){
            cout<<"HUGE\n";
        }
        else{
            cout<<"SMALL\n";
        }
    }
	return 0;
}
