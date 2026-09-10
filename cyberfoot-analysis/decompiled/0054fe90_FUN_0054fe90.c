// Address: 0054fe90
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0054fe90(int param_1,char param_2)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_0046dd28(param_1,0);
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | _DAT_0054ffb0;
  *(undefined1 *)(param_1 + 0x19c) = 0;
  *(undefined1 *)(param_1 + 0x170) = 1;
  *(undefined1 *)(param_1 + 0x19d) = 1;
  FUN_004659c4(param_1,0x118);
  FUN_004659e8(param_1,0x32);
  iVar1 = FUN_00550f3c(PTR_PTR_0054fa7c,1,param_1);
  *(int *)(param_1 + 0x16c) = iVar1;
  *(int *)(iVar1 + 0x3c) = param_1;
  *(code **)(iVar1 + 0x38) = FUN_0054fe4c;
  iVar1 = FUN_00550f3c(PTR_PTR_0054fa7c,1,param_1);
  *(int *)(param_1 + 0x18c) = iVar1;
  *(int *)(iVar1 + 0x3c) = param_1;
  *(code **)(iVar1 + 0x38) = FUN_0054fe4c;
  iVar1 = FUN_00528684(PTR_PTR_00525340,1);
  *(int *)(param_1 + 0x174) = iVar1;
  *(int *)(iVar1 + 0x4c) = param_1;
  *(code **)(iVar1 + 0x48) = FUN_0055070c;
  *(undefined1 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x194) = 1;
  *(undefined4 *)(param_1 + 0x198) = 1;
  *(undefined1 *)(param_1 + 0x178) = 0;
  *(undefined1 *)(param_1 + 0x188) = 0;
  if ((((*(byte *)(param_1 + 0x1c) & 0x10) != 0) &&
      ((*(byte *)(*(int *)(param_1 + 4) + 0x1c) & 2) == 0)) &&
     ((*(byte *)(*(int *)(param_1 + 4) + 0x1c) & 1) == 0)) {
    FUN_0055095c(param_1);
  }
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

