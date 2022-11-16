# Lab2B-part2-7

## 2. REPL
Create a REPL to let you read and write RP2040 registers from a console. You should be able to:

(1) select any 32-bit address to read/write (even if not a valid RP2020 address)


[video](https://github.com/Sharonun/Lab2B-part2-7/blob/main/part%202%20REPL/read.mp4)



(2) read/write any 32-bit value to this address

[video](https://github.com/Sharonun/Lab2B-part2-7/blob/main/part%202%20REPL/writeandread.mp4)


(3) read/write using any of the atomic bit-setting aliases and a 32-bit mask

haven't yet understood:(

## 3.Sequencer

Create a 'sequencer' that allows you to record BOOT button presses and play them on the Neopixel, and also play a sequence of read/write commands. You should be able to:

(1) **[mode "r"]**  record at a least a few seconds of button input to your RP2040 (in RAM) 

(2) **[mode "p"]**  replay a recorded sequence on your NeoPixel

(3) **[mode "l"]**  loop a recording 

(4) **[mode "s"]**  save a recording to your laptop (the Python Serial library is one way to do this) 

(5) **[mode "i"]**  play a recording from your laptop, record 'macros' (a sequence of console commands) based on keystrokes in your serial console
                    
(6) **[REPL?]**    hand-edit a list of register read/write commands on your laptop, and play them on the RP2040

(7) include multiple I/O sources in a recording, and remap among the following:

inputs: BOOT button, console commands, register read/write commands

outputs: neopixel color, neopixel brightness, data over serial, register read/write commands




## 6.pioscope

(1) modify the PIO/DMA logic analyzer example to record a timestamped trace of an RP2040-ADPS9960 exchange while the BOOT button is pressed

(2) with a partner, connect a second Qt Py to the Stemma Qt bus of an ADPS9960 that's attached to a first Qt Py running the Lab 1 Python code

(3) record a trace of this exchange

<img width="1426" alt="Screen Shot 2022-11-09 at 19 31 56" src="https://user-images.githubusercontent.com/114169032/202098795-ee9cb3fd-48f1-4aad-a023-4ed8e4eca194.png">

