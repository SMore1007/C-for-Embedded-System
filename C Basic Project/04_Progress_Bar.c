/*
Project Name: Task Bar Progress Simulation
Author Name:  Sagar More
Description: This program simulates multiple tasks progressing over time,
             displaying their progress bars dynamically in the terminal.
*/

#include <stdio.h>
#include <unistd.h> // For sleep function
#include <stdlib.h>
#include <time.h>

// Constants
#define MAX_TASKS 5   // Maximum number of tasks
#define BAR_LENGTH 50 // Length of the progress bar

// Structure to hold task information
typedef struct {
    int id;        // Task ID
    int progress;  // Current progress percentage
    int step;      // Random step increment for progress
} Task_type;

// Function prototypes
void print_bar(Task_type task);
void clear_screen();

int main() {
    srand(time(NULL)); // Seed the random number generator
    
    Task_type tasks[MAX_TASKS]; // Array of tasks
    
    // Initialize tasks with unique IDs and random step values
    for (int i = 0; i < MAX_TASKS; i++) {
        tasks[i].id = i + 1;
        tasks[i].progress = 0;
        tasks[i].step = rand() % 5 + 1; // Random step between 1 and 5
    }
    
    int task_incomplete = 1; // Flag to track incomplete tasks
    
    // Loop until all tasks reach 100%
    while (task_incomplete) {
        clear_screen(); // Clear screen before updating progress bars
        task_incomplete = 0; // Assume all tasks are complete initially
        
        for (int i = 0; i < MAX_TASKS; i++) {
            tasks[i].progress += tasks[i].step; // Increase progress
            
            if (tasks[i].progress < 100) {
                task_incomplete = 1; // At least one task is incomplete
            } else {
                tasks[i].progress = 100; // Cap progress at 100%
            }
            
            print_bar(tasks[i]); // Print the progress bar for the task
        }
        
        sleep(1); // Pause for 1 second before updating
    }
    
    printf("\nAll Tasks are Completed\n"); // Completion message
    return 0;
}

// Function to print a task's progress bar
void print_bar(Task_type task) {
    int bar_to_show = task.progress * BAR_LENGTH / 100; // Calculate filled bar length
    
    printf("\nTask %d: [", task.id);
    for (int i = 0; i < BAR_LENGTH; i++) {
        if (i < bar_to_show) {
            printf("="); // Completed portion
        } else {
            printf(" "); // Remaining portion
        }
    }
    printf("] %d%%", task.progress); // Display percentage
}

// Function to clear the terminal screen based on the operating system
void clear_screen() {
    #ifdef _WIN32
        system("cls");  // Windows command to clear screen
    #else
        system("clear"); // Linux/macOS command to clear screen
    #endif 
}