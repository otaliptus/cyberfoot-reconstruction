// Address: 0052067c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0052067c(int param_1,char param_2,int param_3)

{
  int extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_005204fc(param_1,0,param_3);
  *(undefined1 *)(param_1 + 0xc) = 4;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (*(int *)(param_3 + 0x38) == 0) {
    *(int *)(param_3 + 0x38) = param_1;
  }
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

