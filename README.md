# Simone
Open Source Hardware Workshop to make the Simone memory game.

## Inspiration
This is a workshop originally run in cooperation with the [Portland Chapter of ChickTech](https://portland.chicktech.org/)

The original project was inspired by the [Arduino Simple Simon Says Game](https://create.arduino.cc/projecthub/Metonymy/arduino-simple-simon-says-351b9e) 

## Tools Needed
1. [Soldering Iron](https://www.amazon.com/Weller-WLC100-40-Watt-Soldering-Station/dp/B000AS28UC/ref=sr_1_6?s=hi&ie=UTF8&qid=1519754525&sr=1-6&keywords=soldering+iron)
2. [Digital Multimeter for Continuity Testing](https://www.amazon.com/Etekcity-MSR-R500-Multimeters-Electronic-Multimeter/dp/B01N9QW620/ref=sr_1_7?ie=UTF8&qid=1519754367&sr=8-7&keywords=digital+multimeter)
3. 5V Power Supply or [A Tool to Get 5V from your USB Port](https://www.ebay.com/i/292433553345?chn=ps)
4. [Wire Stripping and Cutting Tool] (https://www.amazon.com/Stripping-Gripping-Comfortable-Klein-Tools/dp/B00080DPNQ/ref=pd_bxgy_469_img_2?_encoding=UTF8&pd_rd_i=B00080DPNQ&pd_rd_r=R5R4DH3KN62FTZ9871V9&pd_rd_w=hqE2R&pd_rd_wg=Focz1&psc=1&refRID=R5R4DH3KN62FTZ9871V9)
5. [Crimper](https://www.amazon.com/Thomas-Betts-WT111M-Insulated-Terminals/dp/B0018LD2PU)

## Components Needed


## Build Instructions
1. Soldering Part 1 - Through Hole Soldering - Solder male headers onto Arduino
    - 1a. Place male headers into both sides of the tool loosely
    ![Image of SolderTool](/images/SolderTool.png)
    - 1b. Place Arduino, USB connector side up, onto male headers
    - 1c. Starting at one corner of the board, use the sweet spot of the soldering and touch the iron to the pin and the metal ring at the same time
    - 1d. While continuing to hold the iron in contact with the pin and metal ring, feed solder into the joint
    - 1e. Repeat for all pins
    - 1f. Inspect all your solder joints and compare to guide ![Image of Solder Guide](https://cdn.sparkfun.com/r/600-600/assets/c/d/a/a/9/523b1189757b7fb36e8b456b.jpg) 
    - 1g. Rework any joints that do not meet the guidelines
    - 1h. [More info on soldering](https://learn.sparkfun.com/tutorials/how-to-solder-through-hole-soldering)

2. Soldering Part 2 - Tinning method - Solder Resistor to Black wires
    - 2a. [Watch this video on how to tin wire](https://youtu.be/8jUaf394WIk)
    - 2b. Cut 4 pieces of black or brown wire about 4-5 inches long
    - 2c. Strip both sides of the wire about 1/4 inch
    - 2d. Using the tinning method shown add solder to the end of one wire
    - 2e. Trim down one side of the resistor to half length.
    - 2f. Using the tinning method shown add solder to one end of the 1kOhm resistor
    - 2g. Repeat 3 more times.
    - 2h. Test with continuity meter to verify conductivity.

3. Plug in Arduino into computer with Arduino IDE
    - 3a. Verify the power LED turns on. 
    - 3b. Select Tool -> Port -> Select the port listed as /dev/cu.wchXXXXXX
    - 3c. If you do not see anything listed as such you either have a bad USB cable or the Arduino may be bad. 
    - 3d. Upload the test sketch SimoneTest.ino to the Arduino
    - 3e.  When the Arduino IDE says “Done uploading” you are ready to unplug and move on to the next part of the build.

4.  Button test, assembly and mounting
    - 4a. Disassemble buttons into its components (button, locking nut, micro switch + LED)
    - 4b. Test each micro switch with the power supply to make sure they light up
    - 4c. If the button does not light up, pull out the LED, flip it around and retest
    - 4d. Mount the 4 buttons to the acrylic panel and secure with locking nut  
    - 4e. Plug in the blue and black micro switch to the bottom of the button. Make sure to align the micro switch so the center side tab is pointing outward.
    - 4f. This part can be hard to plug in correctly. You know you’ve done it correctly when you press the button and get a satisfying clickity clackity noise.

5. Wire Preparation
    - 5a. Cut 4 pieces of orange or red wire to the length of this sheet of paper. 
    - 5b. Cut 4 pieces of black or brown wire to the length of this sheet of paper. 
    - 5c. Gather 11 ribbon cable with female headers
    - 5d. Strip both sides of the wire from parts 5a and 5b
    - 5e. Cut one end off of each ribbon cable and strip the end.

6. Terminal Crimping
    - 6a.  Using the crimper and a spade terminal, crimp the end of the resistor and a ribbon cable together.
    - 6b. Repeat 3 more times
    - 6c. Crimp terminals to the end of 4 more black or brown wires
    - 6d.  Crimp terminals to the end of 4 red or orange wires
    - 6e. Crimp terminals to the end of 4 ribbon cables
    
7. Hooking up the power for the switches (Center Tab) 
    - 7a. Plug 4 red or orange crimped wires into one wago nut.
    - 7b. In the 5th position of the Wago nut plug in one of the ribbon cables 
    - 7c. Write down the color of ribbon cable used
    - 7d. Plug the terminal ends into the center tabs of the switches
    - 7e. Plug the remaining wire into 5V receptacle on the Arduino
    - 7f. Test with continuity meter to verify conductivity.
    - 7g. Organize your cables with a zip tie

8. Hooking up the ground wires for the LEDs (Black Side Tab)
    - 8a. Plug 4 black or brown crimped wires into one wago nut (not the ones with the resistor)
    - 8b. In the 5th position of the Wago nut plug in one of the ribbon cables 
    - 8c. Write down the color of ribbon cable used
    - 8d. Plug the terminal ends into the black tabs (opposite the blue side) of the switches
    - 8e. Plug the ribbon cable from the Wago nut into the GND receptacle on the Arduino
    - 8f. Test with continuity meter to verify conductivity.
    - 8g. Organize your cables with a zip tie

9. Hooking up the digital control for the LEDs (Blue Side Tab)
    - 9a. Plug a ribbon cable with a  spade terminal into the tab on the blue side of the switch
    - 9b. Plug the other end of the wire into pin D8 of the arduino.
    - 9c. Repeat step 9a and place the wire into pin D9 of the arduino.
    - 9d. Repeat step 9a and place the wire into pin D10 of the arduino.
    - 9e. Repeat step 9a and place the wire into pin D11 of the arduino.
    - 9f. Organize your cables with a zip tie

10. Hooking up the final end of the switch (Side Center Tab)
    - 10a. Take the 4 wires that have the resistors and place the other end of the resistor wire into the Wago nut.
    - 10b. In the 5th position of the Wago nut plug in one of the ribbon cables 
    - 10c. Connect the spade terminals to the center side tab.
    - 10d. Test with continuity meter to verify conductivity.
    - 10e. Take the remaining wires and plug them into pins D4,D5,D6, and D7. Pin D4 should be the same switch that was plugged into pin D8 in the previous operation. Pin D5 to D9, pin D6 to D10, pin D7 to D11. Use the colors labeled in the previous step to help you color match
    - 10f. Plug ribbon cable wire into the other GND port on Arduino
    - 10g. Organize your cables with a zip tie

11. Test Your Wiring Setup
    - 11a.  Plug USB cable into Arduino
    - 11b.  Plug other end of USB cable into computer.
    - 11c. Press each button. For each button pressed, you should see the button light up. If any of the lights do not light up, go to the troubleshooting section.

## Troubleshooting
