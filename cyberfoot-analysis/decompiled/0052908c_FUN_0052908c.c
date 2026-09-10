// Address: 0052908c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0052908c(int param_1,char param_2)

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
  iVar1 = FUN_00528684(PTR_PTR_00525340,1);
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(iVar1 + 0x4c) = param_1;
  *(code **)(iVar1 + 0x48) = FUN_0052a120;
  iVar1 = FUN_00528684(PTR_PTR_00525340,1);
  *(int *)(param_1 + 0x10) = iVar1;
  *(int *)(iVar1 + 0x4c) = param_1;
  *(code **)(iVar1 + 0x48) = FUN_0052a120;
  iVar1 = FUN_0042a1cc(PTR_PTR_0042893c,1);
  *(int *)(param_1 + 0x1c) = iVar1;
  *(int *)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_0052a12c;
  FUN_00404928(param_1 + 8,"%.0f%%");
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x20) = 2;
  iVar1 = FUN_0042a1cc(PTR_PTR_0042893c,1);
  *(int *)(param_1 + 0x34) = iVar1;
  *(int *)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_0052a12c;
  FUN_0042a5c8(*(undefined4 *)(param_1 + 0x1c),"Tahoma");
  FUN_0042a5c8(*(undefined4 *)(param_1 + 0x34),"Tahoma");
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x39) = 1;
  *(undefined1 *)(param_1 + 0x3a) = 1;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

