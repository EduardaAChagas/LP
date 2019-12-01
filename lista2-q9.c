  char str[10];
  strcpy(str,"aduarda");
  for(int i=0;i<strlen(str);i++){
    if('a'<=str[i] && str[i]<y'z')
      str[i]-=32;
  }
  printf("%s\n",str);