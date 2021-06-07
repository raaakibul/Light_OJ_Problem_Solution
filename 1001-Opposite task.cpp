#include<iostream>
using namespace std;
int main(){
    int a,b,n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
		cin >> a;

		b = a / 2;
		a = a % 2 + a / 2;
		cout << a << " "<<b << endl;

	}

return 0;
}
