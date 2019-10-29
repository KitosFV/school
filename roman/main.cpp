#include<fstream>
using namespace std;

int main(){
    ofstream out("output.txt");
    int s=0;
    int b[13]   ={ 1,  4,   5,  9,   10, 40,  50, 90,  100,400, 500,900, 1000};
    int f[13]   ={ 0,  1,   1,  0,   0,  0,   0,  0,   0,  0 ,  0,  0,   0};

    for(int j=201;j<301;j++){
        int i=12,c=j;
        while((c>0)&&(i>-1)){
            if(c-b[i]>0){
                c -= b[i];
                s += f[i];
            }else{
                i--;
            }
        }
    }

    out << s;

    return 0;
}
