SUMMARY:

📄 Project Report: Potentiometer-Controlled Buzzer Frequency
🔧 Hardware Components
Arduino Board

Buzzer connected to digital pin 8

Potentiometer connected to analog pin A3

🧠 Objective
To generate a variable frequency square wave using a buzzer, where the frequency is controlled by the position of a potentiometer. The buzzer's pulse width (and thus pitch) is adjusted dynamically based on analog input from the potentiometer.

⚙️ Code Summary
1. Initialization (setup()):
Begins serial communication at 9600 bps.

Sets the buzzer pin (buzzPin = 8) as OUTPUT.

Sets the potentiometer pin (potPin = A3) as INPUT.

2. Main Logic (loop()):
Continuously reads the analog value from the potentiometer.

If the potentiometer value (potVal) is less than 1023, it:

Maps the analog value to a buzzer pulse width using the formula:
buzzTime = 60 + (potVal * 9.71652)

Uses digitalWrite() to turn the buzzer on and off with delays based on buzzTime, creating a variable frequency sound.

Prints the current potentiometer value and buzzTime to the Serial Monitor for monitoring.

📈 Formula Used

buzzTime = 60 + (potVal * 9.71652)
This formula dynamically adjusts the buzzer's pulse duration based on the analog input.
