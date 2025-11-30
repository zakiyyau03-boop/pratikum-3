#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "masukan jumlah baris segtiga pascal:";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for ( int s = 0; s < n - i - 1; s++) {
            cout << " ";
        } 
        int nilai =1;
        for (int j = 0; j <= i; j++){
            cout << nilai << " ";
            nilai = nilai * (i - j) / (j + 1);
     
        }


    } 

        cout << endl;
    
     return 0;
}
