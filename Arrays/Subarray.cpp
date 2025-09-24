#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int siz=9;
    for(int st=0; st<siz;st++){
        for(int j=st;j<siz-1;j++){
            for(int i=st; i<j ;i++){
                cout<<arr[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
