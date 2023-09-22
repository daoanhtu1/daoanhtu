#include <stdio.h>

int atm_basic(int argc, char *argv[])
//    int main(int argc, char *argv[])
{
  printf("Ban da dang nhap thanh cong.Xin chuc mung!\n");
  printf("ban muon su dung chuc nang nao?\n");
  printf("1.Rut tien\n");
  printf("2.Kiem tra so du\n");
  printf("3.Chuyen khoan\n");
  printf("4.Kiem tra lich su giao dich\n");
  printf("Moi ban nhan cac lua chon 1-4:");
  int choose = 0;
  scanf("%d", &choose);
  if (choose >= 1 && choose <= 4) {
    switch (choose) {
    case 1:
      printf("Giao dich thanh cong.So tien con lai la 4tr USD\n");
      break;
    case 2:
      printf("So du trong tai khoan cua ban la 5tr USD\n");
      break;
    case 3:
      printf("Ban hay nhap so tai khoan can chuyen khoan\n");
      break;
    case 4:
      printf("Danh sach cac giao dich gan day cua ban\n");
      break;
    default:
      printf("Ban chon chua chinh xac\n");
    }
  }
  else {
    printf("Lua chon cua ban khong phu hop.Moi ban nhap cac so trong pham vi tu 1 toi 4");
  }

  printf("\n");
  return 0;
}