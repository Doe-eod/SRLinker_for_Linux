![grafik](https://github.com/Doe-eod/SRLinker_Linux/assets/73845354/59043d67-4540-44c8-a88c-46cb02050ad4)



# SRLinker für Linux
```
SRLinker
  von: Sven Herz
```
* Author: Sven Herz
* Getestet: Ubuntu, Kali Linux


## Beschreibung

Das Ziel von **SRLinker** ist es, eine vereinfachte und zum Teil automatisierte Möglichkeit zu bieten, mit einem Android-Gerät durch die ADB (Android Debug Bridge) zu interagieren. Unter Linux kann das Tool mit dem Terminal ausgeführt werden. Spezielle Aktionen sind teilweise nur möglich, wenn auf dem Android-Gerät Root-Rechte vorliegen.

Die folgende Auflistung soll einen guten Überblick über vorhandene Aktionsmöglichkeiten geben:




```
* Rundum-sorglos-Paket
		-> Sicherung aller verfügbarer Bereicher der nachfolgenden Kategorien

* ADB-Server startet
		-> Startet Verbindung zu Device	

* ADB-Server beenden
		-> Beendet Verbindung zum Device

* Geräteinfos
		-> Auflistung von Geräteeigenschaften

* Logdateien
		-> Alle Logs sichern
		-> Logcat anzeigen
		-> Logcat sichern
		-> Bug-Report erstellen
		-> Dumpsys anzeigen
		-> Dumpsys sichern
		-> Kernel-Logs anzeigen (root)
		-> Kernel-Logs sichern (root)
		-> Packages anzeigen
		-> Packages sichern
		-> Sicherung von Logs aus /data/log/ (root)
		-> Sicherung aller .log-Dateien (beta, root)

* Netzwerk
		-> Alles sichern
		-> netstat -tulpen
		-> netstat -r (Routing-Tabelle)
		-> ifconfig
		-> ip addr show
		-> iptables -L (Firewall-Konfigurationen IPv4, root)
		-> ip6tables -L (Firewall-Konfigurationen IPv6, root)

* Prozesse
		-> Alles sichern
		-> pstree (falls verfuegbar)
		-> ps
		-> ps -ef
		-> top (mit count)

* APKs
		-> Installation
		-> Deinstallation
		-> Update
		-> App-Sicherung (root)

* Interaktionen
		-> Geraeteneustart
		-> Shell
		-> Screenshot
		-> Telefonanruf starten
		-> Android Monkey (Apps)
		-> Android Monkey (System)

* Backup erstellen

* Backup wiederherstellen
```





## Voraussetzung

Um das Programm nutzen zu können wird die **ADB** benötigt. Dieses Tool kann mit dem folgenden Kommandozeilenbefehl nachinstalliert werden:

```
sudo apt-get install android-tools-adb 
```

Eine genauere Beschreibung kann der Webseite [Ubuntuusers]( https://wiki.ubuntuusers.de/adb/) entnommen werden.

Außerdem kann SRLinker im Moment nur verwendet werden, wenn **ein einzelnes Gerät** per USB-Kabel angeschlossen ist. Bei mehreren angeschlossenen Devices kann momentan noch nicht ausgewählt werden, mit welchem interagiert werden soll. 







## Projekt kompilieren

Es gibt mehrere Möglichkeiten, um das Projekt zu bauen. Im Folgenden wird gcc verwendet:


#### Installation aller notwendiger Pakete
```
sudo apt-get install build-essential 
```

#### Kompilieren

```
cd <Pfad zum Ordner SRLinker>

gcc -o SRLinker main.c Root.c Actions/Backup.c Actions/AuxiliaryFunctions.c Actions/DeviceInfos.c Logo/Logo.c
```

Anschließend wird eine ausführbare Dateien mit dem Namen **SRLinker** erstellt.



## Programm starten
Um das Programm zu starten, muss lediglich der folgende Befehl ausgeführt werden:

```
./SRLinker
```

Bevor mit den Aktionen gestartet werden kann, muss das Smartphone an den PC angeschlossen werden. Um zu prüfen ob das Device erkannt wird, kann **adb devices** in einem Terminal ausgeführt werden. Die Ausgabe sollte wie folgt aussehen (Zahlen-Buchstaben-Kombination kann variieren)

```
┌──(sven㉿Kali)-[~/Desktop/SRLinker]
└─$ adb devices
List of devices attached
9889db455449334550      device
```











