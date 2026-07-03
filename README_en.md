# 🤖 Remote Controlled Robot via App

[Leia em Português](README.md)

A robot controlled by a mobile app via Bluetooth, developed with Arduino. The user controls the robot's direction in real-time through an app with directional buttons (forward, backward, left, right).

---

## 🎥 Demonstration

> 📹 [Video of the robot in action](https://github.com/user-attachments/assets/044ef72b-158d-496e-b9ac-c2ed1af44259)
> 🔗 [Initial Tinkercad simulation — keyboard control](https://www.tinkercad.com/things/6S6Vjp67ifz-4-direcoes-motores?sharecode=yL1eYiJb9YelSWaQWgfyzSe1TL27KY-4ayfizqLFgcg)

---

## 🛠️ Technologies and Components

**Hardware**
- Arduino Uno
- Bluetooth module HC-05/HC-06
- 2x DC Motors
- L298N Motor Driver (controls the motors)
- Robot chassis + wheels

**Software**
- Language: C++ (Arduino IDE)
- Mobile App: MIT App Inventor (Android)

---

## 🔄 Development Process

The project was built in two stages:

**Stage 1 — Proof of Concept (Tinkercad)**
Simulation of the car controlled by the computer keyboard, to validate the motor activation logic and response to directional commands.

**Stage 2 — Physical version with app control**
Based on the code validated in the simulation, Bluetooth communication routines were added and the robot was physically assembled. Control was then handled by the mobile app created in App Inventor.

---

## ⚙️ How It Works

1. The mobile app sends commands via Bluetooth to the HC-05/HC-06 module
2. The Arduino receives the commands and activates the motors according to the direction
3. The L298N Motor Driver controls the direction and speed of each motor

**Available commands:**
| App Button | Robot Action |
|---|---|
| ▲ Forward | Both motors spin forward |
| ▼ Backward | Both motors spin backward |
| ◀ Left | Right motor forward, left motor stopped |
| ▶ Right | Left motor forward, right motor stopped |

---

## 📁 Repository Structure

```
robo-controle-remoto/
├── codigo/
│   └── robo_bluetooth.ino   # Main Arduino code
├── app/
│   └── controle_robo.aia    # App Inventor file (importable)
└── README.md
```

---

## 🚀 How to Use

**For the robot:**
1. Assemble the circuit according to the Tinkercad simulation
2. Upload the `.ino` file to the Arduino via Arduino IDE
3. Pair the HC-05 module with your phone (default password: `1234`)

**For the app:**
1. Go to [MIT App Inventor](https://appinventor.mit.edu/)
2. Import the `.aia` file via *Projects > Import project*
3. Connect to the HC-05 Bluetooth and use the directional buttons

---

## 📚 Context

Project developed for the **Oriented Experimentation** course in the Computer Science program at Universidade de Fortaleza (Unifor), 1st semester of 2025.

Developed in pairs — responsible for **Arduino programming and mobile app development**.

---

## 👩‍💻 Author

**Larissa Vieira**
[LinkedIn](https://linkedin.com/in/larissalvl) · [Instagram @larissalvl](https://instagram.com/larissalvl)
---

## 📁 Repository Structure
remote-controlled-robot/
├── code/
│   └── bluetooth_robot.ino   # Main Arduino code. Contains the robot's control logic and Bluetooth communication.
├── app/
│   └── robot_control.aia     # App Inventor file (importable). Contains the control application project.
└── README.md                 # This file you are reading now! Main project documentation.

---

## 🚀 How to Use

**For the robot:**
1. Assemble the circuit according to the Tinkercad simulation
2. Upload the `.ino` file to the Arduino via Arduino IDE
3. Pair the Bluetooth module with your phone (default password: `1234`)

**For the app:**
1. Access [MIT App Inventor](https://appinventor.mit.edu/)
2. Import the `.aia` file in *Projects > Import project*
3. Connect to the Bluetooth of the HC-05/HC-06 and use the directional buttons

---

## 📚 Context

Project developed in the **Oriented Experimentation** course of the Computer Science program at the University of Fortaleza (Unifor), 1st semester of 2025.

Developed in pairs, with the following individual contributions:

- **Larissa Vieira:** 
  - Arduino programming (robot control logic and Bluetooth communication)
  - Development of the mobile control application (MIT App Inventor)
- **[Colleague's Name]:**
  - Physical assembly of the robot (chassis, motors, protoboard)
  - Testing and debugging of the integrated system

---

## 👩‍💻 Author

**Larissa Vieira**
[LinkedIn](https://linkedin.com/in/larissalvl) · [Instagram @larissalvl](https://instagram.com/larissalvl)
