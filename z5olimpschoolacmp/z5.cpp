#include<fstream>
using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");

    int h, n, m, q;
    in >> h >> n >> m >> q;
    int A[h][n][m];
    int K[6][q];

    for(int i=0;i<h;i++){
        for(int j=0;j<n;j++){
            for(int z=0;z<m;z++){
                in >> A[i][j][z];
            }
        }
    }

    for(int i = 0; i < q;i++){
        for(int j = 0; j < 6;j++){
            in >> K[j][i];
        }
    }

    int s = 0;

    for(int t=0;t<q;t++){
        for(int i=K[0][t]-1;i<K[3][t];i++){
            for(int j=K[1][t]-1;j<K[4][t];j++){
                for(int z=K[2][t]-1;z<K[5][t];z++){
                    s += A[i][j][z];
                }
            }
        }
        out << s << endl;
        s = 0;
    }

    return 0;
}
