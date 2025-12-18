#include<iostream>
#include<vector>
using namespace std;

int count = 0;   

void space(){
    while(count < 0){
        cout << " ";
        count++;
    }
}

void print(vector<vector<int>> v){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j <= i; j++){
            cout << v[i][j] << " ";
            count = count - 1;  
        }
        cout << endl;
    }
}

int main(){
    int m = 5;
    vector<vector<int>> v;

    for(int i = 0; i < 5; i++){
        vector<int> a(i + 1);
        v.push_back(a);
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0 || j == i){
                v[i][j] = 1;
            }
            else{
                v[i][j] = v[i-1][j] + v[i-1][j-1];
            }
        }
    }

    print(v);

    return 0;
}
