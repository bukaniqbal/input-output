#include<stdio.h> 
#include <fcntl.h> 
int main(int argc,char* argv[])
{ 
int fd, ed, sz, tz; 
char *c = (char *) calloc(100, sizeof(char)); 
  
fd = open(argv[1], O_RDONLY); 
if (fd < 0) { perror("r1"); exit(1); } 
  
sz = read(fd, c, 250); 
c[sz] = '\0'; 
 
  
ed = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644); 
if (ed < 0) 
{ 
    perror("r1"); 
    exit(1); 
} 
  
tz = write(ed, c, strlen(c)); 
  
close(ed); 

remove(argv[1]);

}
