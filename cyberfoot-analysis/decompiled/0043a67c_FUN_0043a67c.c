// Address: 0043a67c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0043a67c(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  char extraout_DL;
  char cVar3;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar3 = extraout_DL;
  }
  FUN_0046dd28(param_1,0);
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | _DAT_0043a710;
  iVar1 = FUN_0042d4c0(PTR_PTR_0042902c,1);
  *(int *)(param_1 + 0x168) = iVar1;
  *(int *)(iVar1 + 0x14) = param_1;
  *(code **)(iVar1 + 0x10) = FUN_0043aac0;
  *(int *)(iVar1 + 0x24) = param_1;
  uVar2 = FUN_00403c98(param_1,CONCAT22(extraout_var,0xffc7));
  *(undefined4 *)(iVar1 + 0x20) = uVar2;
  FUN_004659e8(param_1,0x69);
  FUN_004659c4(param_1,0x69);
  if (cVar3 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

