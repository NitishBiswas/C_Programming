#include <stdio.h>

int main()
{
    int burst_time[10], waiting_time[10], turnaround_time[10], n, i, times, remain, done = 0, time_quantum, process[10];
    float avg_wt = 0, avg_tat = 0;

    printf("\n\tEnter the number of process: ");
    scanf("%d", &n);

    remain = n;

    printf("\n\n\tEnter the burst time of processes:\n");
    for(i=0; i<n; i++){
        printf("\tP[%d] = ", i);
        scanf("%d", &burst_time[i]);
        process[i] = burst_time[i];
    }

    printf("\tEnter the Quantum: ");
    scanf("%d", &time_quantum);

    times = 0;
    i = 0;

    while(remain != 0){
        if(burst_time[i] <= time_quantum && burst_time[i] > 0){
            times = times + burst_time[i];
            burst_time[i] = 0;
            done = 1;
        } else if(burst_time[i] > 0){
            times = times + time_quantum;
            burst_time[i] -= time_quantum;
        }
        if(burst_time[i] == 0 && done == 1){
            remain--;
            turnaround_time[i] = times;
            printf("\t%d\n", times);
            waiting_time[i] = turnaround_time[i] - process[i];
            done = 0;
        }
        if(i == n-1){
            i = 0;
        } else {
            i++;
        }
    }

    // Waiting time

    waiting_time[0] = 0;

    for(i=0; i<n; i++){
        printf("\tWaiting time of Process [%d] = %d\n", i+1, waiting_time[i]);
        avg_wt+=waiting_time[i];
    }

    printf("\n\tAverage Waiting Time = %f\n", avg_wt/n);

    //TurnAround Time

    for(i=0; i<n; i++){
        printf("\n\tThe TurnAround time of the Process [%d] = %d\n", i+1, turnaround_time[i]);
        avg_tat += turnaround_time[i];
    }

    printf("\n\tAverage TurnAround Time = %f\n", avg_tat/n);
    return 0;
}
