5.
#include <bits/stdc++.h>
using namespace std;
bool check(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}
int main(){
    int n; cin >> n;
    for(int i = 2; i < n; i++){
        if(check(i)) cout << i << " ";
    }
    return 0;
}
6.
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b%a, a);
}
int main(){
    int a, b;
    cin >> a >> b;
    if(gcd(a, b) == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
7.
#include <bits/stdc++.h>
using namespace std;
void incach(int m){
    for(int i = 1; i <= m; i++){
        cout << " ";
    }
}
void insao(int n){
    for(int i = 1; i <= n; i++){
        cout << "*";
    }
}
int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        incach(n-i);
        insao(2*i-1);
        cout << endl;
    }
    return 0;
}
8.
#include <bits/stdc++.h>
using namespace std;
int lamtron1(double n){
    if(n > int(n)) return int(n)+1;
    return n;
}
int lamtron2(double n){
    return ceil(n);
}
int main(){
    double n; cin >> n;
    cout << lamtron1(n) << " " << lamtron2(n) << endl;
    return 0;
}
9.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a = rand();
    cout << a%n << endl;
    return 0;
}
10.
#include <bits/stdc++.h>
using namespace std;
void in(int a[], int n){
    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k < n; k++){
                if((a[i]+a[j]+a[k]) % 25 == 0) cout << a[i] << " " << a[j] << " " << a[k] << endl;
            }
        }
    }
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        int x = rand();
        a[i] = x%50;
    }
    in(a, n);
    return 0;
}
11.
#include <bits/stdc++.h>
using namespace std;
int binpow(int a, int b){
    if(b == 0) return 1;
    int x = binpow(a, b/2);
    if(b % 2 == 0) return x*x;
    return x*x*a;
}
void thanhnhiphan(int n){
    vector <int> v;
    while(n){
        int du = n%2;
        v.push_back(du);
        n/=2;
    }
    for(int i = v.size()-1; i >= 0; i--){
        cout << v[i];
    }
    cout << endl;
}
void thanhthapphan(string s){
    int n = s.size() - 1;
    long long sum = 0;
    int i = 0;
    while(n >= 0){
        if(s[i++] == '1'){
            sum += binpow(2, n);
        }
        n--;
    }
    cout << sum << endl;
}
int main(){
    int thapphan; cin >> thapphan;
    string nhiphan; cin >> nhiphan;
    thanhnhiphan(thapphan);
    thanhthapphan(nhiphan);
    return 0;
}
12.
#include <bits/stdc++.h>
using namespace std;
int toHop(int k, int n){
    if(n == k || k == 0) return 1;
    else return toHop(k-1, n-1)+toHop(k, n-1);
}
int kiemTra(int k, int n){
    if(k > n || n > 20 || n < 1 || k < 0) return 0;
    return 1;
}
void nhapKN(int k[], int n[], int *soPhanTu){
    int n1 = 0;
    while(true){
        int a, b;
        cin >> a >> b;
        if(a == -1 && b == -1) break;
        k[n1] = a;
        n[n1] = b;
        n1++;
    }
    *soPhanTu = n1;
}

int main(){
    int k[100], n[100];
    int *soPhanTu;
    nhapKN(k, n, soPhanTu);
    for(int i = 0; i < *soPhanTu; i++){
        if(kiemTra(k[i], n[i])){
            cout << toHop(k[i], n[i]) << endl;
        }
        else cout << "So Ban Nhap Khong Hop Le" << endl;
    }
    return 0;
}






