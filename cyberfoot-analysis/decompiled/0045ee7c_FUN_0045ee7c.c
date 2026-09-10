// Address: 0045ee7c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0045ee7c(int param_1,char param_2)

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
  FUN_0046872c(param_1,0);
  if ((PTR_DAT_0066b7ac[0xc] != '\0') && (*(int *)PTR_DAT_0066b790 == 2)) {
    *(undefined1 *)(param_1 + 0x184) = 0;
  }
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

