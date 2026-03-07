// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     for (int i=n-1; i>0; i--) {
//         n*=i;
        
//     }
//     cout<<n;
// }

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,next,sum=0;
    cin>>n;
    int a=0, b=1;

    for (int i=0; i<n; i++) {
        cout<<a<<" ";
        sum+=a;
        next=a+b;
        a=b;
        b=next;
        

    }
    cout << endl;
    cout<<sum;
}