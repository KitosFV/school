#include<fstream>
using namespace std;

string gen(int n,int t,string b,string g){
    string a[n],k = "";
    for(int i=0;i<n;i++){
        a[i]=b+g;
    }
    if(t>0)a[n-1]+=b;
    for(int i=0;i<t-1;i++){
        a[i+1]+=b;
    }
    for(int i=0;i<n;i++){
        k+=a[i];
    }
    return k;
}

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int m, n;in >> m >> n;
    string b="B",g="G";

    if(m>n){swap(m,n);swap(b,g);}

    if(n <= 2*m){
        out << gen(m,n-m,b,g);
    }else{
        out << "No solution" << endl;
    }

    return 0;
}
