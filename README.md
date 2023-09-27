# Hands-on Practice #2 : Power Meter
# Introduction
### Purpose: to record the power consumption of facilities 
### Features : 
#### • Power spec.: 110 volt, 50~ 60 Hz
#### • Communication: WiFi
#### • User Interface: smart phone
#### • IoT platform: Blynk
![image](https://user-images.githubusercontent.com/90613715/136132225-92a0c0bb-2d03-4915-9e9a-fa984e4f25ba.png)
# Hardware
#### • General / Schematic
#### • Wiring
#### • Components
#### • Bill of Material
#### • Box dimension
#### • Board dimension
#### • Power meter (latest version)
#### • Reception box
![image](https://user-images.githubusercontent.com/90613715/136133302-202be38b-4dc8-4211-bece-c15f3057daee.png)
# General
### Schematic
![image](https://user-images.githubusercontent.com/90613715/136133499-a0e3fc6c-3aff-4a03-b974-cb3135764106.png)
### Main Parts
![image](https://user-images.githubusercontent.com/90613715/136133569-9782e118-14ac-4c2b-9839-01e3d894d1dd.png)
# Wiring
### MCU – Power Meter – Outlet (Socket + C.T.)
![image](https://user-images.githubusercontent.com/90613715/136133660-01e22bf0-086d-40cf-b184-5b2bda56c133.png)
# Components
#### Power meter box
#### Receptacle box (socket)
#### (* Tools)
![image](https://user-images.githubusercontent.com/90613715/136133756-a2c4c62b-c92c-4271-a9cf-ec4d8aa0ef12.png)
# Bill of Material (Power meter box)
### BOM
![image](https://user-images.githubusercontent.com/90613715/136136100-d152e3bf-8624-4021-9bc3-dae0cb96fd7f.png)
# Box dimension
### Plastic box
![image](https://user-images.githubusercontent.com/56021651/138241407-6d6439bf-e208-4023-9ed6-57efd2259d37.png)

# Board dimension
### Power meter & MCU
![image](https://user-images.githubusercontent.com/90613715/136134951-5bf0000c-f26d-489f-8a19-0bf996fb4733.png)
# Power meter (latest version)
![image](https://user-images.githubusercontent.com/90613715/136135880-b79e0e63-33aa-4641-a836-c807ebfe48be.png)
#### https://item.taobao.com/item.htm?spm=a1z09.2.0.0.77c52e8d1d0eZf&id=596189990505&_u=j2lej2ok0dab
# Wiring diagram
### 100A type
![100A type](https://user-images.githubusercontent.com/90613715/136135847-424162a5-fef3-4289-920b-60b46bfd5dc4.png)
### assembly
![image](https://user-images.githubusercontent.com/90613715/136136192-00641e13-41f6-482b-b21b-d827607f0a49.png)
#### https://item.taobao.com/item.htm?spm=a1z09.2.0.0.46822e8dMvP1SW&id=561267884554&_u=k2lej2ok22fe
# Receptacle box
### Bill of materials
![image](https://user-images.githubusercontent.com/90613715/136136262-b74e3f8c-1c9d-4251-8b23-a04d8a48885c.png)
# Tools
### Tool list 
![image](https://user-images.githubusercontent.com/90613715/136136446-796c7945-8a4a-4a01-a7d9-c8521ce933b5.png)
# Hardware assembling
### Power meter box process 
![image](https://user-images.githubusercontent.com/90613715/136136494-5dea65e0-a5a6-4411-8c24-2222293e58f2.png)
# Software
### MCU program
#### • Arduino IDE
#### • Adding D1 board(EPS-8266) or D1 mini
#### • Power meter library
### Blynk APP
#### • Apply account
#### • User Interface Setting 
#### https://www.arduino.cc/en/software/
![image](https://user-images.githubusercontent.com/90613715/136136652-4d483016-e5d3-4e6a-ae5a-0ff286c6a57e.png)
# MCU program (Arduino IDE)
### Visit Arduino Home:https://www.arduino.cc/
### Download and Install IDE 
![image](https://user-images.githubusercontent.com/90613715/136136811-6ec43f38-dc96-4a72-b733-6cb54779a743.png)
# Adding D1 board
### Preferences
![image](https://user-images.githubusercontent.com/90613715/136137227-869b415b-4267-47e0-82eb-20b4f56cd149.png)
### • Create direction (folder)
### • Additional Boards Manager URLs:
![Adding D1 board](https://user-images.githubusercontent.com/90613715/136137356-2b111d4f-9d0a-40d4-93f7-a4b5822519b5.png)
#### http://arduino.esp8266.com/stable/package_esp8266com_index.json
# Include Library
### ADD-libraries (given in class)
### Blynk_Release_v0.4.4 (subject to revise)
### PZEM004T-master (power meter)
![image](https://user-images.githubusercontent.com/90613715/136137500-421b0947-d72b-4336-a5f9-03290ea2cf63.png)
![image](https://user-images.githubusercontent.com/90613715/136137528-e9a0f1c8-8ebc-4be4-93e3-73952a9e44ae.png)
### Make sure all libraries installed 
![image](https://user-images.githubusercontent.com/90613715/136137591-fc47061f-ef12-4bf2-9d41-a978de395da2.png)
#### http://help.blynk.cc/en/articles/512105-how-to-install-blynk-library-for-arduino-ide
# Board Management
### Select WEMOS D1 D2 & Mini
![image](https://user-images.githubusercontent.com/90613715/136137703-b16dc503-77f5-4ca5-9b64-8c1aa63df06a.png)
# Select version
![image](https://user-images.githubusercontent.com/90613715/136137734-69b77d4d-990a-4e4e-aa4c-538c84cff0f5.png)
# Downloading
![image](https://user-images.githubusercontent.com/90613715/136137757-3d42dad3-74df-4d64-8111-6f09dc399356.png)
# Board setting
![image](https://user-images.githubusercontent.com/90613715/136137786-1b7dcb8d-c9e7-4dae-870f-c0717c141fb5.png)
# Port setting
### Flash / Speed / Port
![image](https://user-images.githubusercontent.com/90613715/136137824-dea2a259-f6c4-4555-96f9-12e4deabbd01.png)
# USB-Serial port checking
![image](https://user-images.githubusercontent.com/90613715/136137848-6b0a5751-4abe-48d8-870d-c932220ca358.png)
# Write Sketch to D1 Board
![136138097-7c533699-a672-43c7-9111-8aed1d91c32d](https://github.com/iiotntust/powermeter/assets/56021651/cc05644d-0939-4379-8bc0-7b7ea82e188f)

### Blynk_Mighty_D1 (given in class)
![Write Sketch to D1 Board](https://user-images.githubusercontent.com/90613715/136137966-cb889366-4588-4546-9dcc-af329039b466.png)
# Confirmation
![Confirmation](https://user-images.githubusercontent.com/90613715/136138097-7c533699-a672-43c7-9111-8aed1d91c32d.png)
# Blynk APP
### Getting start
### Download APP
### Check auth token
### User Interface Setting
### Running
![image](https://user-images.githubusercontent.com/90613715/136138169-7864a0ac-49e2-46f9-ab43-97b057afdb9f.png)
#### https://blynk.io/
# Getting start
![image](https://user-images.githubusercontent.com/90613715/136138233-f1a48c09-c294-44c9-b2ca-fb0d01ac7462.png)
#### https://blynk.io/en/getting-started
![image](https://user-images.githubusercontent.com/90613715/136138267-03eaa397-3994-4be5-958b-9f0ab539aea2.png)
# Download APP
![image](https://user-images.githubusercontent.com/90613715/136138334-aa6cee9e-1f59-4601-8e19-06641a613b4e.png)
# Install library - arduino (Check Auth Token )
![image](https://user-images.githubusercontent.com/90613715/136138365-7da43f3e-5417-4f9a-bffe-238f42eb1f2f.png)
# Connect hardware
![image](https://user-images.githubusercontent.com/90613715/136138409-0ae7aefd-ef6f-4e45-8a47-d71d36fd46ad.png)
# Running
![image](https://user-images.githubusercontent.com/90613715/136138440-3f38078d-2bf1-4a75-8122-edc31f9049b4.png)
# Meter functionality validation 
<img width="729" alt="image" src="https://user-images.githubusercontent.com/56021651/191392121-bc5361a9-94f0-474b-bc02-12f06b4889ff.png">

