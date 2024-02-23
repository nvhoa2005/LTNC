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
6.
#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            cout << j << " ";
        }
        for(int j = 1; j < i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
D. Bài tập lớn
Phần A:
#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int luong;
    if(n <= 100){
        luong = n*12000;
    }
    else{
        luong = 100*12000;
        n -= 100;
        if(n >= 1 && n <= 50){
            luong += n*16000;
        }
        else{
            luong += 50*16000;
            n -= 50;
            if(n >= 1 && n <= 50){
                luong += n*20000;
            }
            else{
                luong += 50*20000;
                n -= 50;
                luong += n*25000;
            }
        }
    }
    cout << luong << endl;
    return 0;
}
Phần B:
#include <iostream>
using namespace std;
int main(){
    int luong; cin >> luong;
    int thue, baohiem;
    baohiem = luong*9/100;
    luong = luong - baohiem;
    if(luong >= 1000000 && luong <= 1500000){
        thue = luong*10/100;
    }
    else if(luong > 1500000 && luong <= 2000000){
        thue = (luong-1500000)*15/100 + 500000*10/100;

    }
    else{
        thue = (luong-2000000)*20/100 + 500000*15/100 + 500000*10/100;
    }
    luong = luong-thue;
    cout << thue << endl << luong << endl;
    return 0;
}
Phần C:
#include <iostream>
#include <cmath>
using namespace std;
double round(double x){
    if(x-int(x) >= 0.5) return int(x)+1;
    return int(x);
}
int main(){
    int vay; cin >> vay;
    int cnt = 12;
    while(cnt--){
        int lai = round(1.0*vay*2/100);
        vay += lai;
    }
    cout << vay << endl;
    return 0;
}
Phần D+E:
#include <iostream>
using namespace std;
double round(double x){
    if(x-int(x) >= 0.5) return int(x)+1;
    return int(x);
}
int tongthunhap(int n){
    int luong;
    if(n <= 100){
        luong = n*12000;
    }
    else{
        luong = 100*12000;
        n -= 100;
        if(n >= 1 && n <= 50){
            luong += n*16000;
        }
        else{
            luong += 50*16000;
            n -= 50;
            if(n >= 1 && n <= 50){
                luong += n*20000;
            }
            else{
                luong += 50*20000;
                n -= 50;
                luong += n*25000;
            }
        }
    }
    return luong+1500000;
}
int thunhapthucte(int luong){
    int thue, baohiem;
    baohiem = luong*9/100;
    luong = luong - baohiem;
    if(luong >= 1000000 && luong <= 1500000){
        thue = luong*10/100;
    }
    else if(luong > 1500000 && luong <= 2000000){
        thue = (luong-1500000)*15/100 + 500000*10/100;

    }
    else{
        thue = (luong-2000000)*20/100 + 500000*15/100 + 500000*10/100;
    }
    luong = luong-thue;
    return luong;
}
int nganhang(int n){
    return n+round(1.0*n*2/100);
}
int main(){
    int vay;
    cout << "So tien sinh vien can vay la : ";
    cin >> vay;
    int time[100], thunhapsauthue[100];
    int n;
    cout << "So thang ma sinh vien lam viec la : " ;
    cin >> n;
    cout << "Nhap so gio cho tung thang : ";
    for(int i = 1; i <= n; i++){
        cin >> time[i];
    }
    for(int i = 1; i <= n; i++){
        thunhapsauthue[i] = thunhapthucte(tongthunhap(time[i]));
    }
    for(int i = 1; i <= n; i++){
        cout << "---------------------" << endl;
        cout << "      SAU THANG THU " << i << " :"<<endl;
        cout << "Thu nhap sau thue cua thang " << i << " la " << thunhapsauthue[i] << endl;
        cout << "Lai suat ngan hang cuoi thang " << i << " la : " << vay*2/100 << endl;
        int res = vay;
        vay = nganhang(vay) - (thunhapsauthue[i]-2000000);
        if(vay < 0){
            cout << "---------------------" << endl;
            cout << "Dau thang " << i+1 << " thi sinh vien tra het no" << endl;
            cout << "Khoan thanh toan cuoi cung voi ngan hang la : " << res << endl;
            break;
        }
        cout << "So tien du no cua sinh vien dau thang thu" << i+1 << " la : " << vay << endl;
        if(i == n){
            cout << "---------------------" << endl;
            cout << "Sinh vien chua tra du so tien" << endl;
        }
    }
    return 0;
}






