// Address: 0051944c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051944c(int param_1,char param_2,int param_3,int param_4,int *param_5,int param_6)

{
  int extraout_ECX;
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
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar2 = 0;
  do {
    *(undefined4 *)(param_1 + 0x1c + iVar2 * 4) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 8);
  *(bool *)(param_1 + 4) = param_3 == param_6;
  if (param_3 == param_6) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *param_5 = *param_5 + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_4 + param_3 * 4);
    *(int *)(param_4 + param_3 * 4) = param_1;
  }
  if (cVar1 != '\0') {
    FUN_00403e40();
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}

