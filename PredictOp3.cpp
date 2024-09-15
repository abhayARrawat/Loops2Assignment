#include <bits/stdc++.h>
using namespace std;
int main( ) {
for (int x = 1; x * x <= 10; x++)
cout << "In for loop" << endl;
}
/*The loop runs 3 times when x=1,x=2,and x=3 because their squares (1,4,and 9) are all less than or equal to 10
 When x=4 the square becomes 16 which is greater than 10,so the loop ends*/