#include <iostream>
#include <cstring>
using namespace std;

const int N = 100;
int p[11];
int r[N], s[N];

void init() {
    p[0] = 0;
    p[1] = 1;
    p[2] = 5;
    p[3] = 8;
    p[4] = 9;
    p[5] = 10;
    p[6] = 17;
    p[7] = 17;
    p[8] = 20;
    p[9] = 24;
    p[10] = 30;
}

int topDownCutRod(int n) {
    if (r[n] != -1)
        return r[n];
    int q = 0;
    for (int i = 1; i <= n; ++i)
        q = max(q, p[i] + topDownCutRod(n - i));
    return r[n] = q;
}


void printCutRodSoln(int n) {
    do
        cout << s[n] << " ";
    while ((n -= s[n]) > 0);
}

int main() {
    init();
    int i,n;
    cin >> n;
    for(i=0;i<N;i++){
        r[i]=-1;
    }
    cout << topDownCutRod(n) << endl;
    printCutRodSoln(n);
    return 0;
}
