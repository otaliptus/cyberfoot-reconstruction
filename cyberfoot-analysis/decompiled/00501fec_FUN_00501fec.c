// Address: 00501fec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00501fec(int param_1,char param_2,undefined4 param_3)

{
  int iVar1;
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
  FUN_004e6f08(param_1,0,param_3);
  *(undefined4 *)(param_1 + 0x210) = param_3;
  iVar1 = FUN_004fda68(PTR_PTR_004fcbe8,1,param_1);
  *(int *)(param_1 + 0x218) = iVar1;
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0x208);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

