# Lightweight Windows EDR Prototype

## Overview
A lightweight Endpoint Detection and Response (EDR) prototype developed for Windows. This project aims to explore kernel-mode telemetry collection and rule-based threat detection, specifically targeting common malicious behaviors.

## Architecture
- Kernel-mode Component: Utilizes Windows kernel callbacks (Process, Thread, Image Load) and Minifilters for file system monitoring.
- User-mode Component: A service that receives telemetry data and applies detection rules.

## Current Features (Work in Progress)
- [x] Process Creation Monitoring (PsSetCreateProcessNotifyRoutineEx)
- [x] Image Load Monitoring (PsSetLoadImageNotifyRoutine)
- [ ] File System Minifilter
- [ ] Registry Callbacks (CmRegisterCallback)
- [ ] Basic Rule Engine (User-mode)

## Project Status
This project is currently under active development as part of my academic and research portfolio. The goal is to document the process of building a functional EDR from scratch.

## Disclaimer
This tool is developed for educational and research purposes only. It is not intended for production use or malicious activities.
