# ESP8266 Relay Module Project

#### Project Overview
This project demonstrates how to control a relay module using an ESP8266 microcontroller. A relay is an electromechanical switch that allows low-power circuits to control high-power devices. The ESP8266 will toggle the relay state on and off in intervals, showcasing basic control over an external load.

#### Components Needed
- **ESP8266 Microcontroller**
- **Relay Module**
- **Jumper Wires**

#### Block diagram


#### Circuit Setup
1. **Connecting the Relay Module to ESP8266:**
   - Connect the control input pin of the relay module to GPIO pin D1 on the ESP8266.
   - Ensure a common ground (GND) connection between the ESP8266 and the relay module.
   - The relay module typically requires a separate power source for its load side (not shown in basic setup).

#### Instructions
1. **Setup:**
   - Initialize serial communication at a baud rate of 9600 for debugging purposes.
   - Set the relay pin as an output using `pinMode()`.

2. **Operation:**
   - In the `loop()` function, toggle the relay state:
     - Set the relay pin `HIGH` to turn the relay ON (close the switch).
     - Print "Relay turned ON" to the Serial Monitor.
     - Delay for 2 seconds.
     - Set the relay pin `LOW` to turn the relay OFF (open the switch).
     - Print "Relay turned OFF" to the Serial Monitor.
     - Delay for 2 seconds.
   - Repeat this cycle indefinitely.

#### Applications
- **Home Automation:** Control lights, fans, or other appliances remotely.
- **Industrial Automation:** Manage high-power devices based on sensor inputs.
- **Security Systems:** Integrate with alarms or access control systems.

#### Notes
- **Relay Module:** Ensure the relay module used supports the voltage and current requirements of your load.
- **Serial Output:** Use the Serial Monitor to debug and monitor the relay state changes.
- **Safety:** Properly isolate and protect high-voltage circuits and ensure correct wiring practices.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 Relay Module](https://projectslearner.com/learn/esp8266-relay-module)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner