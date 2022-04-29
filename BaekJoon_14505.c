#include <stdio.h>
#include <string.h>

int num = 0;
int cnt = 0;
char input[100];

main(){

  scanf("%s", input);
  num = strlen(input);

  cnt += num;

  for (int i = 1; i < num; i++){
    for(int j = 0; j + i < num;j++){
      while(1){
        if(input[j] == input[j]+i){
          cnt++;
        }
      }
    }
  }


  printf("%d", cnt);
}
