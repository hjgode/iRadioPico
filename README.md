# iRadioPico für Raspberry Pico / Pico W (RP2040)

Ein Softwarebaukasten für den Aufbau neuer Radios oder Umbau alter Radios zu einem Internetradio mit Raspberry Pico und Pico W auf Arduino Basis.

Das iRadioPico ist eine weitere Portierung des iRadio-Baukastens, welchen es bereits für verschiede Plattformen gibt:

* für ESP32 https://github.com/radiolab81/iRadioMini
* für Raspberry SoC https://github.com/radiolab81/iRadio
* für Android https://github.com/radiolab81/iRadioAndroid

## Unterstützte Boards:

Das iRadioPico wurde primär für Raspberry Pico und Pico W (die Wifi-Variante) entwickelt 

![picos](https://github.com/radiolab81/iRadioPico/blob/main/pics4www/four_picos.jpg)

unterstützt aber auch die vielen anderen Nachbauten und Boards mit der RP2040 MCU.

Die Netzwerkanbindung des iRadioPico erfolgt bei den W (wireless)-Varianten der MCU wahlweise über WiFi oder einem zusätzlichen Ethernetmodul. Bei den WiFi-losen Varianten unterstützen wir die Netzwerkanbindung direkt über ein ENC28J60, W5100 oder W5500 Ethernetmodul.

![eth](https://github.com/radiolab81/iRadioPico/blob/main/pics4www/ethboards.jpg)

## Steuerung des iRadioPico durch:

Programmumschaltung zum Beispiel mit (Micro-)Taster, Inkrementaldrehgeber/ Drehimpulsgeber, Potentiometer/Preomat ,

über elementaren httpd-Webserver 

![httpd](https://github.com/radiolab81/iRadioPico/blob/main/pics4www/httpd.jpg)

oder Gestenerkennung (PAJ7620U2-Sensor) wodurch auch die berührungslose Bedienung
ermöglicht wird.

![gesture](https://github.com/radiolab81/iRadio/raw/master/pics4www/Gestenerkennung.jpeg)

Mit dem PAJ7620U2-Sensor versteht das iRadioPico verschiedene Gesten und kann darauf mit bestimmten Aktionen (Programmumschaltung, Lautstärkeänderung, An/Aus, ...) reagieren. 
Es werden folgende Gesten erkannt:

    Hand nach links
    Hand nach rechts
    Hand nach oben
    Hand nach unten
    Hand auf Sensor zubewegen
    Hand von Sensor wegbewegen
    Hand vor Sensor im Uhrzeigersinn
    Hand vor Sensor gegen Uhrzeigersinn
    Wellenförmige Bewegung vor dem Sensor

Die Erkennungsreichweite des Sensors beträgt zwischen 5 und 20 cm, hinter Skalenglas oder abgedunkelter Rauchglasskale wird die Reichweite etwas gedämpft. Die Erkennung erfolgt mittels IR-Licht und einem Sensorarray (ähnlich einer kleinen Kamera) und der Nutzer sollte die korrekte Ausführung der Gesten etwas "erlernen". Hier ein kurzes Demovideo https://youtube.com/shorts/Qq4KsmVGSnA 

Weitere Steuerungsszenarios sind denkbar und leicht umsetzbar.

Diese Steuerung zur Programmumschaltung, Lautstärkenänderung usw. wird wie in den anderen iRadio Baukästen als "gpiod" Daemon/Prozess bezeichnet.

## Unterstützte Displays für Nutzerschnittstelle (displayd):
Democode vorhanden für:
- HD44780-kompatible Displays (auch über I2C mit PCF8574/5)

![HD44780](https://github.com/radiolab81/iRadioPico/blob/main/pics4www/i2clcd.jpg)

- über U8g2 (U8g2 is a monochrome graphics library for embedded devices.)

 SSD1305, SSD1306, SSD1309, SSD1316, SSD1322, SSD1325, SSD1327, SSD1329, SSD1606, SSD1607, SH1106, SH1107, SH1108, SH1122, T6963, RA8835, LC7981, PCD8544, PCF8812, HX1230, UC1601, UC1604, UC1608, UC1610, UC1611, UC1617, UC1701, ST7511, ST7528, ST7565, ST7567, ST7571, ST7586, ST7588, ST75256, ST75320, NT7534, ST7920, IST3020, IST7920, LD7032, KS0108, KS0713, SED1520, SBN1661, IL3820, MAX7219 (siehe https://github.com/olikraus/u8g2/wiki/u8g2setupcpp für eine vollständige Liste)

![u8g2](https://github.com/radiolab81/iRadioPico/blob/main/pics4www/ssd1306.jpg)

- weitere zahlreiche Controller über Arduino_GFX lib
  siehe https://github.com/moononournation/Arduino_GFX#currently-supported-display-wiki

![ili9341](https://github.com/radiolab81/iRadioPico/blob/main/pics4www/vu.jpg) 

*displayd mit aktivierter VU-Meter Funktion des VS1053*

Durch die Einbettung des iRadioPico ins Arduino-Ökosystems stehen viele weitere Bibliotheken zur Ansteuerung von Displays zur Verfügung.

Das besonderes Highlight, die Simulation photorealistischer Nachbildungen von Senderskalen alter Radios, ist auch beim iRadioPico vertreten.

![sim](https://github.com/radiolab81/iRadioPico/blob/main/pics4www/babymetz.jpg)

Durch den Einsatz der im RP2040 integrierten RTC (Echtzeituhr) sind auch Umsetzungen als Radiowecker denkbar. Die RTC wird dabei über einen NTP-Server synchronisiert, Weckalarme können das Radio aus dem Standby-Modus holen.

*Im iRadioPico enthaltende Demoanwendung ClockRadio mit NTP Syncronisation, Standby-Screen und Weckerfunktion*
![clockradio1](https://github.com/radiolab81/iRadioPico/blob/main/pics4www/standbyscreen.jpg) 
![clockradio2](https://github.com/radiolab81/iRadioPico/blob/main/pics4www/httpd_alarms.jpg)


## Unterstützte Audio-DACs:

Standardmäßig ist die Audioausgabe zur Zeit über den weitverbreiteten und preiswerten VS1053 Hardwaredekoder/DSP vorgesehen, der Player ist jedoch für zahlreiche Softwarecodecs und I2S-DACs (Hardware/Software) offen. Tests mit den "AudioTools" von Phil Schatzmann https://www.pschatzmann.ch/home/2023/02/28/arduino-audiotools-esp32-vs-rp2040-pico-w/ wie auch einer angepassten Version der ESP8266AudioLib von Earle F. Philhower https://github.com/earlephilhower/ESP8266Audio verliefen sehr erfolgreich! Auch unser eigener, aber nicht mehr weiterentwickelter, Codecpack lief ohne Übertaktung der MCU (133 MHz Systemtakt) bei MP3/AAC und hohen Bitraten bereits ohne Aussetzer! 

Die Entwicklung auf dem Gebiet der Softwarecodecs ist im Moment sehr dynamisch, speziell für den RP2040, deshalb haben wir uns noch nicht für **den einen** Lieblingscodec entschieden! Spielen Sie selbst mal ein bisschen damit herum!

Da der Pico mit seinem PIO-System sehr gut Schnittstellen und DACs darstellen kann (fast so gut wie mancher FPGA), ist das iRadioPico, neben der Codec-Entwicklung/Anpassung, auch eine tolle Spielwiese für eigene Experimente in diese Richtungen. ->

https://github.com/malacalypse/rp2040_i2s_example 

https://www.elektronik-labor.de/Raspberry/Pico13.html


## Installation:

Installieren Sie die Arduino-IDE für Ihr Betriebssystem. Sie erhalten die Arduino-Entwicklungsumgebung entweder aus dem Paketsystem der verwendeten Linux-Distribution oder über https://www.arduino.cc/en/software .

Installieren Sie danach den RP2040-Core für den Raspberry Pico wie hier https://github.com/earlephilhower/arduino-pico oder hier https://github.com/radiolab81/arduino-pico beschrieben.

Installieren Sie dann über die Bibliotheksverwaltung der Arduino-Entwicklungsumgebung noch die Adafruit_VS1053 Bibliothek. Weitere Bestandteile des iRadioPico erfordern ggf. zusätzliche LIBs, wie die Arduino_GFX, U8G2 oder LiquidCrystal_PCF8574. 

Nach dem Laden der iRadioPico.ino sollten Sie dann eine erste Version des iRadioPico bauen können. Weitere Einstellungen wie den Netzwerkadapter und die Wahl des Dekoders (mit Anschlussbelegung) nehmen Sie in der globals.h vor.  Die Vergabe der Anschlusspins für gpiod, displayd ,... erfolgt in den Modulen selbst. Vermeiden Sie GPIO-Konflikte!


## WiFi-Zugangsdaten und Senderliste:

Die Zugangsdaten (wifi.txt) und die Senderliste (playlist.m3u) können wahlweise im Rootverzeichnis einer SD-Karte (bei angeschlossenem SD-Kartenlesermodul) oder in einem kleines Dateisystem im RP2040 selbst (LittleFS) abgelegt werden. Informationen zu LittleFS und wie Daten darauf hochgeladen werden finden Sie hier [https://arduino-pico.readthedocs.io/en/latest/fs.html](https://arduino-pico.readthedocs.io/en/latest/fs.html#uploading-files-to-the-littlefs-file-system)  
Benutzen Sie dafür am Besten die Arduinoerweiterung **PicoLittleFS**, welche auch im iRadioPico Repo zu finden ist.

#### WiFi 

wifi.txt (mit gleichem Inhalt wie wpa_supplicant.conf des iRadio für Raspberry) liegt als Schablone bereits im /data Verzeichnis von iRadioPico vor.

#### Senderliste

In der playlist.m3u darf pro Zeile nur die URL einer Internetradiostation stehen. Keine M3U-Metadaten oder verschachtelte Playlisten verwenden! Eine Demo-Playlist mit Internetradiosendern liegt bereits im /data Verzeichnis von iRadioPico vor.

## Modulanpassungen im System:

Nachdem Sie das passende Bedienkonzept für Ihr Internetradio festgelegt haben, können die benötigten Module (gpiod, displayd ,...) in der Hauptdatei des Projekts, der iRadioPico.ino, gestartet werden. 

Da der RP2040 eine Dualcore-MCU ist, gibt es die Möglichkeit die Arbeit auf beide Prozessorkerne (Core0 und Core1) aufzuteilen. Dazu sind in der Datei iRadioPico.ino die Methoden setup() und setup1(), sowie loop() und loop1() vorhanden.  Die setup-Methoden stellen eine Art Startdatei dar (vergleichbar der rc.local unter dem iRadio für Raspberry SoC), die einmalig nach dem Kaltstart des Systems aufgerufen werden. setup() ist dabei für die Initialisierung und das Starten der Dienste auf Prozessorkern 0 verantwortlich, setup1 für den Prozessorkern 1. 
Die Funktionen loop() und loop1() sind Dauerschleifen, die nach der jeweiligen setup-Funktion, bis zur Trennung der Spannungsversorgung durchlaufen werden. Hier erfolgt die eigentliche Datenverarbeitung getrennt nach Core0 und Core1.

Im Gegensatz zum iRadio SoC (Linux-basiert), iRadioMini (FreeRTOS), gibt es beim iRadioPico gar kein hinterläufiges Betriebssystem! Alle Prozesse werden sequenziell abgearbeitet, bitte vermeiden Sie daher in eigenen Modulen blockierende Anweisungen (delay,...) wo es nur geht und verwenden Sie stattdessen lieber Zeitmessungen nach dem millis()-Prinzip (siehe Beispielcodes). **Netzwerk-relevante Sachen (Ethernet, WiFi) können nur auf Core0 laufen!** Wir haben das iRadioPico deshalb so aufgebaut, das das netzwerkbasierte Internetradio auf Core0 läuft und grafische Sachen (displayd) wie Skalensimulationen dem Core1 vorbehalten bleiben.


Das iRadioPico ist mit seinem Beispielcode so aufgebaut, dass es problemlos und reaktionsfreudig bereits in der Standard-Codeoptimierung (Option -O) der Arduino IDE und bei 133 MHz Systemtakt läuft. Auch bisher benutzte Softwarecodecs ließen sich in der Regel problemlos so betreiben. Bei eigenen Entwicklungen sollte das die Vorgabe sein. Sollte Ihr Code jedoch etwas mehr Leistung benötigen, können Sie zunächst höhere Optimierungsstufen ausprobieren.


![buildopts](https://github.com/radiolab81/iRadioPico/blob/main/pics4www/build_optis.jpg)


Die RP2040 MCU gilt als leicht und problemlos übertaktbar, sollten Sie besonders komplexe und rechenintensive Sachen auf dem iRadioPico vorhaben, lässt sich der Prozessor auch direkt über die Arduino-Entwicklungsumgebung hochtakten.

![overclk](https://github.com/radiolab81/iRadioPico/blob/main/pics4www/overclockmcu.jpg)

Die dabei eingestellte Taktfrequenz gilt für beide MCU-Kerne!




