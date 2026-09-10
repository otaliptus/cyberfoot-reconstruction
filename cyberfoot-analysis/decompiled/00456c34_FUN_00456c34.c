// Address: 00456c34
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00456c34(int param_1,char param_2)

{
  undefined1 uVar1;
  int iVar2;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar3 = extraout_DL;
  }
  uVar1 = FUN_00435ebc();
  *(undefined1 *)(param_1 + 5) = uVar1;
  iVar2 = FUN_004498ac();
  *(bool *)(param_1 + 4) = 0x5ffff < iVar2;
  FUN_00457658(param_1);
  if (cVar3 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

