# 3D Printed Hand Assembly

PLA has been used for 3D printing.

### Hand Assembly
- Assembly Hand v18.stl: Hand Assembly

### Thumb Assembly
- Thumb Module v22.stl: Assembly of Thumb
- Thumb Module - Connection to the Palm.stl
- Lower Part Thumb v13.stl: with 3 bearings (2 on sides and 1 on joint to the middle limb)
- Middle Part Thumb v22.stl: with one bearing on joint to the upper limb
- Upper Part Thumb v21.stl

### Other Fingers Assembly

#### Index Finger Assembly
- Stand - others v7.stl
- Lower - Middle Limb 4 - Updated v1.stl x 2
- Upper Limb 1 - Index finger v1.stl

#### Little Finger, Ring Finger, and Middle Finger Assemblies
- Lower - Middle Limb 4 - Updated v1.stl x 2 (for each finger)
- Upper Limb 1 - Little finger - Latest v1.stl (for little finger)
- Upper Limb 1 - Index finger v1.stl (for ring finger if it is a female hand)
- Upper Limb 1 - Index finger v1.stl (for middle finger, but customization is possible)

### Assembly Instructions
- The hand is modular and customizable. Different sizes of finger limbs do not prevent the hand from working, but the connections and holes for the tubes should be properly made and placed.
- In all of the fingers, strings should be fixed to the fingertips from both sides. Strings must go through silicone tubes till the middle of the lower limb. PTFE tubes are connected to the connection module of fingers using hot glue. Then, strings must go through PTFE tubes.
- Palm, Index finger assembly, and "all the fingers connected to the connection module" assembly are assembled as shown in "Assembly Hand v18.stl".
- PTFE tubes must go through the holes inside the palm and exit from the bottom of the palm to the forearm part. Then, the thumb assembly must be connected, and after that, the motor's shell can be assembled. PTFE tubes are glued to the motor's shell, and strings are connected to the same point of motors in "Figure Copy v2.stl".

### Cost Breakdown
| Row | Material                           | Amount                        | Cost        |
|-----|------------------------------------|-------------------------------|-------------|
| 1   | PLA                                | 148.26 grams (without supports)| 4 euros     |
| 2   | Servo motors with motor gears (MG90S) | 7                             | 18.2 euros  |
| 3   | M2 bearing                         | 18                            | -           |
| 4   | M2 screw                           | 19                            | -           |
| 5   | M2.5 screw                         | 7                             | -           |
| 6   | M5 screw                           | 2                             | -           |
| 7   | M6 screw                           | 1                             | -           |
| 8   | Arduino Nano                       | 1                             | 25 euros    |
| 9   | PTFE tube                          | 2 m                           | 5 euros     |
| 10  | Silicone tube                      | 2 m                           | 7.5 euros   |
| 11  | Bearings                           | 19                            | 15 euros    |
| 12  | 3D printing                        | -                             | 10 euros    |
| 13  | Assembling                         | Upmost 2 hours                | -           |
| 14  | ASA                                | 2 g                           | -           |
| 15  | **Total**                          |                               | **84.7 euros** |
| 16  | **Working hours**                  | Upmost 2 hours of Assembly    |             |

### Code Scripts - Examples
- Example actuation codes are in the "Servo.py" file.
- For Arduino Nano, the code is in the "sketch_dec16b.ino" file.

Refer to the images "image.png" and "image2 (2).jpeg" for visual guidance.


Author
Elchin Huseynov
