#include<fstream>
using namespace std;

bool chek(int x, int y,int r){
    if(x*x+y*y==r*r){
        return true;
    }else{
        return false;
    }
}

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");

    int n;in>>n;



    return 0;
}
