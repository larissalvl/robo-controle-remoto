# 🤖 Remote Controlled Robot via App

[Leia em Português](https://github.com/seu-usuario/seu-repositorio/blob/main/README.md)

A robot controlled by a mobile app via Bluetooth, developed with Arduino. The user controls the robot's direction in real-time through an app with directional buttons (forward, backward, left, right).

---

## 🎥 Demonstration

> 📹 *[Add video or GIF of the physical robot in action]*
> 🔗 *[Initial Tinkercad simulation - keyboard control](INSERT_YOUR_LINK_HERE)*
> ⚠️ There might be differences if the simulation has been modified by other users. See the original code in the repository.

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

## ⚙️ How it Works

1. The mobile app sends commands via Bluetooth to the HC-05/HC-06 module
2. The Arduino receives the commands and activates the motors according to the direction
3. The L298N Motor Driver controls the direction and speed of each motor

**Available Commands:**
| App Button | Robot Action |
|---|---|
| ▲ Forward | Both motors spin forward |
| ▼ Backward | Both motors spin backward |
| ◀ Left | Right motor forward, left motor stops |
| ▶ Right | Left motor forward, right motor stops |

---

## 🔄 Development Process

The project was built in two stages:

**1st stage - Proof of Concept (Tinkercad)**
Simulation of the car controlled by the computer keyboard, to validate the logic of motor activation and response to directional commands.

**2nd stage - Physical version with app control**
Based on the validated base code from the simulation, Bluetooth communication routines were added and the robot was physically assembled. The control was then done by the mobile application created in App Inventor.

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
