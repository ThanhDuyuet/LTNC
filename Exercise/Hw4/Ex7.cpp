#include<bits/stdc++.h>

using namespace std;

void show(vector<vector<char>> v){
    for (int i = 1 ; i < v.size() -  1; i++){
        for (int j = 1; j < v[i].size() - 1; j++){
            cout << v[i][j];
        }
        cout << endl;
    }
}

int main(){
    int rows, cols;
    cin >> rows >> cols;
    vector<vector<char>> v;
    vector<char> tmp;
    char x;
    swap(rows,cols);
    for (int i = 0; i <= rows + 1; i++){
        for (int j = 0; j <= cols + 1; j++){
            if (i == 0 || j == 0 || i == rows + 1 || j == cols + 1){
                tmp.push_back('R');
            }else{
                cin >> x;
                tmp.push_back(x);
            }
        }
        v.push_back(tmp);
        tmp.clear();
    }
    bool check = false;
    for (int i = 2; i <= rows; i++){
        for (int j = 1; j <= cols; j++){
            if (v[i][j] == 'E'){
                if (v[i - 1][j] == 'Y') v[i][j] = 'Y';
                else{
                    if (v[i - 1][j] == 'E'){
                        if (v[i - 1][j - 1] == 'Y') v[i][j] = 'Y';
                        if (v[i - 1][j + 1] == 'Y') v[i][j] = 'Y';
                    }
                }
            }
        }
    }
    for (int i = 1; i <= cols; i++){
        if (v[rows][i] == 'Y') check = true;
    }
    //show(v);
    if (check) cout << "YES";
    else cout << "NO";
    return 0;
}

