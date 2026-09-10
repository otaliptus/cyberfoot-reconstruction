// Address: 00419e2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 * FUN_00419e2c(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  bool bVar3;
  int local_8;
  
  local_8 = param_3;
  puVar2 = (undefined4 *)FUN_00419dbc();
  if ((puVar2 != (undefined4 *)0x0) && (DAT_00419e60 != local_8)) {
    bVar1 = **(byte **)*puVar2;
    bVar3 = bVar1 < 0x1f;
    if (bVar1 < 0x20) {
      bVar3 = (*(byte *)((int)&local_8 + ((int)(bVar1 & 0x7f) >> 3)) >> (bVar1 & 7) & 1) != 0;
    }
    if (!bVar3) {
      puVar2 = (undefined4 *)0x0;
    }
  }
  return puVar2;
}

