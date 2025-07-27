# Corne Keyboard (CRKBD)

![Crkbd](https://user-images.githubusercontent.com/736191/40575636-6fba63a4-6123-11e8-9ca0-3f990f1f9f4c.jpg)

![Crkbd](https://user-images.githubusercontent.com/736191/40887871-0eead5dc-678a-11e8-9518-e3ad9e5d2bac.png)

# Installation

1. Install qmk and rm
```
qmk setup -y
```

2. Copy this repo to the keyboards/crkbd directory of the qmk repo:

3. Compile the firmware
```sh
compile -kb crkbd/rev4_1/standard -km mine
```

4. Reset the keyboard and mount it
5. Copy the file created in the root of the qmk repo to the keyboard flash
