#include <bits/stdc++.h>

using namespace std;

int main()
{
    // cout<<"helo";
    // char a[] = "jkalsjda";
    // int n = sizeof(a)/sizeof(a[0]);
    // for (int i = 0; i < sizeof(a)/sizeof(a[0])-1; i++)
    // {
    //     cout<<a[i];
    // }

    // Reverse -
    //  char a[] = "jadksl";
    //  int n= sizeof(a)/sizeof(a[0])-1;
    //  for(int i=0 ; i=n/2 ; i++){
    //      a[i] = a[i] + a[n-1-i];
    //      a[n-i-1] = a[i] - a[n-1-i];
    //      a[i] = a[i] - a[n-1-i];
    //  }
    //  for(int i=0; a[i]=='\0' ; i++){
    //      cout<<a[i];
    //  }

    // Sort -
    //  char a[] = "jdaslkjdlas";
    //  char temp = a[0];
    //  for(int i= 0 ; i<sizeof(a)/sizeof(a[0]) ; i++){
    //      for(int j=0 ; j<sizeof(a)/sizeof(a[0]) ; j++){
    //          if( (int)a[i] > (int)a[j] ){
    //              temp = a[j];
    //              a[j] = a[i];
    //              a[i] = temp;
    //          }
    //      }
    //  }
    //  for(int i=sizeof(a)/sizeof(a[0])-1 ; i>=0 ; i--){
    //      cout<<a[i];
    //  }

    // Sort 2d array
    // char a[3][10] = {"def", "abca", "sad"};
    // char b[3][10] = {"lmnads","efgs","abc"};
    // int brek =1;
    // int i=0,j=1;
    // char temp[4];
    // cout<<a[1];
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         if (strcmp(a[i], a[j]) == -1)
    //         {
    //             // cout<<a[j-1]<<" is greater than "<<a[j];
    //             strcpy(temp, a[j]);
    //             strcpy(a[j], a[i]);
    //             strcpy(a[i], temp);
    //         }
    //     }

    // }
    // Core  method no fn at all
    // for(int j=1 ; j<3 ;j++ ){
    //     while(i<4){
    //         if(a[j-1][i] > a[j][i]){
    //             strcpy(temp, a[j]);
    //             strcpy(a[j], a[j-1]);
    //             strcpy(a[j-1], temp);
    //             break;
    //             // a[j-1] = a[j] + a[j-1];
    //         }
    //         i++;
    //     }
    // }

    // for (int j = 0; j < 3; j++)
    // {
    //     cout << a[j] << " is " << j;
    //     cout << endl;
    // }

    // find pattern -
    int s = 3, count = 0 ,pcount = 0;
    char a[] = "DeepLee";
    char f[s] = "eep";
    int b = sizeof(a)/sizeof(a[0]);
    int j = 0;
    while ((j+s) < b )
    {
        for (int i = 0; i<s ; i++)
        {
            if (a[j+i] == f[i])
            {
                count++;
            }
            else {
                count = pcount;
                break;
            }
        }
        pcount = count;
        j++;
    }
    cout<<count/s;
}