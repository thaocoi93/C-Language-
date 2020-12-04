// hàm chế đo
#include "iostream"
#include "time.h"
#include "cmath"
const int A = 100;
using namespace std;
void wait(int seconds)
{
	clock_t ew;
	ew = clock() + seconds * CLOCKS_PER_SEC;
	while (clock() < ew) {}
}
int intTro(int key){
	wait(1);
	cout << "I love you.";
	wait(0.5);
	cout << ".";
	wait(0.5);
	cout << ".";
	cout << "\n";
	cout << "Nhập key: ";
	cin >> key;
	if (key == 123 ){
		cout << "....\n";
	}
	else {
       cout << "Sai key";
       exit;
}
}
int cheDoMode(int cheDo){
	if (cheDo == 1){
		cout << "1. Tần số xuất hiện" << endl;
		cout << "2.Mang co 2 gia tri 0 lien tiếp";
		cout << "2. So phan tu chi xuat hien 1 trong 2 mang la" << endl;
	}
	else {
		cout << "Dang cap nhap" << endl;
	}
}
void getN(int arr[], int n){
	for (int i = 0; i < n; i++){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
}
void display(int arr[], int n){
	for (int i = 0; i < n; i++){
		cout << "arr[" << i << "] = " << arr[i];
		cout << endl;
	}
}
int lietKeTan(int arr[], int n){
	for (int i = 0; i < n; i++){
		int dem = 0;
		for (int j = 0; j < n; j++){
			if (arr[i] == arr[j]){
				if (i <= j){
					dem++;
				} else {
                     break;
               }
			}
		}
		if (dem != 0){
			cout << "\nGia tri " << arr[i] << "co tan so suat hien la " << dem;
		}
	}
}
int haiPhanTu(int arr[], int n){
    int flag = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == 0 && arr[i + 1] == 0){
            flag = 1;
            break;
        }
    }
    return flag;
}
int main(){
    int arr[A];
	int key, n;
	intTro(key);
	int cheDo;
	cout << "";
	cin >> cheDo;
	cheDoMode(cheDo);
	cout << "";
	int chonCheDo;
	cin >> chonCheDo;
	if (chonCheDo == 1){
	    cout << "Nhap n: ";
	    cin >> n;
		getN(arr, n);
		cout << "=====================\n";
		display(arr, n);
		int j = lietKeTan(arr, n);
	} else if (chonCheDo == 2){
	    cout << "Nhap n: ";
	    cin >> n;
	    getN(arr, n);
	    cout << "=====================\n";
	    display(arr, n);
	    int flag = haiPhanTu(arr, n);
	    if (flag == 1){
	        cout << "Mang co 2 gia tri 0 lien tiep\n";
	    } else {
	        cout << "Khong co";
	    }
	}
}
