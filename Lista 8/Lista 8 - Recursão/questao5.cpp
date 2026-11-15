/* 5) Mostre a pilha de chamadas recursivas para o exercício 4.
*/

#include <iostream>
using namespace std;

int mdc (int x, int y) {
    if (y==0) {
        cout << "mdc(" << x <<", " << y << ") = " << x << endl;
        return x;
    } else {
        cout << "mdc(" << x << ", " << y << ") = "; 
        cout << "mdc(" << y << ", " << x%y << ")" << endl;
        return mdc(y, x%y);
    }
}

int main () {
    int x, y;
    cin >> x >> y;
    cout << mdc(x, y) << endl;
}