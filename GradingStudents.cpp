#include <bits/stdc++.h>

using namespace std;

void solve(vector < int > grades){
    for(int i = 0; i < grades.size(); i++) {
        if(grades[i] % 5 >= 3 && grades[i] > 37) {
            cout << (grades[i] - (grades[i] % 5)) + 5 << endl;
        } else {
            cout << grades[i] << endl;
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> grades(n);

    for(int grades_i = 0; grades_i < n; grades_i++){
        cin >> grades[grades_i];
    }

    solve(grades);

    return 0;
}