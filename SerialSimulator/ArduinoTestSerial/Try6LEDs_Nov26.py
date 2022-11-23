#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Nov  8 13:17:08 2019

@author: loued
"""

# testSerialSimulator.py
# This program energizes the fakeSerial simulator using example code taken
# from http://pyserial.sourceforge.net/shortintro.html
#

# import the simulator module (it should be in the same directory as this program)
import serial as serial
import time
from random import randint
import numpy as np

# Example 1  from http://pyserial.sourceforge.net/shortintro.html
    
LaserFootPulse = 6; # ms
LaserFootSpotsize = 7; # mm
LaserFootPulseCode = LaserFootPulse - 1;
LaserFootSpotsizetCode = LaserFootSpotsize - 4;

high = 8
medium = 5
trial =np.zeros([10,1])

for i in range(0,10):
    trial[i] = randint(0, 10)
    if trial[i] < 3:
        LaserFootEnergy = high;
    else:
        LaserFootEnergy = medium;
      

LaserFootEnergyCode = int((LaserFootEnergy-0.5)/0.25+1)

ser = serial.Serial('/dev/cu.usbmodem14301')  # open first serial port
print(ser.name )       # check which port was really used
print('\n Start connection...Switch to Serial NOW!')
t0=time.time();

time.sleep(2)

#firstIn =raw_input()
#if firtIn == '1':
#L111 means the laser is ON state
for i in range(1,30):
    pain = input('How much pain would you like? ')
    if pain == '1':
        ser.write(b'1,H')
        time.sleep(1)
    elif pain == '2':
        ser.write(b'2,H')
        time.sleep(1)
    elif pain == '3':
        ser.write(b'3,H')
        time.sleep(1)
    elif pain == '0':
        ser.write(b'0,H')
        time.sleep(1)
    elif pain == '4':
        ser.write(b'4,H')
        time.sleep(1)
    elif pain == '5':
        ser.write(b'5,H')
        time.sleep(1)
    elif pain == '6':
        ser.write(b'6,H')
        time.sleep(1)
        
        
        
        
#    ser.write(str([str(204).encode('utf-8') +str('L111').encode('utf-8') + str(185).encode('utf-8')]))
#    #H111 means the diode is ON state
#    ser.write(str([str(204).encode('utf-8') + str('H111').encode('utf-8')+ str(185).encode('utf-8')]))
#    #O111 means the operate is ON state, that is the letter O, not zero
#    ser.write(str([str(204).encode('utf-8') + str('O111').encode('utf-8')+ str(185).encode('utf-8')]))
#    #all three checks must be on for system to fire
#    #C is to calibrate, followed by pulse parameter d (1ms * d +1), and e, energy (which is the c parameter of the P command, from 1 to 59)
#    ser.write(str([str('C').encode('utf-8')+ str(LaserFootPulseCode).encode('utf-8') + str(LaserFootEnergyCode).encode('utf-8') + str(1).encode('utf-8') + str(185).encode('utf-8')]))
#    #P, set paramerers {abc}, pulse parameter (1ms * (a + 1)), energy parameter b, (0.25 * (b +1)), spot size c in mm (diameter)
#    ser.write(str([str('P').encode('utf-8')+ str(LaserFootPulseCode).encode('utf-8') + str(LaserFootEnergyCode).encode('utf-8') + str(LaserFootEnergyCode).encode('utf-8') + str(185).encode('utf-8')]))
#    print('!!!!!!!!! PRESS the laser foot pedal NOW !!!!!!\n')
#    #Now G is the most relevant. It is the pain delivery
#    ser.write(str([str(204).encode('utf-8')+ str('G111').encode('utf-8') + str(185).encode('utf-8') + str(LaserFootEnergyCode).encode('utf-8') + str(185).encode('utf-8')]))
#    #ser.flush()
#    print('Release Laser Foot Pedal NOW!\n');
#            
    
