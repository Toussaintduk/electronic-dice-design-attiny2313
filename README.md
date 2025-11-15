# Design and Implementation of an Electronic Dice using ATtiny2313

**University of Rwanda – Electrical Power Engineering**  
**Module:** TECHSKILLS – Y3 Electrical Power Engineering  
**Date:** 20 March 2025  
**Lecturer:** Prof. Nkurikiyezu Kizito  

---

## Project Summary

This project demonstrates the design and implementation of an **Electronic Dice** using the **ATtiny2313 microcontroller**. The system features seven LEDs arranged in a dice pattern and two push-button switches (**ROLL** and **RESET**) for control. Pressing the **ROLL** switch blanks the LEDs momentarily before displaying a random number (1–6), while the **RESET** switch turns all LEDs off.  

The project combines **hardware design, embedded programming, and simulation techniques**, providing hands-on experience in microcontroller-based systems.  

---

## System Flow

The electronic dice system follows this flow:

1. **Idle State** – All LEDs are OFF.  
2. **ROLL Switch Pressed** – LEDs blank for 1 second.  
3. **Random Number Generation** – The system generates a random number (1–6) using the ATtiny2313.  
4. **LED Display** – Corresponding dice pattern is displayed on the 7 LEDs.  
5. **RESET Switch Pressed** – All LEDs turn OFF, returning the system to the idle state.  

---

## Hardware Used

- **Microcontroller:** ATtiny2313  
- **LEDs:** 7 LEDs arranged as standard dice dots  
- **Switches:** ROLL and RESET push-buttons  
- **Resistors:** 900Ω current-limiting resistors for LEDs  
- **Power Supply:** 20V DC  

---

## Techniques & Tools

- **Embedded C Programming** with AVR Libc  
- **Random Number Generation** for dice simulation  
- **Switch Debouncing** and LED feedback  
- **Proteus Simulation** for virtual prototyping and verification  
- **Circuit Design & PCB Layout** for practical implementation  
- **Resistor Calculations** for safe LED operation  

---

## Conclusion

This project successfully demonstrates the use of the ATtiny2313 to simulate an electronic dice with random number generation, LED feedback, and switch control. It provides practical experience in **embedded systems design, microcontroller programming, and circuit simulation**, laying a solid foundation for future electronics and embedded systems work.

---
