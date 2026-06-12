#include <iostream>
using namespace std;
/*
Striver A2Z Sheet
Pattern 01
1
22
333
4444
55555
*/

// solution
class Solution {
public:
    void pattern4(int n) {
for(int i= 1;i<=n;i++){
     for(int j =1; j<=i;j++){
        cout<<i;
     }
     cout<<endl;
}
    }
};

int main(){
    int n;
    cin>>n;

    Solution obj;
    obj.pattern4(n);

    return 0;
}
