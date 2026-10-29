# Lightweight Windows EDR Prototype

## 📌 Overview
A lightweight Endpoint Detection and Response (EDR) prototype developed for Windows. This project aims to explore kernel-mode telemetry collection and rule-based threat detection, specifically targeting common malicious behaviors such as process injection and unauthorized execution.

## 🏗️ Architecture
- Kernel-mode Component (Driver): Utilizes Windows kernel callbacks (Process, Thread, Image Load) and Minifilters for file system monitoring.
- User-mode Component (Service): A service that receives telemetry data from the kernel driver and applies detection rules.

## 🚧 Current Features (Work in Progress)
- [x] Basic Driver Skeleton: Successfully implemented DriverEntry and DriverUnload routines.
- [ ] Process Creation Monitoring: Implementing PsSetCreateProcessNotifyRoutineEx.
- [ ] Image Load Monitoring: Detecting DLL injections via PsSetLoadImageNotifyRoutine.
- [ ] File System Minifilter: Monitoring file operations.
- [ ] Registry Callbacks: Using CmRegisterCallback to detect persistence mechanisms.
- [ ] User-mode Rule Engine: Developing a basic CLI to process telemetry and alert on suspicious activities.

## 🛠️ Build Instructions
To build this driver, you need:
- Visual Studio 2022 (with Desktop development with C++ workload)
- Windows Driver Kit (WDK)
- Target Architecture: x64
- Configuration: Debug / Release

## ⚠️ Disclaimer
This project is developed strictly for educational and research purposes. It is not intended for production use. Any testing of offensive capabilities should be done in an isolated virtual environment.
