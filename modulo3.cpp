/*Stack likes the number 33 a lot.

He has two non-negative integers AA and BB.
In one operation, Stack can do either of the following:

A:=|A-B|A:=∣A−B∣ (change AA to |A-B|∣A−B∣)
B:=|A-B|B:=∣A−B∣ (change BB to |A-B|∣A−B∣)
Note that |X|∣X∣ denotes absolute value of XX. For example |-7| = 7∣−7∣=7 and |4| = 4∣4∣=4.

Find the minimum number of operations after which at least one integer out of AA and BB becomes divisible by 33.*/
#include <iostream>
using namespace std;
int count=0;
int check_mod(int a, int b,int count){
    if(a%3==0 || b%3==0){
        return count;
    }
    else {
        count++;
        return check_mod(abs(a-b),abs(b-a),count);
    }
}

int main() {
    int n;
    cin>>n;
    while(n--){
        int a,b,c=0;
        cin>>a>>b;
        int ans=check_mod(a,b,c);
        cout<<ans<<endl;
    }
	return 0;
}
