// Address: 004f27f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004f27f8(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char extraout_DL;
  char cVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar4 = extraout_DL;
  }
  FUN_004f1c0c(param_1,0);
  piVar2 = (int *)FUN_004ef7bc(PTR_PTR_004ed714,1,param_1);
  *(int **)(param_1 + 0x28c) = piVar2;
  piVar2[0x84] = param_1;
  (**(code **)(*piVar2 + 0x68))(piVar2,param_1);
  FUN_00466128(*(undefined4 *)(param_1 + 0x28c),1);
  iVar1 = *(int *)(param_1 + 0x28c);
  *(int *)(iVar1 + 0x224) = param_1;
  uVar3 = FUN_00403c98(param_1,CONCAT22(extraout_var,0xffae));
  *(undefined4 *)(iVar1 + 0x220) = uVar3;
  *(undefined1 *)(param_1 + 0x2a8) = 1;
  piVar2 = (int *)FUN_004f2fe4(PTR_PTR_004ed3d0,1,param_1);
  *(int **)(param_1 + 0x288) = piVar2;
  (**(code **)(*piVar2 + 0x68))(piVar2,param_1);
  FUN_00466128(*(undefined4 *)(param_1 + 0x288),0);
  iVar1 = *(int *)(param_1 + 0x288);
  *(int *)(iVar1 + 0x214) = param_1;
  *(int *)(iVar1 + 0x224) = param_1;
  uVar3 = FUN_00403c98(param_1,CONCAT22(extraout_var_00,0xffaf));
  *(undefined4 *)(iVar1 + 0x220) = uVar3;
  *(undefined4 *)(param_1 + 0x2ac) = 0x15;
  *(undefined1 *)(param_1 + 0x2a9) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  FUN_004f2074(param_1);
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x294) = 0x3ff00000;
  if (cVar4 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

