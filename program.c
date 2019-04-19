#include<stdio.h>

int main()

{

int counted,number,t_time,rem,flag=0,quantum;

int waiting=0,turnaround=0,arrival_time[10],burst_time[10],remaining_time[10];
  
printf("Enter Total Process:\t ");

scanf("%d",&number);

rem=number;

for(counted=0;counted<number;counted++)

{

printf("Enter Arrival Time and Burst Time for Process Process Number %d :",counted+1);

scanf("%d",&arrival_time[counted]);

scanf("%d",&burst_time[counted]);

remaining_time[counted]=burst_time[counted];

}

printf("Enter Time Quantum:\t");



}
