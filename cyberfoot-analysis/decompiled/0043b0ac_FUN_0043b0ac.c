// Address: 0043b0ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0043b0ac(int param_1,char param_2)

{
  undefined4 uVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_00426e58(param_1,0);
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x30) = 1000;
  uVar1 = FUN_00427fa4();
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

