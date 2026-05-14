/*In embedded systems, registers are often configured by setting specific bits. To make the code cleaner and reusable, firmware developers use macros to set fields in a register.

You are given a 16-bit control register layout:

Field	Bits	Position (LSB-first)
ENABLE	1	Bit 0
MODE	2	Bits 1–2
SPEED	3	Bits 3–5
RESERVED	2	Bits 6–7 (must be 0)
Your task is to:

Write macros to:
Set the ENABLE bit
Set the MODE field
Set the SPEED field
Read ENABLE, MODE, SPEED from input
Use the macros to pack a final 16-bit register value
RESERVED bits (6–7) must be left 0

keconcept:
struct
{
    data_type field_name : number_of_bits;
};
to work on this concepts we need two key concepts
Extracting a field (reading the bits at a specific position)
Replacing or updating that field (without touching other bits)

This is done using bit masking and bit shifting.

suppose a 16 bit control reg
Bits	Field Name
15-12	Mode
11-8	Speed
7-0	Flags

To extract Speed field (bits 8 to 11):
uint16_t speed = (reg >> 8) & 0x0F;
To update the Mode field (bits 12 to 15):
reg &= ~(0x0F << 12);         // Clear Mode bits
reg |= ((new_mode & 0x0F) << 12); // Set new Mode

where mask for a 3 bit field will be 0x07->(0b111)    */



#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


#define SET_ENABLE                (reg |= (1<<N))


struct control_reg{
    uint8_t enable : 1;
    uint8_t mode   : 2;
    uint8_t speed  : 3;
    uint8_t reserved : 2;
};



int main()
{

    control_reg *ptr;

    ptr->enable = 
}