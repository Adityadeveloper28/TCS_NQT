#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the triangle pattern: ";
    cin >> n;
// for learning purpose
    // for (int i = 1; i <= n; ++i) {
    //     for (int j = 1; j <= i; ++j) {

    //         cout << "* "<<"j: "<<j<<" i: "<<i;
    //     }
    //     cout << endl;
    // }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
