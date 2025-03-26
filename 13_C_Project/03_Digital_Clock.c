/*
Project Name: Digital Clock
Author Name:  Sagar More
Description:  This program displays the current time and date, updating every second.
              The user can choose between a 12-hour or 24-hour time format.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> // For sleep()

// Function Prototypes
void fill_time(char*, int);  // Fills the buffer with the current time based on format
void fill_date(char*);       // Fills the buffer with the current date
int input_format();          // Takes user input for time format selection
void clear_screen();         // Clears the terminal screen

int main() {
  char time[50], date[100];
  int format = input_format(); // Get the user's preferred time format

  while (1) { 
    fill_time(time, format); // Get current time
    fill_date(date);         // Get current date
    clear_screen();          // Clear the screen for a refreshing display
    printf("Current Time: %s\n", time);
    printf("Date: %s\n", date);
    sleep(1); // Sleep for 1 second to update the display
  }
  return 0;
}

// Clears the terminal screen based on the operating system
void clear_screen() {
  #ifdef _WIN32
    system("cls");   // Windows clear screen command
  #else
    system("clear"); // Linux/macOS clear screen command
  #endif  
}

// Asks the user for their preferred time format
int input_format() {
  int format;
  printf("\nChoose the time format: ");
  printf("\n1. 24 Hour format");
  printf("\n2. 12 Hour format (default)");
  printf("\nMake a choice (1/2): ");
  scanf("%d", &format);
  return format; // Returns the chosen format
}

// Retrieves the current date and stores it in the buffer
void fill_date(char* buffer) {
  time_t raw_time;
  struct tm *current_time;

  time(&raw_time); // Get the current time
  current_time = localtime(&raw_time); // Convert to local time format
  strftime(buffer, 100, "%A %B %d %Y", current_time); // Format: Day Month Date Year
}

// Retrieves the current time based on the chosen format
void fill_time(char* buffer, int format) {
  time_t raw_time;
  struct tm *current_time;

  time(&raw_time); // Get the current time
  current_time = localtime(&raw_time); // Convert to local time format
  
  if (format == 1) {
    strftime(buffer, 50, "%H:%M:%S", current_time); // 24-hour format
  } else {
    strftime(buffer, 50, "%I:%M:%S %p", current_time); // 12-hour format with AM/PM
  }
}
