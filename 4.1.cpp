#include<iostream>
int main(){
	  printf("chuc nang 1:tinh trung binh cong cac so chan\n");
     int max,min,i;
	 float tongChan=0,dem=0,trungBinh=0;
     printf("nhap min=");
  scanf("%d",&min);
  printf("nhap max=");
  scanf("%d",&max);
  i=min;
  while (i<=max ){
   if (i % 2 ==0){
    tongChan+=i;
    dem++;
   }
   i++;
  }
  trungBinh=tongChan/dem;
  printf("Trung binh tong cua cac so tu nhien chia het cho 2 tu min toi max=%.1f\n",trungBinh);
	
}
