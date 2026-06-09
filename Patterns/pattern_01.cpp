#include <iostream>
using namespace std;
/*
Striver A2Z Sheet
Pattern 01
*****
*****
*****
*****
*****
*/

// solution
class Solution {
public:
    void pattern1(int n) {
for(int i= 1;i<=n;i++){
     for(int j =1; j<=n;j++){
        cout<<"*";
     }
     cout<<endl;
}
    }
};

int main(){
    int n;
    cin>>n;

    Solution obj;
    obj.pattern1(n);

    return 0;
}
