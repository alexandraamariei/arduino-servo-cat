# arduino-servo-cat
An Arduino-based robotic cat using servo motors to simulate leg and head movement(180 degrees).
# Robotic Cat Using Servo Motors 
This is an Arduino project simulating a robotic cat. The cat's legs and head are controlled by 5 servo motors.

# Features
- 5 servo motors: head + 4 legs
- Oscillating movement left and right
- Smooth return to center after each move

# Hardware Used
- Arduino Uno
- 5x SG90 servo motors
- Breadboard + jumper wires
- cardboard frame

# How It Works
The potentiometer reads values from analog input A0. That value is used to control the delay (movement speed). The servos move the head and legs to simulate a walking or turning cat.

# Code
See [`servo_cat.ino`](servo_cat.ino) for full Arduino source code.

# Demo 
![Robotic Cat Demo](videopisica-ezgif.com-video-to-gif-converter.gif)


