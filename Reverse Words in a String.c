void reverseWords(char *s)
{
  char *word_begin = s;
  char *temp = s; 
  if(*temp==' '&&*++temp=='\0'){
      *s='\0';
      return;
      
  }
  *temp--;
  while( *temp!='\0' )
  {
    temp++;
    if (*temp == '\0')
    {
      rev(word_begin, temp-1);
    }
    else if(*temp == ' ')
    {
      rev(word_begin, temp-1);
      word_begin = temp+1;
    }
  } 
  
 
   
  rev(s, temp-1);

}
 
void rev(char *begin, char *end)
{
  char temp;
  while (begin < end)
  {
    temp = *begin;
    *begin++ = *end;
    *end-- = temp;
  }
}