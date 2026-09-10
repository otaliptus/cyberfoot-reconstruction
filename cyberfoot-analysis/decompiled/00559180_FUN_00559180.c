// Address: 00559180
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00559180(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_1c [8];
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = -1;
  local_c = param_3;
  local_8 = param_2;
  iVar2 = FUN_0041edb0(*(undefined4 *)(param_1 + 0xbc));
  if (-1 < iVar2 + -1) {
    iVar4 = 0;
    do {
      local_14 = FUN_0055cec0(*(undefined4 *)(param_1 + 0xbc),iVar4);
      iVar3 = FUN_0055cec0(*(undefined4 *)(param_1 + 0xbc),iVar4);
      if (*(char *)(iVar3 + 0x54) != '\0') {
        FUN_004070b8(local_8,local_c,local_1c);
        cVar1 = FUN_00557a94(local_14 + 0xe,local_1c);
        if (cVar1 != '\0') {
          return iVar4;
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return local_10;
}

