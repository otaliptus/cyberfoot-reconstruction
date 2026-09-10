// Address: 00435c2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00435c2c(int param_1,char param_2)

{
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar1 = extraout_DL;
  }
  FUN_00403a54(param_1,0);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

