// Address: 00509968
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00509968(int param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined1 *)(param_1 + 0x10) = 2;
  *(undefined1 *)(param_1 + 0x28) = 0;
  iVar1 = FUN_0042fcb8(PTR_PTR_00429378,1);
  *(int *)(param_1 + 0x14) = iVar1;
  *(int *)(iVar1 + 0x14) = param_1;
  *(undefined1 **)(iVar1 + 0x10) = &LAB_00509ab0;
  FUN_00404ff0(param_1 + 0x18);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

