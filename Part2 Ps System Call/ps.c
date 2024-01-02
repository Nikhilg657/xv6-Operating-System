#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc,char *argv[])     
{
    struct uproc *up=(struct uproc*)malloc(sizeof(struct uproc));
	for(int pid=1;pid<10000;pid++){
		if(getprocinfo(pid,up)==0){
			printf(1,"Name of the process is: %s\n",up->name);
			printf(1,"PID of process is: %d\n",up->pid);
			printf(1,"PPID of process is: %d\n",up->ppid);
			printf(1,"Size of process is: %d\n",up->sz);
			printf(1,"State of process is: %s\n",up->state);
			printf(1,"Channel is: %d\n",up->chan);
			printf(1,"Killed or not %d\n",up->killed);
			printf(1,"\n\n");
		}

	}
	
	
	exit();

}