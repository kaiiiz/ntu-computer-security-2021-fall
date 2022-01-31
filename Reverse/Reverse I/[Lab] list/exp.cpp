#include <iostream>

using namespace std;

/*
.data:0000000000004020 dword_4020      dd 22, 104, 19, 88, 123, 75, 67, 27, 0, 79, 104, 16, 17
.data:0000000000004020                                         ; DATA XREF: sub_1169+8F↑o
.data:0000000000004020                 dd 20, 57, 76, 107, 17, 4, 26, 23, 109, 110, 71, 109, 84
.data:0000000000004020                 dd 29, 22, 85, 27, 5, 94
.data:00000000000040A0 ; _DWORD dword_40A0[32]
.data:00000000000040A0 dword_40A0      dd 175, 219, 173, 224, 255, 213, 208, 151, 143, 212, 251
.data:00000000000040A0                                         ; DATA XREF: sub_1169+B2↑o
.data:00000000000040A0                 dd 159, 223, 217, 170, 213, 248, 143, 136, 149, 132, 249
.data:00000000000040A0                 dd 231, 136, 171, 153, 209, 130, 204, 212, 203, 220
*/

int a[32] = {22, 104, 19, 88, 123, 75, 67, 27, 0, 79, 104, 16, 17, 20, 57, 76, 107, 17, 4, 26, 23, 109, 110, 71, 109, 84, 29, 22, 85, 27, 5, 94};
int b[32] = {175, 219, 173, 224, 255, 213, 208, 151, 143, 212, 251, 159, 223, 217, 170, 213, 248, 143, 136, 149, 132, 249, 231, 136, 171, 153, 209, 130, 204, 212, 203, 220};

int main () {
    for (int i = 0; i < 32; i++) {
        int value1 = a[i] ^ 0x5A;
        int value2 = b[i] ^ 0xA5;
        char tmp = value1 ^ value2;
        cout << tmp;
    }
}