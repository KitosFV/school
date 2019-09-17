#include<fstream>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");

    int n,m;in >> n >> m;
    int a[n];

    for(int i=0;i<n;i++){
        in >> a[i];
    }
    sort(a,a+n);

    int i=n,j,k,s=-1;

    while((i>0)&&(s==-1)){
        i--;j=i;k=i;
        while((j>0)&&(s==-1)){
            j--;k=j;
            while((k>0)&&(s==-1)){
                k--;
                if(a[i]+a[j]+a[k]<=m){
                    s=a[i]+a[j]+a[k];
                    cout << i <<" "<< j <<" "<< k;
                }
            }
        }
    }
    out << s;
}
