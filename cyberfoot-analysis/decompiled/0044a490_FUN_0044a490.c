// Address: 0044a490
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0044a490(int param_1,char param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  uVar1 = FUN_00449858(0x20);
  *(undefined1 *)(param_1 + 0x208) = uVar1;
  FUN_0046872c(param_1,0,param_3);
  FUN_004659c4(param_1,0x96);
  iVar2 = GetSystemMetrics(0x14);
  FUN_004659e8(param_1,iVar2);
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x210) = 100;
  *(undefined4 *)(param_1 + 0x218) = 10;
  *(undefined1 *)(param_1 + 0x21c) = 0;
  if (cVar3 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

