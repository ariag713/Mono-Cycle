*This is the logbook for the project*
# Logbook

## Mono-Cycle

**09/10/24**
- Project definition for Monocycle created

**09/16/24**
- Monocycle are carefully selected for the major moving parts

**09/24/24**
- Schematic for the microcontroller created 

**09/27/24**
- DC motors and H-bridge motor driver were purchased and arrived for implementation into the microcontroller for testing.
           
**10/08/24**
- Started testing the basic movements of the motors to see if they function (forward, backward, turning left, and right) using a serial monitor.
           
**10/15/24**
- After all movement tests we could conclude that it passes all tests successfully.

**10/17/24**
- Schematic is updated to include the new additions to the circuit such as booster module, HC- 05 Bluetooth module, and type-C battery charger
           
**10/21/24**
- a booster module was implemented to boost our voltage to 10 V with a voltage regulator,  and a battery charger

**10/29/24**
-  Start the look-like design of the project model in Solidworks and the rest of the material selection.

**11/04/24**
- Implementation of an HC-05 Arduino Bluetooth module to control the motors wirelessly with an application.
- running a code for implementing the the ls298n driver to allow the PWM functionality of the dc motors
           
**11/10/24**
- Starting tests with the HC-05, configuring the serial of the module and the Arduino.
- Ran a functionality test on the module, however. we ran into problems  with the booster not supplying enough current
- possibly replacing the battery supply with a higher current battery (6 AA batterys in series)

**11/12/24**
- design for the monowheel housing is created, however, after some discussion and peer reviewing will most likely be redesigned
- To supply the motor driver with enough current, the power supply will be replaced with a alternate battery pack of 6 AA batteries
   
**11/19/24**
- After some reviewing, we will order and attach a gear box to the DC motor to slow down the monowheel with better speed control.
- Resulting in the redesign of the housing to fit this geared motor.

**11/26/24 to 11/28/24**
- Monowheel design housing is 3d printed into modular parts for ease of access and troubleshooting
- The report for the Monowheel was created and worked on slightly (to be continued until full assembly of Monowheel)
  
**12/03/24 to 12/10/24**
- the gearbox motors arrive on time for us to execute our final prototype
- We then utilize the soldering station in the MakerSpace to do some final assembly the Monowheel construct
- Upon noticing some error in the code we troubleshoot the issue put the new code into practice

**12/17/24**
- Monowheel is fully assembled and after testing it passes all of them without any issue
  * Test 1 : Mechanical Functionality:  ----PASS----
  * Test 2 : Turning Radius and Control: ----PASS----
  * Test 3 : Bluetooth Connectivity and Stability: ----PASS----
