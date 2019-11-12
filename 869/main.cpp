#include<fstream>
#include<list>
using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");

    int n, d, k = 0;in >> n >> d;
    list<int> c;
    for(int i=0;i<n;i++){
        int m;in >> m;
        c.push_back(m);
    }

    c.sort();

    while(c.size()>1){
        if(c.front() + c.back()<=d)c.pop_front();
        c.pop_back();
        k++;
    }
    if(c.size()==1)k++;

    out << k;

    return 0;
}
