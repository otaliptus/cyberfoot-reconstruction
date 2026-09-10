// Address: 0042961c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0042961c(int param_1,char param_2,undefined2 param_3)

{
  undefined2 extraout_CX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_CX;
    cVar1 = extraout_DL;
  }
  *(undefined2 *)(param_1 + 0x20) = param_3;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

