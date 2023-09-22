#include <stdio.h>
int toantu(){
//int main(){
  int a = 5;
  int b= 10;
  int c = 7;
  //toan tu toan hoc
  int tong = a + b; //cong
  int hieu = a- b; //tru
  int tich = a * b; //nhan
  int thuong = b / a; //chia
  //Toan tu quan he
  int ketqua1 = (a>b); //So sanh lon hon
  int ketqua2 = (a<=b); //So sanh nho hon hoac bang
  int ketqua3 = (a == c ); // So sanh ket qua bang
  int ketqua4 = (a!= c); // So sanh ket qua khac
  //Toan tu logic
  int ketqua5 = (a < b && b>c); //toan tu logic AND
  int ketqua6 = (a < b || b < c ); //Toan tu logic OR
  int ketqua7 = !(a<b); //Toan tu logic NOT
  printf("Tong: %d\n", tong );
  printf("Hieu : %d\n", hieu);
  printf("Tich: %d\n", tich);
  printf("Thuong: %d\n",thuong);
  printf("Ket qua 1: %d\n", ketqua1);
  printf("Ket qua 2: %d\n", ketqua2);
  printf("Ket qua 3: %d\n", ketqua3);
  printf("Ket qua 4: %d\n", ketqua4);
  printf("Ket qua 5: %d\n", ketqua5);
  printf("Ket qua 6: %d\n", ketqua6);
  printf("Ket qua 7: %d\n", ketqua7);
  return 0;
}