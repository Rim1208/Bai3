#include<iostream>
using namespace std;

int main() {
    int arr[10], sum = 0, num;
    
    
    cout<<"Nhap so luong phan tu can luu tru trong mang (max 10) : ";
    cin>>num;
    cout<<"Input "<<num<<" So phan tu trong mang :"<<endl;
    
    
    for(int i=0; i<num; i++) {
        cout<<"So - "<<i+1<<" : ";
        cin>>*(arr+i);
    }
    
    
    for(int i=0; i<num; i++) {
        sum += *(arr+i);
    }
    
    
    cout<<"\nTong cac phan tu cua mang la: "<<sum<<endl;
    
    return 0;
}