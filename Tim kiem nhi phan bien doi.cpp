#include <bits/stdc++.h>

using namespace std;

int ham1 (int a[], int n, int x){
    int l = 0; int r = n - 1;
    int ans = -1;
    while (l <= r){
        int mid = (l + r) / 2;
        if (a[mid] == x){
            ans = mid;
            r = mid - 1;
        }
        else if (a[mid] > x){
            r = mid  - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return ans;
}

int ham2 (int a[], int n, int x){
    int l = 0; int r = n - 1;
    int ans = -1;
    while (l <= r){
        int mid = (l + r) / 2;
        if (a[mid] == x){
            ans = mid;
            l = mid + 1;
        }
        else if (a[mid] > x){
            r = mid  - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return ans;
}

int ham3 (int a[], int n, int x){
    int l = 0; int r = n - 1;
    int ans = -1;
    while (l <= r){
        int mid = (l + r) / 2;
        if (a[mid] >= x){
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return ans;
}

int ham4 (int a[], int n, int x){
    int l = 0; int r = n - 1;
    int ans = -1;
    while (l <= r){
        int mid = (l + r) / 2;
        if (a[mid] > x){
            ans = mid;
            r = mid - 1;
        }
        else if (a[mid] == x){
            l = mid + 1;
        }
        else {
            l = mid + 1;
        }
    }
    return ans;
}

int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for (int &x : a) cin >> x;
    cout << ham1(a, n, x) << endl;
    cout << ham2(a, n, x) << endl;
    cout << ham3(a, n, x) << endl;
    cout << ham4(a, n, x) << endl;
    if (ham1(a, n, x) != -1){
        if (ham1(a, n, x) == ham2(a, n, x)){
            cout << 1 << endl;
        }
        else {
            cout << ham2(a, n, x) - ham1(a, n, x) + 1;
        }
    }
    else cout << 0;
}