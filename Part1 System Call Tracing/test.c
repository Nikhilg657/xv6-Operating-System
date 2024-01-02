#include "types.h"
#include "stat.h"
#include "user.h"
    
 //passing command line arguments 
    
int main(int argc, char *argv[]) 
{ 
  printf(1, "My first xv6 program learnt at GFG\n"); 
  int pid=fork();
  if(pid<0)
  {
    printf(1,"fork failed");
  }
  else if(pid==0)
  {
    printf(1, "You are in child process\n");
  }
  else if(pid>0)
  {
    printf(1,"you are in parent process\n");
  }
  exit(); 
} 