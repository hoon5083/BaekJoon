#include <stdio.h>
#include <string.h>

<<<<<<< HEAD
int num = 0;
int cnt = 0;
char input[100];

main(){
=======
main(){
  char input[30];
  int output = 0;
  int num = 0;
  int cnt = 0;
>>>>>>> c21acf969f725f3f2900eabaf917c9b50ac624d0

  scanf("%s", input);
  num = strlen(input);

  cnt += num;

<<<<<<< HEAD
  for (int i = 1; i < num; i++){
    for(int j = 0; j + i < num;j++){
      while(1){
        if(input[j] == input[j]+i){
          cnt++;
        }
      }
    }
  }


=======
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
>>>>>>> c21acf969f725f3f2900eabaf917c9b50ac624d0
  printf("%d", cnt);
}
