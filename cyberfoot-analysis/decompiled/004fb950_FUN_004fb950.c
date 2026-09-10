// Address: 004fb950
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004fb950(int param_1,char param_2)

{
  char extraout_DL;
  char cVar1;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar1 = extraout_DL;
  }
  FUN_00509edc(param_1,0);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xd4) = 0;
  FUN_00404ff0(param_1 + 0xd8);
  FUN_00404ff0(param_1 + 0xdc);
  *(undefined1 *)(param_1 + 0xe0) = 0;
  FUN_0050a4a0(param_1,0);
  FUN_0050a58c(param_1,CONCAT22(extraout_var,DAT_004fb9c8));
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

