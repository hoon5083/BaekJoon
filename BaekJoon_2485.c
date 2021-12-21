#include <stdio.h>

int al_num = 0;
int al_spot[100000];
int blank [100000];
int gcd = 0;
int gcd_s = 0;
int gcd_b = 0;
int gcd_buf = 0;
int result = 0;

int gcd_cal(int buf_1, int buf_2){
  if(buf_1>=buf_2){
    gcd_b = buf_1;
    gcd_s = buf_2;
  }
  else if(buf_1<buf_2){
    gcd_s = buf_1;
    gcd_b = buf_2;
  }
  for(int j = 1;j>0;j++){
    if(gcd_b%gcd_s == 0){
      gcd = gcd_s;
      break;
    }
    gcd_buf = gcd_s;
    gcd_s = gcd_b%gcd_s;
    gcd_b = gcd_buf;
  }
  return gcd;
}

main(){
  scanf("%d", &al_num);
  for(int i = 0;i<al_num;i++){
    scanf("%d", &al_spot[i]);
  }
  for(int i = 0;i<al_num-1;i++){
    blank[i] = al_spot[i+1] - al_spot[i];
  }
  gcd_cal(blank[0], blank[1]);
  for(int i = 1;i<al_num-2;i++){
    gcd_cal(gcd, blank[i+1]);
  }
  for(int i = 0;i<al_num-1;i++){
    result = result + ((blank[i]/gcd)-1);
  }
  printf("%d", result);
}
