A.Thực hành
1.
char str[50] = "Hello World";
char *p1 = str;
char *p2 = &str[0];
if(p1 == p2) cout << "EQUA";
if(p1[5] == ' ') *(p2+5) = '-';
p1 = NULL;
p2 = NULL;
str = NULL;
-> error: incompatible types in assignment


int a = 20, b = 25, c = 30;
const int* pA = &a;
int *const pB = &b;
const int*const pC = &c;
*pA++ -> read-only
*pB++; *pC++ -> read-only

pB = NULL;
-> read-only
pC = NULL;
-> read-only
2.
#include <bits/stdc++.h>
using namespace std;
int check(int a[]){
    return sizeof(a);
}
int main(){
    int a[] = {1, 2, 3, 4, 5};
    cout << sizeof(a) << endl;
    cout << check(a) << endl;
    return 0;
}
-> sizeof bên trong hàm tương đương với sizeof phần tử đầu tiên của mảng.
3.
#include <bits/stdc++.h>
using namespace std;
int count_even(int* a, int n){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(*(a+i) % 2 == 0) cnt++;
    }
    return cnt;
}
int main(){
    int a[] = {1, 2, 3, 4, 5};
    cout << count_even(a, 5) << endl;
    return 0;
}
4.
#include <bits/stdc++.h>
using namespace std;
int binsear(int *a, int n, int find){
    int l = 0, r = n-1;
    while(l <= r){
        int m = (l+r)/2;
        if(*(a+m) == find){
            return m;
        }
        else if(*(a+m) < find){
            l = m+1;
        }
        else{
            r = m-1;
        }
    }
    return 0;
}
int main(){
    int a[] = {1, 3, 5, 8, 10, 15};
    int n = 6;
    int find = 5;
    if(binsear(a, n, find))
        cout << binsear(a, n, find) << endl;
    //-> 2
    return 0;
}
5.
#include <bits/stdc++.h>
using namespace std;
char* weird_string() {
   char c[] = "123345";
   return c;
}
int main(){
    char *c = weird_string();
    cout << c << endl;
    return 0;
}
6.
#include <bits/stdc++.h>
using namespace std;
void in(int *a, int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    int n = 5;
    int a[n] = {1, 2, 3, 4, 5};
    in(a, n);
    return 0;
}
7.
#include <bits/stdc++.h>
using namespace std;
int cnt(const char* a, const char* b){
    int n1 = strlen(a);
    int n2 = strlen(b);
    int cnt = 0;
    for(int i = 0; i < n2; i++){
        char c[n1];
        for(int j = 0; j < n1; j++){
            c[j] = b[i+j];
        }
        if(strcmp(a, c) == 0){
            cnt++;
            i+=2;
        }
    }
    return cnt;
}
int main(){
    const char a[] = "abc";
    const char b[] = "abcdabcdabcabcabcde";
    cout << cnt(a, b) << endl;
    return 0;
}

C.Bài tập
1.
#include <bits/stdc++.h>
using namespace std;
void reverse(char a[]){
    int n = 0;
    for(int i = 0; a[i] != '\0'; i++){
        n++;
    }
    int l = 0, r = n-1;
    while(l < r){
        char c = a[l];
        a[l] = a[r];
        a[r] = c;
        l++; r--;
    }
}
int main(){
    char a[] = "Hello World";
    reverse(a);
    cout << a << endl;
    return 0;
}
2.
#include <bits/stdc++.h>
using namespace std;

void *delete_char(char a[], char c){
    int n = 0;
    for(int i = 0; a[i] != '\0'; i++){
        n++;
    }
    char *result = new char[n+1];
    int cnt = 0;
    for(int i = 0; a[i] != '\0'; i++){
        if(a[i] != c){
            result[cnt++] = a[i];
        }
    }
    char x[cnt+1];
    for(int i = 0; i < cnt; i++){
        x[i] = result[i];
    }
    cout << x;
    delete []result;
}
int main(){
    char a[] = "Hello World";
    char c = 'l';
    delete_char(a, c);
    return 0;
}
3.
#include <bits/stdc++.h>
using namespace std;

