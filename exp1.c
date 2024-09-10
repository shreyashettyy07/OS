#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
 int main()
 {
 pid_t q;
 printf("Hello!It is Before fork\n\n");
 printf("PID=%d\n",getpid());
 q=fork();
 if(q<0)
 {
 printf("Error");
 }
 else
 if(q==0)
 {
 printf("I am CHild,having pid %d\n",getpid());
 }
 else
 {
 printf("I am a Parent\n");
 printf("My CHild is pid is %d\n",q);
 }
 printf("Good Bye!\n");
 return 0;
 }
 
