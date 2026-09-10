// Address: 0043a440
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0043a440(int param_1,char param_2)

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
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | _DAT_0043a4e0;
  FUN_004659c4(param_1,0x41);
  FUN_004659e8(param_1,0x41);
  iVar1 = FUN_0042a6f8(PTR_PTR_00428ab8,1);
  *(int *)(param_1 + 0x168) = iVar1;
  *(int *)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_0043a640;
  iVar1 = FUN_0042a9c4(PTR_PTR_00428bb8,1);
  *(int *)(param_1 + 0x16c) = iVar1;
  *(int *)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_0043a640;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

