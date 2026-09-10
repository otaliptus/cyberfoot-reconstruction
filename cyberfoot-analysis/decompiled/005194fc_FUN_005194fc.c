// Address: 005194fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005194fc(int param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  iVar2 = 0;
  do {
    *(undefined4 *)(param_1 + 0xc + iVar2 * 4) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 8);
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  if (cVar1 != '\0') {
    FUN_00403e40();
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}

