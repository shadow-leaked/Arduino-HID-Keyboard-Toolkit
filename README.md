# Arduino HID Keyboard Automation Toolkit


A **safe, consent‑driven, educational** Arduino framework for exploring USB HID keyboard automation without crossing into offensive or unauthorized behavior.


This toolkit is designed for:
- Accessibility input automation
- Demonstrations of USB HID behavior
- Teaching how HID typing works on Arduino boards
- Controlled macro automation
- Research on safe human‑in‑the‑loop HID interactions


It **does not** include or support malicious payloads, auto‑execution attacks, privilege escalation, or any form of unauthorized system control.


---


## ⚠️ Safety & Legal Notice
Before using this toolkit, read `docs/ETHICS_AND_LEGAL.md`.


By using this project, you acknowledge:
- You will **only use HID automation on systems you own** or where you have **explicit written permission**.
- You understand that HID devices can produce rapid input that may interfere with system behavior.
- All examples in this repository require **physical user consent** (a hardware button) before typing.


This toolkit is intentionally engineered to avoid misuse.


---


## ✨ Features
- Lightweight Arduino HID API (`ArduinoHID` library)
- Configurable typing delays
- Strong **Safe Mode** requiring a physical consent button
- Ready‑to‑use example scripts
- A sandbox **Host Test App** (Python/Tkinter) to safely receive typed input
- Thorough documentation in `docs/`


Supported boards include:
- Arduino Leonardo
- Arduino Micro
- Arduino R4 Minima/WiFi (with HID‑capable USB stack)
- Any board supporting the standard Arduino `Keyboard.h` library


---