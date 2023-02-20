#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int n;
    cout << "Nhap so luong phan tu cua mang:    ";
    cin >> n;
    int mang1[n], mang2[n];
    for (int i = 0; i < n; i++){
        cout << "Nhap gia tri phan tu thu " << i + 1 <<":   ";
        cin >> mang1[i];
    }
    for (int i =  n-1; i > 0; i--){
        mang2[n - 1 -i] = mang1[i];
    }
    int* pointer = &mang2[0];
    cout << "The pointer to fisrt value of new revesed array is: ";
    // cout << &mang2[0];
    cout << pointer;
    return 0;
}
