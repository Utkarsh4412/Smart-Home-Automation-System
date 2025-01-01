# Smart Home Automation System

A C++ project simulating a smart home automation system to control devices like lights and fans. It features temperature monitoring, energy usage calculation, and state saving.

## Features
- **Toggle Lights/Fans**: Turn devices ON/OFF interactively.
- **Temperature Monitoring**: Simulate real-time temperature changes.
- **Energy Usage Calculation**: Estimate energy consumption of devices.
- **State Persistence**: Save device states to a file for continuity.

## Project Structure

📂 SMART_HOME_APPLAINCE  
├── **main.cpp** : Contains the main program logic.  
├── **devices.cpp** : Implements device-related functions.  
├── **devices.h** : Header file for device declarations.  
├── **utility.cpp** : Helper functions for file handling and calculations.  
├── **utility.h** : Header file for utility declarations.  
├── **data/** : Directory for saving persistent states.  
│   └── **state.txt** : Stores light and fan states.  

## Setup Instructions
1. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/Smart-Home-Automation-System.git
   cd Smart-Home-Automation-System
   ```
2. Compile the project:
   ```bash
   g++ main.cpp devices.cpp utility.cpp -o main
   ```
3. Run the program:
   ```bash
   ./main
   ```

## Sample Output
```plaintext
====== Smart Home Automation System ======
1. Turn Light On/Off
2. Turn Fan On/Off
3. Display Current Temperature
4. View Energy Usage
5. Save and Exit
Enter your choice: 
```

## Future Enhancements
- Add real-world hardware control using Arduino or Raspberry Pi.
- Implement a GUI for better user experience.
- Add Bluetooth or Wi-Fi-based remote control.

## Technologies Used
- **C++**: Main programming language.
- **File Handling**: To save and retrieve device states.
- **Random Number Generation**: For simulating temperature changes.
