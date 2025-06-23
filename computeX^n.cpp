#include<iostream>
using namespace std;
int main() {
    int x;
    int n;
    cin >> x;
    cin >> n;
long binaryform = n;
double ans = 1;
while(binaryform > 0) {
    if(binaryform % 2 == 1) {
        ans *= x;
    }
    x*= x;
    binaryform /= 2;
}
cout << ans << endl;
}