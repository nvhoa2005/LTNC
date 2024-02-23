C. Baitap
1.
#include <iostream>
#include <cmath>
using namespace std;
int prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return n > 1;
}
int main(){
    int n; cin >> n;
    if(prime(n)) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}
2.
#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int j = n-i+1; j >= 1; j--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
3.
#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = n-i; j >=1; j--){
            cout << " ";
        }
        for(int j = 1; j <= 2*(i-1)+1; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
4.
#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    for(int i = n; i >= 1; i--){
        for(int j = n-i; j >=1; j--){
            cout << " ";
        }
        for(int j = 1; j <= 2*(i-1)+1; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
5.
#include <iostream>
using namespace std;
int main(){
    int x; cin >> x;
    cout << x << " ";
    if(x < 0) return 0;
    int n;
    while(cin >> n){
        if(n != x){
            cout << n << " ";
        }
        x = n;
        if(n < 0){
            break;
        }
    }
    return 0;
}



