#include<iostream>
using namespace std;


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    
    
    cout<<"Nhap gia tri so thu nhat : ";
    cin>>num1;
    cout<<"Nhap gia tri so thu hai : ";
    cin>>num2;
    
   
    cout<<"\nGia Tri Truoc Khi Hoan Doi :"<<endl;
    cout<<"So 1 = "<<num1<<endl;
    cout<<"So 2 = "<<num2<<endl;
    
    
    swap(&num1, &num2);
    
    
    cout<<"\nGia Tri Sau Khi Hoan Doi :"<<endl;
    cout<<"So 1 = "<<num1<<endl;
    cout<<"So 2 = "<<num2<<endl;
    
    return 0;
}