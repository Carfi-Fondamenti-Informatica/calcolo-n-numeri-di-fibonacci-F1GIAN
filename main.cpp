#include <iostream>
using namespace std;

int main() {
   
    int n=0;
    cin >> n;

    if (n<2){
        cout << "errore" << endl;

    }else{
        int a=0, b=1, c=a+b;
        cout << "1" << endl;

        for (int i=1; i<n; i++){
            c=a+b;
            a=b;
            b=c;
            cout << c << endl;
        }
    }

   return 0;
}
