#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void sortArrTang(int mang[], int n){
    for(int i = 0;i < n-1; i++)
        for(int j = i + 1; j < n ; j++){
            if( mang[i] > mang[j] ){
                swap(mang[i], mang[j]); 
            }
        }
}
void printArr(int mang[], int n){
    for(int i=0;i<n;i++)
        cout<<" "<<mang[i];
}
double findMedian(int mang[], int n){
    if (n%2 == 1){  
        int index = n/2;
        return mang[index];
    }else {
        int index1 = n/2;
        int index2 = n/2 +1;
        float median = (float)(mang[index1] + mang[index2])/2;
        return median;
    }
}
int main(int argc, char const *argv[])
{
    int n = 0;
    int mang[n];
    cout << "Nhap so luong phan tu cua mang:    ";
    cin>>n;
        for (int i = 0; i < n; i++){
          cout << "Nhap gia tri thu " <<i + 1    <<":    ";
         cin >> mang[i];
         }
    sortArrTang(mang, n); 
    cout <<"Trung vi cua mang co gia tri la: " <<findMedian(mang, n);
    
    return 0;
}
