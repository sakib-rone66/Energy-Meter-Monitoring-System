<div align="center">

# ⚡ IoT-Based Energy Meter Monitoring System

### Real-Time Electricity Monitoring • IoT • Embedded Systems • ThingSpeak Cloud

An IoT-based smart energy monitoring system designed to measure electrical parameters in real time and provide remote visibility into electricity consumption through the ThingSpeak IoT cloud platform.

<br>

![ESP32](https://img.shields.io/badge/ESP32-Microcontroller-0D1117?style=for-the-badge&logo=espressif&logoColor=E7352C)
![IoT](https://img.shields.io/badge/IoT-Connected_System-0D1117?style=for-the-badge&logo=icloud&logoColor=00AEEF)
![ThingSpeak](https://img.shields.io/badge/ThingSpeak-IoT_Cloud-0D1117?style=for-the-badge&logo=mathworks&logoColor=E34F26)
![Embedded](https://img.shields.io/badge/Embedded-Systems-0D1117?style=for-the-badge&logo=c&logoColor=A8B9CC)
![Real Time](https://img.shields.io/badge/Real_Time-Monitoring-0D1117?style=for-the-badge&logo=speedtest&logoColor=00BFFF)

<br>

**Developed by Md. Sakib Al-Hasan**

</div>

---

# 📌 Project Overview

The **IoT-Based Energy Meter Monitoring System** is designed to monitor electrical energy usage and make consumption information remotely accessible through IoT connectivity.

The system collects electrical measurements using a **PZEM-004T energy-metering module**, processes the readings through an **ESP32 microcontroller**, and transmits monitoring data to **ThingSpeak** through Wi-Fi for cloud-based visualization and remote observation.

The project demonstrates the integration of:

- ⚡ Electrical energy measurement
- 🔌 Embedded hardware
- 🧠 ESP32-based data processing
- 📡 Wi-Fi connectivity
- ☁️ ThingSpeak IoT cloud integration
- 📊 Real-time monitoring
- 🌐 Remote data visualization

---

# 🎯 Project Objective

Traditional electricity meters generally require users to observe consumption information directly from the physical meter.

This project explores a connected monitoring approach where electrical measurements can be collected electronically, processed by an embedded controller, and transmitted to an IoT cloud platform for remote monitoring.

The primary objectives are:

- Measure important electrical parameters
- Monitor electricity consumption in real time
- Process measurement data using an embedded controller
- Transmit monitoring information through Wi-Fi
- Send energy data to ThingSpeak
- Visualize electrical measurements remotely
- Provide improved visibility into electricity usage
- Demonstrate an IoT-based smart energy monitoring architecture

---

# ✨ Key Features

```text
⚡ Real-Time Energy Monitoring
📈 Voltage Measurement
🔌 Current Measurement
💡 Power Monitoring
🔋 Energy Consumption Tracking
🧠 ESP32-Based Processing
📡 Wi-Fi Connectivity
☁️ ThingSpeak IoT Cloud Integration
📊 Cloud Data Visualization
🌐 Remote Energy Monitoring
🔧 Embedded System Integration
```

---

# 🏗️ System Architecture

```text
                 ELECTRICAL LOAD
                        │
                        ▼
               ┌─────────────────┐
               │    PZEM-004T    │
               │ Energy Metering │
               │     Module      │
               └────────┬────────┘
                        │
                        │ Electrical Measurements
                        ▼
               ┌─────────────────┐
               │      ESP32      │
               │ Microcontroller │
               └────────┬────────┘
                        │
                        │ Data Processing
                        ▼
               ┌─────────────────┐
               │      Wi-Fi      │
               │  Communication  │
               └────────┬────────┘
                        │
                        │ Internet
                        ▼
               ┌─────────────────┐
               │    ThingSpeak   │
               │    IoT Cloud    │
               └────────┬────────┘
                        │
                        ▼
               ┌─────────────────┐
               │     Remote      │
               │  Visualization  │
               └─────────────────┘
```

### Architecture Principle

> **Measure → Process → Connect → Upload → Visualize**

The architecture combines electrical measurement hardware, embedded processing, Wi-Fi communication, and cloud visualization to make electricity-consumption information remotely accessible.

---

# 🛠️ Technologies & Components

## 🧠 ESP32 Microcontroller

The **ESP32** acts as the primary processing and communication controller of the system.

Its responsibilities include:

- Reading electrical measurement data
- Processing collected values
- Communicating with the PZEM-004T
- Managing Wi-Fi connectivity
- Preparing monitoring data
- Transmitting data to ThingSpeak
- Supporting continuous energy monitoring

---

## ⚡ PZEM-004T Energy Metering Module

The **PZEM-004T** is used to obtain electrical measurements from the monitored electrical system.

The monitored parameters include:

```text
Voltage
Current
Power
Energy Consumption
```

The collected measurements are transferred to the ESP32 for processing and cloud transmission.

---

## 📡 Wi-Fi Connectivity

Wi-Fi connectivity enables communication between the ESP32 and the cloud monitoring platform.

```text
ESP32
  │
  ▼
Wi-Fi Network
  │
  ▼
Internet
  │
  ▼
ThingSpeak
```

This allows monitoring information to be transmitted without requiring users to access the physical energy meter directly.

---

## ☁️ ThingSpeak IoT Cloud

**ThingSpeak** is used as the IoT cloud platform for receiving and visualizing energy-monitoring data transmitted by the ESP32.

The integration enables:

- Cloud-based energy data collection
- Remote monitoring
- Real-time data visualization
- Electrical parameter tracking
- Internet-accessible monitoring
- Historical observation of transmitted measurements

The ESP32 collects measurements from the PZEM-004T and sends the processed data to ThingSpeak through the network connection.

---

# 🔄 System Workflow

```text
Electrical Load
      │
      ▼
Electrical Measurement
      │
      ▼
PZEM-004T
      │
      ▼
ESP32
      │
      ▼
Data Processing
      │
      ▼
Wi-Fi Communication
      │
      ▼
Internet
      │
      ▼
ThingSpeak IoT Cloud
      │
      ▼
Cloud Visualization
      │
      ▼
Remote Monitoring
```

The workflow creates a complete IoT monitoring pipeline from physical electrical measurements to remotely accessible monitoring information.

---

# 📊 Monitored Parameters

| Parameter | Purpose |
|---|---|
| **Voltage** | Monitors the electrical supply voltage |
| **Current** | Measures electrical current consumption |
| **Power** | Indicates electrical power usage |
| **Energy** | Tracks accumulated energy consumption |

Together, these measurements provide useful information for observing and understanding electricity usage.

---

# ☁️ Cloud Monitoring Architecture

ThingSpeak provides the cloud layer between the physical monitoring hardware and remote visualization.

```text
┌──────────────────────┐
│   Electrical System  │
└──────────┬───────────┘
           │
           ▼
┌──────────────────────┐
│      PZEM-004T       │
│ Energy Measurement   │
└──────────┬───────────┘
           │
           ▼
┌──────────────────────┐
│        ESP32         │
│ Processing + Wi-Fi   │
└──────────┬───────────┘
           │
           ▼
┌──────────────────────┐
│      ThingSpeak      │
│      IoT Cloud       │
└──────────┬───────────┘
           │
           ▼
┌──────────────────────┐
│       Charts &       │
│   Data Visualization │
└──────────┬───────────┘
           │
           ▼
┌──────────────────────┐
│   Remote Monitoring  │
└──────────────────────┘
```

This architecture demonstrates how IoT technology can extend a physical energy meter into a remotely accessible monitoring system.

---

# 🌐 IoT Monitoring Concept

The project demonstrates how a conventional energy-monitoring process can be extended through internet connectivity and cloud services.

```text
Physical Electricity Usage
           ↓
Electrical Measurement
           ↓
Embedded Processing
           ↓
Network Communication
           ↓
ThingSpeak IoT Cloud
           ↓
Cloud Visualization
           ↓
Remote Energy Monitoring
```

Instead of limiting energy information to a locally accessible physical meter, the system allows measurements to be transmitted to the cloud and observed remotely.

---

# 🔌 Hardware-to-Cloud Pipeline

One of the main engineering concepts demonstrated by this project is the complete flow of information from physical hardware to cloud visualization.

```text
REAL WORLD
    │
    ▼
Electrical Load
    │
    ▼
PZEM-004T
    │
    ▼
ESP32
    │
    ▼
Wi-Fi
    │
    ▼
Internet
    │
    ▼
ThingSpeak
    │
    ▼
Visualization
    │
    ▼
USER
```

This creates a practical example of **hardware-software-cloud integration** within an IoT system.

---

# 💡 Applications

The system concept can be applied to areas such as:

- Residential energy monitoring
- Laboratory energy analysis
- Small-scale smart energy systems
- Educational IoT projects
- Electrical consumption studies
- Remote equipment monitoring
- Energy-awareness applications
- Smart electricity monitoring
- Connected electrical systems

---

# 🎓 Engineering Concepts Demonstrated

Developing this project provided practical exposure to:

```text
IoT System Design
Embedded Systems
ESP32 Development
PZEM-004T Integration
Electrical Data Acquisition
Microcontroller Programming
Wi-Fi Communication
ThingSpeak IoT Cloud
Cloud Data Visualization
Real-Time Monitoring
Remote Data Monitoring
Hardware–Software Integration
Hardware-to-Cloud Communication
```

---

# 📁 Repository Contents

The repository contains project materials related to the implementation and documentation of the system.

```text
Energy-Meter-Monitoring-System/
│
├── Source Code
│
├── Project Documentation
│
├── Originality / Supporting Documentation
│
└── README.md
```

---

# 🚀 Future Improvements

Possible future enhancements include:

- Historical energy-consumption analysis
- Improved monitoring dashboards
- Usage alerts and notifications
- Energy-consumption reports
- Multi-device monitoring
- Advanced cloud visualization
- Energy usage analytics
- Threshold-based alerts
- Mobile monitoring interface
- Extended smart-energy functionality

---

# 👨‍💻 Developer

<div align="center">

## Md. Sakib Al-Hasan

### Software Developer | Full-Stack Developer | Backend Developer

**B.Sc. in Computer Science & Engineering**

<br>

[![LinkedIn](https://img.shields.io/badge/LinkedIn-Let's_Connect-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/r-talukder66/)
[![GitHub](https://img.shields.io/badge/GitHub-Follow_Me-181717?style=for-the-badge&logo=github&logoColor=white)](https://github.com/sakib-rone66)
[![Email](https://img.shields.io/badge/Email-Contact_Me-EA4335?style=for-the-badge&logo=gmail&logoColor=white)](mailto:info.sakib.bluesec@gmail.com)

</div>

---

<div align="center">

# ⚡ Measure • Connect • Monitor • Improve

### From Electrical Measurements to Cloud-Based Energy Monitoring

**ESP32 • PZEM-004T • Wi-Fi • ThingSpeak • IoT**

<br>

⭐ **Thanks for exploring the IoT-Based Energy Meter Monitoring System**

</div>
