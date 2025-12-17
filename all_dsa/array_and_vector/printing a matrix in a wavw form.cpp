#include <iostream>
using namespace std;

int m, n;

void input(int mat[][100]){
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
}

void print(int mat[100][100]){
    for (int i = 0; i < m; i++) {
        if ((i % 2) == 0) {
            for (int j = 0; j < n; j++) {
                cout << mat[i][j] << " ";
            }
        }
        else {
            for (int j = n - 1; j >= 0; j--) {
                cout << mat[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    cin >> m >> n;
    int mat[100][100];

    input(mat);
    print(mat);

    return 0;
}
