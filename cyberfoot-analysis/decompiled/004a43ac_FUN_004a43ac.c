// Address: 004a43ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_004a43ac(uint param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  
  param_1 = ~param_1;
  for (; (param_3 != 0 && (((uint)param_2 & 3) != 0)); param_2 = (uint *)((int)param_2 + 1)) {
    param_1 = *(uint *)(&DAT_00667344 + (((byte)*param_2 ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
    param_3 = param_3 - 1;
  }
  for (; 0x1f < param_3; param_3 = param_3 - 0x20) {
    param_1 = param_1 ^ *param_2;
    uVar1 = *(uint *)(&DAT_00667f44 + (param_1 & 0xff) * 4) ^
            *(uint *)(&DAT_00667b44 + (param_1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00667744 + (param_1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00667344 + (param_1 >> 0x18) * 4) ^ param_2[1];
    uVar1 = *(uint *)(&DAT_00667f44 + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_00667b44 + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00667744 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00667344 + (uVar1 >> 0x18) * 4) ^ param_2[2];
    uVar1 = *(uint *)(&DAT_00667f44 + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_00667b44 + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00667744 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00667344 + (uVar1 >> 0x18) * 4) ^ param_2[3];
    uVar1 = *(uint *)(&DAT_00667f44 + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_00667b44 + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00667744 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00667344 + (uVar1 >> 0x18) * 4) ^ param_2[4];
    uVar1 = *(uint *)(&DAT_00667f44 + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_00667b44 + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00667744 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00667344 + (uVar1 >> 0x18) * 4) ^ param_2[5];
    uVar1 = *(uint *)(&DAT_00667f44 + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_00667b44 + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00667744 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00667344 + (uVar1 >> 0x18) * 4) ^ param_2[6];
    uVar1 = *(uint *)(&DAT_00667f44 + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_00667b44 + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00667744 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00667344 + (uVar1 >> 0x18) * 4) ^ param_2[7];
    param_2 = param_2 + 8;
    param_1 = *(uint *)(&DAT_00667f44 + (uVar1 & 0xff) * 4) ^
              *(uint *)(&DAT_00667b44 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00667744 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00667344 + (uVar1 >> 0x18) * 4);
  }
  for (; 3 < param_3; param_3 = param_3 - 4) {
    param_1 = param_1 ^ *param_2;
    param_2 = param_2 + 1;
    param_1 = *(uint *)(&DAT_00667f44 + (param_1 & 0xff) * 4) ^
              *(uint *)(&DAT_00667b44 + (param_1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00667744 + (param_1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00667344 + (param_1 >> 0x18) * 4);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    param_1 = *(uint *)(&DAT_00667344 + (((byte)*param_2 ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
    param_2 = (uint *)((int)param_2 + 1);
  }
  return ~param_1;
}

