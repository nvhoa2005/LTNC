A.Thực hành
1.
#include <bits/stdc++.h>
using namespace std;
char* concat(const char* a, const char* b){
    int n = strlen(a) + strlen(b);
    char* c = new char[n+1];
    c = strcpy(c, a);
    c = strcat(c, b);
    return c;
}
int main(){
    const char a[] = "Hello";
    const char b[] = " World";
    char* result = concat(a, b);
    cout << result << endl;
    delete[] result;
    return 0;
}

2.
#include <bits/stdc++.h>
using namespace std;
int main(){
     int* p = new int;
     int* p2 = p;
     *p = 10;
     delete p; //Con trỏ p đã giải phóng và không sử dụng được nữa
     //vùng bộ nhớ không còn được cấp phát nữa->xảy ra lỗi
     //Cách giải quyết là cấp phát thêm vùng nhớ cho p2
     p2 = new int;
     *p2 = 100;
     cout << *p2;
     delete p2;
}

3.
#include <bits/stdc++.h>
using namespace std;
int main(){
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl;
    return 0;
}
// Để giải phóng mảng động cần delete[];
// c là một con trỏ tới một phần mảng ban đầu chứ không phải là con trỏ đến mảng động nên không thể dùng delete để giải phóng vùng nhớ
4.


C.Câu hỏi
1.
#include <bits/stdc++.h>
using namespace std;
int cnt(const char* a, const char* b){
    int n1 = strlen(a);
    int n2 = strlen(b);
    int cnt = 0;
    for(int i = 0; i < n2; i++){
        char *c = new char[n1];
        for(int j = 0; j < n1; j++){
            *(c+j) = *(b+i+j);
        }
        if(strcmp(a, c) == 0){
            cnt++;
            i+=2;
        }
        delete[] c;
    }
    return cnt;
}
int main(){
    const char a[] = "abc";
    const char b[] = "abcdabcdabcabcabcdeabc";
    cout << cnt(a, b) << endl;
    return 0;
}
