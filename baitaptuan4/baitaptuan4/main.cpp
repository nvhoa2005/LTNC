C.Bài tập
1.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n], b[n];
    memset(b, 0, sizeof(b));
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        b[a[i]]++;
        if(b[a[i]] == 2){
            cout << "yes" << endl;
            return 0;
        }
    }
    cout << "no" << endl;
    return 0;
}
2.
#include <bits/stdc++.h>
using namespace std;
bool check(string s){
    int n = s.size();
    int l = 0, r = n-1;
    while(l < r){
        if(s[l] != s[r]) return false;
        l++, r--;
    }
    return true;
}
int main(){
    string s; cin >> s;
    if(check(s)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
3.
#include <bits/stdc++.h>
using namespace std;
bool check(int a){
    string s = "";
    while(a){
        int du = a%10;
        s += to_string(du);
        a /= 10;
    }
    int n = s.size();
    int l = 0, r = n - 1;
    while(l < r){
        if(s[l] != s[r]) return false;
        l++; r--;
    }
    return true;
}
int main(){
    int t; cin >> t;
    while(t--){
        int cnt = 0;
        int a, b;
        cin >> a >> b;
        for(int i = a; i <= b; i++){
            if(check(i)) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
4.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    char result[n][m];
    int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] != '*'){
                int cnt = 0;
                for(int k = 0; k < 8; k++){
                    int xmoi = i+dx[k];
                    int ymoi = j+dy[k];
                    if(xmoi >= 0 && xmoi <= n-1 && ymoi >= 0 && ymoi <= m-1){
                        if(a[xmoi][ymoi] == '*'){
                            cnt++;
                        }
                    }
                }
                result[i][j] = cnt+'0';
            }
            else{
                result[i][j] = '*';
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
5.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int cnt = 1;
    int c1 = 0, c2 = m-1, h1 = 0, h2 = n-1;
    while(c1 <= c2 && h1 <= h2){
        for(int i = c1; i <= c2; i++){
            a[h1][i] = cnt;
            cnt++;
        }
        h1++;
        for(int i = h1; i <= h2; i++){
            a[i][c2] =cnt;
            cnt++;
        }
        c2--;
        if(h1 <= h2){
            for(int i = c2; i >= c1; i--){
                a[h2][i] = cnt;
                cnt++;
            }
            h2--;
        }
        if(c1 <= c2){
            for(int i = h2; i >= h1; i--){
                a[i][c1] = cnt;
                cnt++;
            }
            c1++;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
6.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n+1][n+1];
    int check[n+1][n+1];
    memset(check, 0, sizeof(check));
    int cnt = 1, i = 1, j = n/2+1;
    a[i][j] = cnt; cnt++; check[i][j]++;
    while(cnt <= n*n){
        int imoi = (i-1)%n, jmoi = (j+1)%n;
        if(imoi == 0) imoi = n;
        if(jmoi == 0) jmoi = n;
        if(!check[imoi][jmoi]){
            a[imoi][jmoi] = cnt;
            check[imoi][jmoi]++;
            cnt++;
            i = imoi; j = jmoi;
        }
        else{
            imoi = (i+1)%n;
            if(imoi == 0) imoi = n;
            a[imoi][j] = cnt;
            check[imoi][j]++;
            cnt++;
            i = imoi;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
8.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n-1; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(a[j] < a[min]) min = j;
        }
        swap(a[i], a[min]);
    }
    int sum = 0;
    for(int i = 0; i < n-1; i++){
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}


Bài 1:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    double a[n], sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    double tb = sum/n;
    double phuongsai = 0;
    for(int i = 0; i < n; i++){
        phuongsai += (a[i]-tb)*(a[i]-tb);
    }
    phuongsai /=n;
    cout << tb << " " << phuongsai << endl;
    return 0;
}
Bài 2:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int sumchan = 0, cntle = 0;
    int max = INT_MIN, min = INT_MAX;
    for(int i = 0; i < n; i++){
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
        if(a[i] % 2 == 0){
            sumchan +=a[i];
        }
        else{
            cntle++;
        }
    }
    cout << max << " " << min << " " << sumchan << " " << cntle << endl;
    return 0;
}
Bài 3:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int result[n];
    memset(result, 0, sizeof(result));
    for(int i = 0; i < n; i++){
        result[a[i]]++;
    }
    for(int i = 0; i < 9; i++){
        cout << "So phan tu "  << i << " la " << result[a[i]] << endl;
    }
    return 0;
}
Bài 4:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int cnt = 1;
    int res[n];
    while(cnt <= n){
        int result[cnt];
        result[0] = 1, result[cnt-1] = 1;
        for(int i = 1; i < cnt-1; i++){
            result[i] = res[i-1]+res[i];
        }
        for(int i = 0; i < cnt; i++){
            cout << result[i] << " ";
        }
        cout << endl;
        for(int i = 0; i < cnt; i++){
            res[i] = result[i];
        }
        cnt++;
    }

    return 0;
}
Bài 5:
#include <bits/stdc++.h>
using namespace std;
struct sinhvien{
    string ma;
    double toan, ly, hoa, diemtb;

    void nhap(){
        cout << "Nhap ma sv : "; cin >> ma;
        cout << "Nhap diem toan : "; cin >> toan;
        cout << "Nhap diem ly : "; cin >> ly;
        cout << "Nhap diem hoa : "; cin >> hoa;
    }
    void in(){
        cout << "Sinh Vien " << ma << endl;
        cout << "Toan : " << toan << endl;
        cout << "Ly : " << ly << endl;
        cout << "Hoa : " << hoa << endl;
    }
};
bool cmp1(sinhvien a, sinhvien b){
    return a.toan > b.toan;
}
bool cmp2(sinhvien a, sinhvien b){
    return a.ly > b.ly;
}
bool cmp3(sinhvien a, sinhvien b){
    a.diemtb = (a.toan + a.ly + a.hoa)/3;
    b.diemtb = (b.toan + b.ly + b.hoa)/3;
    return a.diemtb > b.diemtb;
}
int main(){
    cout << "Nhap so sinh vien can sap xep : ";
    int n; cin >> n;
    sinhvien a[n];
    for(int i = 0; i < n; i++){
        a[i].nhap();
    }
    cout << "Chon option :" << endl;
    cout << "1. Sap xep theo diem toan" << endl;
    cout << "2. Sap xep theo diem ly" << endl;
    cout << "3. Sap xep theo diem tb" << endl;
    int option; cin >> option;
    if(option == 1){
        sort(a, a+n, cmp1);
        for(int i = 0; i < n; i++){
            a[i].in();
            cout << "--------------" << endl;
        }
    }
    else if(option == 2){
        sort(a, a+n, cmp2);
        for(int i = 0; i < n; i++){
            a[i].in();
            cout << "--------------" << endl;
        }
    }
    else if(option == 3){
        sort(a, a+n, cmp3);
        for(int i = 0; i < n; i++){
            a[i].in();
            a[i].diemtb = (a[i].toan + a[i].ly + a[i].hoa)/3;
            cout << "Diem trung binh : " << a[i].diemtb << endl;
            cout << "--------------" << endl;
        }
    }
    return 0;
}





