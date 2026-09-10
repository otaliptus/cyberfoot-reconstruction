// Address: 0041cecc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0041cecc(int param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar3 = extraout_DL;
  }
  FUN_00403a54(param_1,0);
  uVar1 = FUN_00403a54(PTR_PTR_0041b73c,1);
  *(undefined4 *)(param_1 + 4) = uVar1;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar2 = FUN_0041cb9c(PTR_DAT_0041ca10,1,PTR_PTR_0041b84c);
  FUN_0041dec0(*(undefined4 *)(param_1 + 4),iVar2);
  *(undefined1 *)(iVar2 + 0x10) = 1;
  if (cVar3 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

