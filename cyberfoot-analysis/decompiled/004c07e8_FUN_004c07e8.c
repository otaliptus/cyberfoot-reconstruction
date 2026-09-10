// Address: 004c07e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004c07e8(int param_1,char param_2)

{
  undefined4 uVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_00403a54(param_1,0);
  uVar1 = FUN_00403a54(PTR_PTR_0041bda0,1);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = FUN_004c0068(PTR_LAB_004bfd38,1);
  *(undefined4 *)(param_1 + 4) = uVar1;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

