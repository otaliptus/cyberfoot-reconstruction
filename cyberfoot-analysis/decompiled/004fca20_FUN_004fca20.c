// Address: 004fca20
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004fca20(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  char extraout_DL;
  char cVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar3 = extraout_DL;
  }
  FUN_004fb950(param_1,0);
  iVar1 = FUN_00403c34(*(undefined4 *)(param_1 + 0x50),PTR_PTR_004edb30);
  *(int *)(iVar1 + 0x284) = param_1;
  uVar2 = FUN_00403c98(param_1,CONCAT22(extraout_var,0xffef));
  *(undefined4 *)(iVar1 + 0x280) = uVar2;
  *(int *)(iVar1 + 0x28c) = param_1;
  uVar2 = FUN_00403c98(param_1,CONCAT22(extraout_var_00,0xffee));
  *(undefined4 *)(iVar1 + 0x288) = uVar2;
  if (cVar3 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

