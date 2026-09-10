// Address: 0052a6ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0052a6ac(int param_1,char param_2)

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
  iVar1 = FUN_0042a1cc(PTR_PTR_0042893c,1);
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_0052b11c;
  FUN_0042a5c8(iVar1,"Tahoma");
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 3;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

