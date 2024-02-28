26.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int max = INT_MIN;
    int min = INT_MAX;
    double sum = 0;
    int res = n;
    while(res--){
        int x; cin >> x;
        if(x > max) max = x;
        if(x < min) min = x;
        sum += x;
    }
    cout << "mean : " << sum/n << endl;
    cout << "max : " << max << endl;
    cout << "min : " << min << endl;
    return 0;
}
27.
#include <bits/stdc++.h>
using namespace std;
int main(){
    while(1){
        int n; cin  >> n;
        if(n == -1){
            cout << "Bye" << endl;
            break;
        }
        if(n >= 0 && (n % 5) == 0){
            cout << n / 5 << " ";
        }
        else cout << -1 << " ";
    }
    return 0;
}
28.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int cnt = 0;
    for(int i = 12; i <= 12; i++){
        if(i == 12 && cnt == 0){
            cout << i << " midnight" << endl;
            i = 1;
            cnt++;
        }
        if(cnt == 1 && i < 12){
            cout << i << " am" << endl;
        }
        if(cnt == 1 && i == 12){
            cout << i << " noon" << endl;
            i = 1;
            cnt++;
        }
        if(cnt == 2 && i < 12){
            cout << i << " pm" << endl;
        }
    }
    return 0;
}
29.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
30.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}




