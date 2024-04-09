Bài tập
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


