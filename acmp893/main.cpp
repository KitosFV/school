#include<fstream>
using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");

    long long k;
    in >> k;
    if(k>2){
        out << k*(k-1)*(k-2);
    }else{
        out << k;
    }
    return 0;
}
