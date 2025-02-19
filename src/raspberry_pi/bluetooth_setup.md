command line commands:
hciconfig - to check bluetooth receiver is active on raspberry pi side
hcitool scan - to search for ip address of arduino's bluetooth module

UI steps:
- Search for bluetooth devices in range. 
- Pair and then connect the serial monitor of bluetooth module with pi (DC-HC-05*).
- Check for rfcomm connection number and update connection number (eg. /dev/rfcomm0) in script accordingly.