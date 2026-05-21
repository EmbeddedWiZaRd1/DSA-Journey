/*You receive a 6-byte data packet from a peripheral interface (e.g., UART or I2C). The byte stream format is:

Byte Index	Field	Size
0	start	1
1	command	1
2–3	data	2
4	crc	1
5	end	1
You are given the packet as an array: uint8_t buffer[6]. Your task is to extract and print each field as integer values


learnig:
how to pack two 8bits into a 16 bit register????still to learn...line 33*/


#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint8_t start;
    uint8_t command;
    uint16_t data;
    uint8_t crc;
    uint8_t end;
} Packet;

void print_packet_fields(uint8_t *buffer) {
    // Overlay struct and print values
    Packet p;
    Packet* pointer=&p;
    pointer->start=buffer[0];
    pointer->command=buffer[1];
    pointer->data=(buffer[2]<<8)|buffer[3];
    pointer->crc=buffer[4];
    pointer->end=buffer[5];

    
    printf("\nStart: %u",pointer->start);
    printf("\nCommand: %u",pointer->command);
    printf("\nData: %u",pointer->data);
    printf("\nCRC: %u",pointer->crc);
    printf("\nEnd: %u",pointer->end);
}

int main() {
    uint8_t buffer[6];
    for (int i = 0; i < 6; i++) {
        scanf("%hhu", &buffer[i]);
    }
    print_packet_fields(buffer);
    return 0;
}