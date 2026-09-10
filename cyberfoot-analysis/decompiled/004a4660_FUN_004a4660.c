// Address: 004a4660
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004a4660(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = ~((param_1 >> 0x18) + (param_1 >> 8 & 0xff00) + (param_1 & 0xff00) * 0x100 +
           param_1 * 0x1000000);
  for (; (param_3 != 0 && (((uint)param_2 & 3) != 0)); param_2 = param_2 + 1) {
    uVar1 = *(uint *)(&DAT_00668344 + (uVar1 >> 0x18 ^ (uint)*param_2) * 4) ^ uVar1 << 8;
    param_3 = param_3 - 1;
  }
  puVar2 = (uint *)(param_2 + -4);
  for (; 0x1f < param_3; param_3 = param_3 - 0x20) {
    uVar1 = uVar1 ^ puVar2[1];
    uVar1 = *(uint *)(&DAT_00668344 + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_00668744 + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00668b44 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00668f44 + (uVar1 >> 0x18) * 4) ^ puVar2[2];
    uVar1 = *(uint *)(&DAT_00668344 + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_00668744 + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00668b44 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00668f44 + (uVar1 >> 0x18) * 4) ^ puVar2[3];
    uVar1 = *(uint *)(&DAT_00668344 + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_00668744 + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00668b44 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00668f44 + (uVar1 >> 0x18) * 4) ^ puVar2[4];
    uVar1 = *(uint *)(&DAT_00668344 + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_00668744 + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00668b44 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00668f44 + (uVar1 >> 0x18) * 4) ^ puVar2[5];
    uVar1 = *(uint *)(&DAT_00668344 + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_00668744 + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00668b44 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00668f44 + (uVar1 >> 0x18) * 4) ^ puVar2[6];
    uVar1 = *(uint *)(&DAT_00668344 + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_00668744 + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00668b44 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00668f44 + (uVar1 >> 0x18) * 4) ^ puVar2[7];
    puVar2 = puVar2 + 8;
    uVar1 = *(uint *)(&DAT_00668344 + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_00668744 + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00668b44 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00668f44 + (uVar1 >> 0x18) * 4) ^ *puVar2;
    uVar1 = *(uint *)(&DAT_00668344 + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_00668744 + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00668b44 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00668f44 + (uVar1 >> 0x18) * 4);
  }
  for (; 3 < param_3; param_3 = param_3 - 4) {
    puVar2 = puVar2 + 1;
    uVar1 = uVar1 ^ *puVar2;
    uVar1 = *(uint *)(&DAT_00668344 + (uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_00668744 + (uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00668b44 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00668f44 + (uVar1 >> 0x18) * 4);
  }
  puVar2 = puVar2 + 1;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    uVar1 = *(uint *)(&DAT_00668344 + (uVar1 >> 0x18 ^ (uint)(byte)*puVar2) * 4) ^ uVar1 << 8;
    puVar2 = (uint *)((int)puVar2 + 1);
  }
  uVar1 = ~uVar1;
  return (uVar1 >> 0x18) + (uVar1 >> 8 & 0xff00) + (uVar1 & 0xff00) * 0x100 + uVar1 * 0x1000000;
}

