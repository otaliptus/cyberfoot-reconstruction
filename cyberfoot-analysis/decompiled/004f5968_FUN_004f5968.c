// Address: 004f5968
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004f5968(int param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  *(undefined4 *)(param_1 + 0x1014) = param_3;
  *(undefined4 *)(param_1 + 0x1008) = 0;
  *(undefined4 *)(param_1 + 0x1010) = param_4;
  *(undefined4 *)(param_1 + 0x1028) = 0;
  uVar1 = FUN_00403a54(PTR_PTR_0041b73c,1);
  *(undefined4 *)(param_1 + 0x1034) = uVar1;
  *(undefined4 *)(param_1 + 0x1044) = 0;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

