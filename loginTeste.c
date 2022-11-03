#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char login[30];
  char password[30];
}pessoa;pessoa p[1];

int main(){
  char login[30];
  char password[30];

  
  strcpy(p[0].login, "aecio");
  strcpy(p[0].password, "123");
  
  printf("\nLogin");
  scanf("%s", login);
  printf("\n\tsenha");
  scanf("%s", password);

  if ((strcmp(login,p[0].login)==0) || (strcmp(password,p[0].password)==0)){
    printf("Usuário logado");
  }else{
    printf("Login e/ou senha estão errados");
  }
  return 0;
}
