# Motor Direction Control
This project demonstrates how to control the direction of a DC motor using an Arduino and a push button.

## Files
- `motor_controller.ino`: Arduino source code.
- `motor_controller.ino.hex`: Compiled HEX file for Proteus simulation.
- `motor_controller.dsn`: Proteus circuit design.

## Instructions
1. Upload the Arduino code to your microcontroller.
2. Simulate the circuit in Proteus using the provided files.


// Steps of project 


## Step 1: Required Components
In Proteus, search and add the following components:

1- Arduino Uno: This is your microcontroller.
2- H-Bridge IC (L298N) or equivalent transistors: Use NPN transistors like 2N2222 if you want to build an H-Bridge manually.
3- DC Motor: For motor control.
4- Push Button: To toggle motor direction.
5- Resistors: Use a 10kΩ resistor as a pull-down resistor for the push button.
6- Power Supply: Ensure you have a proper power source for the motor.


## Step 2: Circuit Diagram
1- Connect the H-Bridge to Arduino:  - Connect IN1 and IN2 of L298N to two digital pins of Arduino (D8 and D9).
                                     - Connect the motor terminals to the OUTPUT1 and OUTPUT2 of L298N.
                                     - Connect Enable A to 5V .

2- Connect the Push Button:  - One terminal of the button to a digital pin (D7) of the Arduino.
                             - The other terminal to GND.
                             - Add a 10kΩ pull-down resistor between the button and GND to prevent floating states.
                             
3- Power the Circuit:  - Connect the Arduino 5V pin to the logic supply of the H-Bridge.
                       - Provide an external power supply 12V to power the motor through the H-Bridge.


## Step 3: Complete Connections
Here’s an example of the connections:

Arduino Pins:
Pin D8 → IN1 
Pin D9 → IN2 
Pin D7 → Push Button.
Motor: Connect to H-Bridge outputs or H-Bridge middle nodes.
Power: Ensure proper connections for both logic and motor power.


## Step 4: Simulate in Proteus
1- Compile your Arduino code (provided above) in the Arduino IDE and upload the .hex file to the Arduino in Proteus.

2- Run the simulation:  - Test the default state of the motor.
                        - Test the motor’s reverse direction when you press the button.