void pad_right(char a[], int n){
    int cnt = 0;
    for(int i = 0; a[i] != '\0'; i++){
        cnt++;
    }
    char *c = new char[n];
    for(int i = 0; i < cnt; i++){
        *(c+i) = a[i];
    }
    for(int i = cnt; i < n; i++){
        *(c+i) = ' ';
    }
    for(int i = 0; i < n; i++){
        a[i] = *(c+i);
    }
    delete []c;
}
int main(){
    char a[] = "Hello World";
    int n1 = 15;
    pad_right(a, n1);
    cout << a << endl;
    int cnt1 = 0;
    for(int i = 0; a[i] != '\0'; i++){
        cnt1++;
    }
    cout << cnt1 << endl;
    return 0;
}
4.
#include <bits/stdc++.h>
using namespace std;

void pad_left(char a[], int n){
    int cnt = 0;
    for(int i = 0; a[i] != '\0'; i++){
        cnt++;
    }
    char *c = new char[n+1];
    if(cnt < n){
        for(int i = 0; i < n-cnt; i++){
            c[i] = ' ';
        }
        for(int i = 0; i < cnt; i++){
            c[i+n-cnt] = a[i];
        }
    }
    for(int i = 0; i < n; i++){
        a[i] = c[i];
    }
    delete []c;
}
int main(){
    char a[] = "Hello World";
    int n1 = 15;
    pad_left(a, n1);
    cout << a << endl;
    int cnt1 = 0;
    for(int i = 0; a[i] != '\0'; i++){
        cnt1++;
    }
    cout << cnt1 << endl;
    return 0;
}
5.
#include <bits/stdc++.h>
using namespace std;
void truncate(char a[], int n){
    int cnt = 0;
    for(int i = 0; a[i] != '\0'; i++){
        cnt++;
    }
    for(int i = n; i < cnt; i++){
        *(a+i) = '\0';
    }
}
int main(){
    char a[] = "Hello World";
    int n1 = 5;
    truncate(a, n1);
    cout << a << endl;
    int cnt1 = 0;
    for(int i = 0; a[i] != '\0'; i++){
        cnt1++;
    }
    cout << cnt1 << endl;
    return 0;
}
6.
#include <bits/stdc++.h>
using namespace std;
bool is_palindrome(char a[]){
    int cnt = 0;
    for(int i = 0; *(a+i) != '\0'; i++){
        cnt++;
    }
    int l = 0, r = cnt-1;
    while(l < r){
        if(*(a+l) != *(a+r)) return false;
        l++; r--;
    }
    return true;
}
int main(){
    char a[] = "Hello World";
    char b[] = "abcddcba";
    cout << is_palindrome(a) << endl;
    cout << is_palindrome(b) << endl;
    return 0;
}
7.
#include <bits/stdc++.h>
using namespace std;
void trim_left(char a[]){
    int cnt = 0;
    for(int i = 0; a[i] != '\0'; i++){
        if(a[i] != ' '){
            cnt = i;
            break;
        }
    }
    int len = 0;
    if(cnt > 0){
        for(int i = cnt; a[i] != '\0'; i++){
            a[len++] = a[i];
        }
        a[len] = '\0';
    }
}
int main(){
    char a[] = "    Hello World";
    char b[] = "  abcddcba";
    trim_left(a);
    trim_left(b);
    cout << a << endl;
    cout << b << endl;
    return 0;
}
8.
#include <bits/stdc++.h>
using namespace std;
void trim_right(char a[]){
    int cnt = 0;
    for(int i = 0; a[i] != '\0'; i++){
        if(a[i] == ' '){
            a[i] = '\0';
            break;
        }
    }
}
int main(){
    char a[] = "Hello World    ";
    char b[] = "abcddcba     ";
    trim_right(a);
    trim_right(b);
    int cnt1 = 0;
    for(int i = 0; a[i] != '\0'; i++){
        cnt1++;
    }
    cout << a << " " << cnt1 << endl;
    int cnt2 = 0;
    for(int i = 0; b[i] != '\0'; i++){
        cnt2++;
    }
    cout << b << " " << cnt2 << endl;
    return 0;
}


