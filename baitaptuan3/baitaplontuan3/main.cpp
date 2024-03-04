#include <bits/stdc++.h>
using namespace std;
struct shopping{
    string ten;
    double gia;
    int soluong;
    void nhap(){
        cin.ignore();
        cout << "Ten san pham : ";
        getline(cin, ten);
        cout << "Gia san pham : ";
        cin >> gia;
        cout << "So luong san pham : ";
        cin >> soluong;
    }
    void in(){
        cout << "Ten san pham : " << ten << endl;
        cout << "Gia san pham : " << gia << endl;
        cout << "So luong san pham : " << soluong << endl;
        cout << "------------------" << endl;
    }
};
double giasp(int SoLuong, double GiaThanh){
    return SoLuong*GiaThanh;
}
bool check(double Tien, int SoLuong[], double GiaThanh[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += giasp(SoLuong[i], GiaThanh[i]);
    }
    if(Tien > sum) return true;
    return false;
}
bool cmp1(shopping a, shopping b){
    return a.gia < b.gia;
}
bool cmp2(shopping a, shopping b){
    return a.gia*a.soluong < b.gia*b.soluong;
}
bool cmp(shopping a, shopping b){
    return a.ten < b.ten;
}
int main()
{
    int n;
    cout << "So san pham khac nhau can mua : "; cin >> n;
    vector <shopping> a(n);
    int soluong[n]; double giathanh[n];
    for(int i = 0; i < n; i++){
        a[i].nhap();
        soluong[i] = a[i].soluong;
        giathanh[i] = a[i].gia;
    }
    int mymoney;
    cout << "So tien ban co la : ";
    cin >> mymoney;
    int res1 = mymoney, res2 = n;
    cout << "So san pham thiet yeu la : ";
    int thietyeu; cin >> thietyeu;
    cin.ignore();
    while(thietyeu--){
        string s;
        cout << "Ten san pham : "; getline(cin, s);
        for(int i = 0; i < n; i++){
            if(a[i].ten == s){
                mymoney -= a[i].gia*a[i].soluong;
                a.erase(a.begin()+i);
                n--;
            }
        }
    }
    cout << "So san pham can mua con lai cua ban la : " << a.size() << endl;
    for(int i = 0; i < int(a.size()); i++){
        a[i].in();
    }
    cout << "Sau khi mua san pham thiet yeu thi so tien con lai cua ban la : " << mymoney << endl;
    if(check(res1, soluong, giathanh, res2)){
        cout << "Ban du tien mua cac san pham con lai!!" << endl;
    }
    else{
        cout << "Ban khong du tien mua cac san pham con lai!!" << endl;
        cout << "Option : " << endl;
        cout << "1. Mua tat ca mat hang co gia thanh tren mot don vi san pham gia re nhat" << endl;
        cout << "2. Mua tat ca mat hang co tong gia tri (tren danh sach can mua) la re nhat" << endl;
        int option; cin >> option;
        if(option == 1){
            sort(a.begin(), a.end(), cmp1);
            int res, sum = 0;
            for(int i = 0; i < n; i++){
                sum += a[i].soluong*a[i].gia;
                if(sum > mymoney){
                    res = i-1;
                    for(int i = res+1; i < n; i++){
                        a.erase(a.begin()+i);
                    }
                }
            }
            sort(a.begin(), a.end(), cmp);
            for(int i = 0; i <= res; i++){
                a[i].in();
            }
        }
        else if(option == 2){
            sort(a.begin(), a.end(), cmp2);
            int res, sum = 0;
            for(int i = 0; i < n; i++){
                sum += a[i].soluong*a[i].gia;
                if(sum > mymoney){
                    res = i-1;
                    for(int i = res+1; i < n; i++){
                        a.erase(a.begin()+i);
                    }
                }
            }
            sort(a.begin(), a.end(), cmp);
            for(int i = 0; i <= res; i++){
                a[i].in();
            }
        }
    }
    return 0;
}
