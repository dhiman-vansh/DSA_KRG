#include<bits/stdc++.h>


using namespace std;

int main(){
    // cout<<"helo";
    // char a[] = "jkalsjda";
    // int n = sizeof(a)/sizeof(a[0]);
    // for (int i = 0; i < sizeof(a)/sizeof(a[0])-1; i++)
    // {
    //     cout<<a[i];
    // }
    
    char a[] = "jadksl";
    int n= sizeof(a)/sizeof(a[0])-1;
    for(int i=0 ; i=n/2 ; i++){
        a[i] = a[i] + a[n-1-i];
        a[n-i-1] = a[i] - a[n-1-i];
        a[i] = a[i] - a[n-1-i];
    }
    for(int i=0; a[i]=='\0' ; i++){
        cout<<a[i];
    }
}