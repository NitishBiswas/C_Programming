#include <stdio.h>
#include <stdlib.h>
int main()
{
    int Max[10][10], need[10][10], allocation[10][10], available[10], completed[10], safeSequence[10];
    int p, r, i, j, process, count = 0, temp;

    printf("Enter the no of processes : ");
    scanf("%d", &p);

    for(i = 0; i< p; i++)
        completed[i] = 0;

    printf("\nEnter the no of Resource types : ");
    scanf("%d", &r);

    printf("\nEnter the Allocated Resources for each process : ");
    printf("\nResources are: ");
    for(i = 0; i < r; i++)
        printf("%c ",i+65);
    for(i = 0; i < p; i++)
    {
        printf("\nProcess P[%d] : ",i);
        for(j = 0; j < r; j++)
            scanf("%d", &allocation[i][j]);
    }

    printf("\nEnter the Max Need Resources for each process : ");
    printf("\nResources are: ");
    for(i = 0; i < r; i++)
        printf("%c ",i+65);
    for(i = 0; i < p; i++)
    {
        printf("\nProcess P[%d] : ", i);
        for(j = 0; j < r; j++)
            scanf("%d", &Max[i][j]);
    }

    printf("\n\nEnter the Current Available Resources with OS : \n");
    for(i = 0; i < r; i++)
    {
        printf("%c = ",i+65);
        scanf("%d",&available[i]);
    }

    for(i = 0; i < p; i++)
        for(j = 0; j < r; j++)
            need[i][j] = Max[i][j] - allocation[i][j];

        do
        {
            printf("\nMax matrix:\tAllocation matrix:\n");
            for(i = 0; i < r; i++)
                printf("%c ",i+65);
            printf("\t\t");
            for(i = 0; i < r; i++)
                printf("%c ",i+65);
            printf("\n");

            for(i = 0; i < p; i++)
            {
                for( j = 0; j < r; j++)
                    printf("%d ", Max[i][j]);

                printf("\t\t");

                for( j = 0; j < r; j++)
                    printf("%d ", allocation[i][j]);

                printf("\n");
            }

            process = -1;

            for(i = 0; i < p; i++)
            {
                if(completed[i] == 0)
                {
                    process = i;
                    for(j = 0; j < r; j++)
                    {
                        if(available[j] < need[i][j])
                        {
                            process = -1;
                            break;
                        }
                    }
                }
                if(process != -1)
                    break;
            }

            if(process != -1)
            {
                printf("\nProcess P[%d] runs to completion!", process);
                safeSequence[count] = process;
                count++;
                for(j = 0; j < r; j++)
                {
                    available[j] += allocation[process][j];
                    allocation[process][j] = 0;
                    Max[process][j] = 0;
                    completed[process] = 1;
                }
            }
        }
        while(count != p && process != -1);

        if(count == p)
        {
            printf("\nThe system is in a safe state!!\n");
            printf("Safe Sequence : < ");
            for( i = 0; i < p; i++)
                printf("P[%d] ", safeSequence[i]);
            printf(">\n");
        }
        else
            printf("\nThe system is in an unsafe state!!");

}
