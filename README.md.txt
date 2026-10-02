# 📡 Radar Ultrason & Visualisation Temps Réel (Arduino & Processing)

Un système de radar interactif utilisant un capteur à ultrasons monté sur un servomoteur, synchronisé en temps réel avec une interface graphique inspirée des écrans aéronautiques.

## 🛠️ Matériel Utilisé
* **Arduino Mega 2560** (ou UNO)
* **Capteur Ultrasons HC-SR04**
* **Servomoteur SG90**
* Câble USB de liaison série

## 💻 Stack Technique
* **C++ / Arduino IDE** : Gestion du balayage servo et calcul de distance par écho ultrason.
* **Java / Processing 4** : Traitement du flux série UART et rendu graphique vectoriel du radar (arcs, trajectoire, détection rouge).

## ⚡ Fonctionnalités
* Balayage angulaire continu de 15° à 165°.
* Communication série synchrone à 9600 bauds.
* Traitement des données brutes en trames (`angle,distance.`).
* Effet de rémanence radar et marquage visuel des obstacles à moins de 40 cm.

## 🚀 Installation & Lancement
1. Téléverser `Arduino/Radar.ino` sur la carte Arduino.
2. Fermer le Moniteur Série de l'Arduino IDE.
3. Ouvrir `Processing/RadarVisualizer.pde` dans Processing.
4. Ajuster le port COM dans la méthode `setup()` si nécessaire et appuyer sur **Play (▶)**.