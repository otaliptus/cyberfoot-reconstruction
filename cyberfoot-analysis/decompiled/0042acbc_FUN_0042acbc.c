// Address: 0042acbc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0042acbc(int param_1,char param_2)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_00403a54(param_1,0);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  iVar1 = FUN_0042a1cc(PTR_PTR_0042893c,1);
  *(int *)(param_1 + 0xc) = iVar1;
  *(int *)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_0042b7f0;
  *(int *)(iVar1 + 0x14) = param_1 + 0x38;
  iVar1 = FUN_0042a6f8(PTR_PTR_00428ab8,1);
  *(int *)(param_1 + 0x10) = iVar1;
  *(int *)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_0042b810;
  *(int *)(iVar1 + 0x14) = param_1 + 0x38;
  iVar1 = FUN_0042a9c4(PTR_PTR_00428bb8,1);
  *(int *)(param_1 + 0x14) = iVar1;
  *(int *)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_0042b830;
  *(int *)(iVar1 + 0x14) = param_1 + 0x38;
  *(undefined4 *)(param_1 + 0x20) = 0xcc0020;
  *(undefined1 *)(param_1 + 8) = DAT_0042ad7c;
  FUN_0041e394(DAT_0066c8ec,param_1);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

