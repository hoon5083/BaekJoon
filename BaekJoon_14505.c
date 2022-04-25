#include <stdio.h>
#include <string.h>

main(){
  char input[30];
  int output = 0;
  int num = 0;
  int cnt = 0;

  scanf("%s", input);
  num = strlen(input);

  cnt += num;

  for(int i = 0;i<num;i++){
    for(int j = 1;(i-j >= 0)&&(i+j < num);j++){
      if(input[i-j] == input[i+j]){
        cnt++;
      }
    }
  }
  for(int i = 0;i<num;i++){
    for(int j = 0;(i-j+1 >= 0)&&(i+j < num);j++){
      if(input[i-j+1] == input[i+j]){
        cnt++;
      }
    }
  }
  printf("%d", cnt);
}
