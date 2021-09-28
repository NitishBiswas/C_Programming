#include <stdio.h>

int main()
{
    int burst_time[10], waiting_time[10], turnaround_time[10], n, i, j, temp, process[10];
    float avg_wt = 0, avg_tat = 0;

    printf("\n\tPlease enter the number of process: ");
    scanf("%d", &n);

    printf("\n\n\tEnter the burst time of processes:\n");
    for(i=1; i<=n; i++){
        printf("\tP[%d] burst time = ", i);
        scanf("%d", &burst_time[i]);
        process[i] = i;
    }

    //Sort processes in ascending order
    for(i=1; i<n; i++){
        for(j=i; j<=n; j++){
            if(burst_time[i] > burst_time[j]){
                temp = burst_time[i];
                burst_time[i] = burst_time[j];
                burst_time[j] = temp;

                temp = process[i];
                process[i] = process[j];
                process[j] = temp;
            }
        }
    }
    // Waiting time

    waiting_time[1] = 0;

    for(i=1; i<=n; i++){
        waiting_time[i+1] = waiting_time[i] + burst_time[i];
    }

    printf("\n\tThe waiting time of the processes:\n");
    for(i=1; i<=n; i++){
        printf("\tP[%d] = %d\n", process[i],waiting_time[i]);
        avg_wt+=waiting_time[i];
    }
    printf("\n\tAverage Waiting Time = %f\n", avg_wt/n);

    //TurnAround Time

    for(i=0; i<=n; i++){
        turnaround_time[i] = waiting_time[i] + burst_time[i];
    }

    printf("\n\tThe TurnAround time of the processes:\n");
    for(i=1; i<=n; i++){
        printf("\tP[%d] = %d\n", process[i], turnaround_time[i]);
        avg_tat += turnaround_time[i];
    }

    printf("\n\tAverage TurnAround Time = %f\n", avg_tat/n);
    return 0;
}
