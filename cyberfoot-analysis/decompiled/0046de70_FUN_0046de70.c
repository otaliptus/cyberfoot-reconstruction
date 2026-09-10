// Address: 0046de70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0046de70(int param_1,char param_2)

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
  FUN_0046e7a8(param_1,0);
  FUN_004663a8(param_1,0x80ffff);
  FUN_0042b4a4(*(undefined4 *)(param_1 + 0x208),*(undefined4 *)(*(int *)PTR_DAT_0066b760 + 0x80));
  FUN_0042ac88(*(undefined4 *)(*(int *)(param_1 + 0x208) + 0x14),1);
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

