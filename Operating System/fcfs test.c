#include <stdio.h>

struct Process
{
    int process_id;
    int arrival_time;
    int burst_time;
    int waiting_time;
    int turnaround_time;
};

void calculate_times(struct Process processes[], int n)
{
    int current_time = 0;

    for (int i = 0; i < n; ++i)
    {
        // Calculate waiting time for the process
        processes[i].waiting_time = (current_time >= processes[i].arrival_time) ? (current_time - processes[i].arrival_time) : 0;

        // Update turnaround time for the process
        processes[i].turnaround_time = processes[i].waiting_time + processes[i].burst_time;

        // Update current time for the next process
        current_time += processes[i].burst_time;
    }
}

void display_results(struct Process processes[], int n)
{
    float total_waiting_time = 0, total_turnaround_time = 0;

    printf("\nProcess\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n");

    for (int i = 0; i < n; ++i)
    {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", processes[i].process_id, processes[i].arrival_time,
               processes[i].burst_time, processes[i].waiting_time, processes[i].turnaround_time);

        total_waiting_time += processes[i].waiting_time;
        total_turnaround_time += processes[i].turnaround_time;
    }

    float average_waiting_time = total_waiting_time / n;
    float average_turnaround_time = total_turnaround_time / n;

    printf("\nAverage Waiting Time: %.2f\n", average_waiting_time);
    printf("Average Turnaround Time: %.2f\n", average_turnaround_time);
}

int main()
{
    int n;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Process processes[n];

    for (int i = 0; i < n; ++i)
    {
        printf("Enter arrival time for process %d: ", i + 1);
        scanf("%d", &processes[i].arrival_time);

        printf("Enter burst time for process %d: ", i + 1);
        scanf("%d", &processes[i].burst_time);

        processes[i].process_id = i + 1;
    }

    // Perform FCFS scheduling
    calculate_times(processes, n);

    // Display results
    display_results(processes, n);

    return 0;
}
