
///this program prints any characters binary,hex,dec and octal value on the screen

#include<stdio.h>
#include<conio.h>

// 1 byte == 8 bits  == [bit7] [bit6] [bit5] [bit4] [bit3] [bit2] [bit1] [bit0] format.
struct byte {
    unsigned bit0:1;		// biy0 length: 1 bit with value 0 or 1.
    unsigned bit1:1;
    unsigned bit2:1;
    unsigned bit3:1;
    unsigned bit4:1;
    unsigned bit5:1;
    unsigned bit6:1;
    unsigned bit7:1;
};


// ch and bits variables, both share the same data because they have the same location in memory.
 union {
    char ch;			// example: A
    struct byte bits;   // 0100 0001 (only bit0 and bit6 have value 1, others 0)
} key;


int main () {
    printf ("Enter value: ");
    key.ch = getch ();		// press A character

    printf ("\nASCII of \'%c\' is\n", key.ch);  // ASCII of 'A' is
    printf ("binary (base 2)   : %d%d%d%d%d%d%d%d\n", key.bits.bit7, key.bits.bit6, key.bits.bit5, key.bits.bit4,
                                                       key.bits.bit3, key.bits.bit2, key.bits.bit1, key.bits.bit0); //01000001b
    printf ("octal (base 8)    : 0%o\n", key.ch);  // 0101
    printf ("decimal (base 10) : %d\n", key.ch);   // 65
    printf ("hex (base 16)     : 0x%X\n", key.ch); // 0x41
    return 0;
}

