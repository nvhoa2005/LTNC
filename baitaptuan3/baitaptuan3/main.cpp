4.(Hackerrank)
5.
#include <bits/stdc++.h>
using namespace std;
struct Point{
    double x, y;
    void nhap(){
        cin >> x >> y;
    }
};
struct Rect{
    double x, y, w, h;
    bool contains(Point A) const{
        if(A.x >= x && A.x <= x+w && A.y >= y && A.y <= y+h){
            return true;
        }
        else return false;
    }
    void nhap(){
        cin >> x >> y >> w >> h;
    }
};
int main(){
    Point A;
    A.nhap();
    Rect B;
    B.nhap();
    if(B.contains(A)){
        cout << "yes" << endl;
    }
    else cout << "no" << endl;
    return 0;
}
6.
#include <bits/stdc++.h>
using namespace std;
struct Rect{
    double x, y, w, h;

};
struct Ship{
    Rect a;
    string id;
    double dx, dy;
    void move(){
        a.x += dx;
        a.y += dy;
    }
    void nhap(){
        cin >> a.x >> a.y >> a.w >> a.h >> id >> dx >> dy;
    }
};
void display(const Ship& ship){
    cout << ship.id << endl;
    cout << ship.a.x << " " << ship.a.y << endl;
}
int main(){
    Rect a;
    a.nhap();
    Ship b;
    b.nhap();
    b.move();
    display(b);
    return 0;
}
7.
#include <bits/stdc++.h>
using namespace std;
struct Rect{
    double x, y, w, h;
    void nhap(){
        cin >> x >> y >> w >> h;
    }
};
struct Ship{
    Rect a;
    string id;
    double dx, dy;
    void move(){
        a.x += dx;
        a.y += dy;
    }
    void nhap(){
        cin >> a.x >> a.y >> a.w >> a.h >> id >> dx >> dy;
    }
};
void display(const Ship& ship){
    cout << ship.id << endl;
    cout << ship.a.x << " " << ship.a.y << endl;
}
int main(){
    Ship a, b;
    a.nhap(); b.nhap();
    int loop = 0;
    while(loop < 10){
        a.move(); b.move();
        display(a); display(b);
        loop++;
    }
    return 0;
}
8.
#include <bits/stdc++.h>
using namespace std;
struct Point{
    double x, y;
    Point(double _x, double _y){
        x = _x;
        y = _y;
    }
    Point(){

    }
};

int main(){
    Point A;
    cout << &A.x << " " << &A.y << endl;
    cout << &A << endl;
    //Nhận xét : Địa chỉ của biến kiểu Point trùng với địa chỉ của trường đầu tiên(ở đây là x) của biến đó
    return 0;
}
11.
#include <bits/stdc++.h>
using namespace std;
struct String {
   char* arr;
   int length;

   String(const char* _s) {
      length = strlen(_s);
      arr = new char[length];
      strncpy(arr, _s, length);
   }
   ~String() {
      delete [] arr;
   }
   void print() {
      cout << arr;
   }
   void append(const char* c){
      int size = strlen(c);
      char *temp = new char[size+length];
      strncpy(temp, arr, length);
      strncat(temp, c, size);
      arr = new char[length+size];
      strcpy(arr, temp);
      delete[] temp;
   }
};
int main(){
    String s("hello");
    s.append(" world!!");
    s.print();
    s.~String();
    return 0;
}







