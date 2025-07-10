# Nucleo/STM32 LightsControl Application 

## 📑 **Opis projektu**

Ten projekt implementuje warstwową aplikację embedded (uruchamianą na płytce Nucleo STM32F303RE), wzorowaną na strukturze AUTOSAR, w której:
- Projekt zorganizowany jest w warstwy: MCAL, BSW, RTE, APP oraz ProjectConfig, aby zachować warstwowy układ architektury i umożliwić dalszy rozwój.
- Uruchamiane są proste zadania na płytce jak np: kontrola diody LED na płytce.

- Projekt powstał jako pomoc naukowa do kursu "C dla zaawasowanych" by UCEGOSU: https://cdlazaawansowanych.pl/
- Konfiguracje płytki zaczerpnięte z kursu youtube "STM32 na Resjestrach" by msalamon: https://www.youtube.com/@msalamon/playlists
- Koncepcja wartsw aplikacji na podstawie strony: https://yoginsavani.com/understanding-autosar-architecture-a-guide-to-automotive-software-integration/

---

## 🔧 **Struktura katalogów**
<pre lang="markdown"> <code> ``` 
Application/
├── APP/
│ └── Swc_LightsControl.c/.h # Software Component: logika sterowania LED
│
├── RTE/
│ └── LightsControl/
│ └── Rte_LightsControl.c/.h # Runtime Environment: abstrakcja wywołań SWC ↔ BSW
│
├── Core/
│ ├── Inc/
│ │ └── main.h # Deklaracje funkcji main, EcuM
│ └── Src/
│ └── main.c # Punkt wejścia programu (startup, EcuM_Init)
│ └── system.c # System clock setup
│ └── syscalls.c # Syscalls do linkera
│
├── BSW/
│ ├── DET/
│ │ └── ErrorHandler.c/.h # Diagnostic Event Manager / Development Error Tracer
│ └── GPIO/
│ └── Gpio.c/.h # Board Support Wrapper dla GPIO
│
├── MCAL/
│ ├── Dio.c/.h # Microcontroller Abstraction Layer dla Digital IO
│ └── PlatformDrivers/
│ └── STM32F303RE/
│ ├── Dio_Stm32.c/.h # Driver STM32 HAL-like dla GPIO
│ └── CMSIS/ # Pliki CMSIS, startup, linker scripts
│
├── ProjectConfig/
│ ├── ProjectConfig.h # Globalne definicje projektu
│ ├── Gpio_Cfg.c/.h # Mapowanie sygnałów GPIO do pinów MCU
``` </code> </pre>

## ⚙️ **Funkcjonalność**

✅ Inicjalizacja hardware i konfiguracja GPIO  
✅ Mapowanie abstrakcyjnych sygnałów do fizycznych pinów w `Gpio_Cfg`  
✅ Sterowanie diodą LED przez SWC `LightsControl`  
✅ Struktura AUTOSAR-like umożliwiająca dalszy rozwój projektu:
- dodanie kolejnych SWC (np. RelayControl)  
- implementację EcuM i BswM  
- rozszerzenie o CAN stack lub FreeRTOS

---

## 🚀 **Budowanie projektu**

1. Otwórz w preferowanym IDE (np. STM32CubeIDE, VSCode + PlatformIO)  
2. Skonfiguruj target MCU: **STM32F303RE**
3. Zbuduj projekt
4. Wgraj bin/elf na płytkę Nucleo F303RE

---

## 🧩 **Zależności**

- [STM32Cube HAL Drivers]  
- [CMSIS Core STM32F3]  
- Kompilator: **arm-none-eabi-gcc** lub toolchain STM32CubeIDE

---

## 📸 **Demo**

> **Pierwsza wersja**: zapalanie diody LED podłączonej do PA5.  
> Kolejne wersje obejmą:
> - zarządzanie stanami ECU (EcuM)
> - obsługa przycisku
> - relay control SWC

---

## 📝 **Autor**

👤 **[bartekzone]**  
🔗 []

