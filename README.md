# Health Data Management System

This program allows users to manage and analyze health data. Users can add their health data, view their own reports, view reports for all users, and analyze reports. 

## Features

- **Add Data:** Users can input their health data, including username, blood sugar level, blood pressure level, and heart rate, and store this information in a file.
- **View User Report:** Users can view their own health report by entering their username.
- **View All User Reports:** Users can view reports for all users stored in the file.
- **Analyze User Report:** Placeholder function for analyzing a user's health report. Currently, it only displays a message indicating that it's under development.

## How to Build the Program

### Step 1: Set up your development environment

Ensure you have a C++ compiler installed on your system. Options include GCC for Linux, MinGW for Windows, or Xcode Command Line Tools for macOS.

### Step 2: Create a new C++ source file

1. Copy the provided C++ code into a new file with a `.cpp` extension, for example, `health_monitor.cpp`.

### Step 3: Compile the program

1. Open a terminal or command prompt.
2. Navigate to the directory where you saved `health_monitor.cpp`.
3. Use the appropriate compiler command to compile the program. For example, with GCC on Linux, you can use the command: `g++ health_monitor.cpp -o health_monitor`.

### Step 4: Run the program

1. After successful compilation, execute the program to interact with it. On Linux, you can run the program by typing `./health_monitor` in the terminal.

## How to Use

1. **Choose an Option**: Upon running the program, you'll be presented with a menu displaying various options:
    - **Add data**: Input your health data to store it in a file named "storage.txt".
    - **View user report**: Enter your username to view your own health report.
    - **View all user reports**: View reports for all users stored in the file.
    - **Analyze user report**: Placeholder for future functionality.
    - **Exit**: Select this option to exit the program gracefully.

2. **Follow Prompts**: After choosing an option, follow the on-screen prompts to input data, select a username, or navigate through the menu.

3. **Manage Health Data**: Utilize the program to manage and analyze health data efficiently.

## Dependencies

- C++ standard libraries

## Notes

- Health data is stored in a file named "storage.txt".
- This program is a basic implementation and may be expanded or enhanced for specific use cases.
