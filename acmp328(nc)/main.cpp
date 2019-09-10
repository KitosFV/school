#include<fstream>
using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");

    int n, s = 0;
    in >> n;
    s+=2*n;

    for(int j = 0;j<n;j++)
        for(int i = j;i<=n;i++)s+=i+j;

    out << s;
    return 0;
}
