/*Problem
The summer is at its peak in Chefland. Chef is planning to purchase a water cooler to keep his room cool. He has two options available:

Rent a cooler at the cost of XX coins per month.
Purchase a cooler for YY coins.
Given that the summer season will last for MM months in Chefland, help Chef in finding whether he should rent the cooler or not.

Chef rents the cooler only if the cost of renting the cooler is strictly less than the cost of purchasing it. Otherwise, he purchases the cooler.

Print \texttt{YES}YES if Chef should rent the cooler, otherwise print \texttt{NO}NO.*/
#include <iostream>
using namespace std;

#include <bits/stdc++.h>
int main() {
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        (a*c<b)?cout<<"Yes\n":cout<<"No\n";
    }
	return 0;
}
