// Address: 004dde70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004dde70(int param_1,char param_2,undefined4 param_3)

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
  uVar1 = FUN_00403c34(param_3,PTR_PTR_00461f94);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  FUN_00426e58(param_1,0,0);
  FUN_00426f28(*(undefined4 *)(param_1 + 0x3c),param_1);
  uVar1 = FUN_00427ee8();
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_00427ee8();
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = FUN_00427ee8();
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

