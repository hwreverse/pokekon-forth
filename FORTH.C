HPHP49-X,*� main(){
 char in[256],*out;
 while(1){
  putchar('>');
  gets(in);
  out=(char*)call(256,in);
  if(*out)puts(out);}}
