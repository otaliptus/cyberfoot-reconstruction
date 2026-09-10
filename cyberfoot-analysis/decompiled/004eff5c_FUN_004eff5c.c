// Address: 004eff5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_004eff5c(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  char extraout_DL;
  char cVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403de8();
    cVar3 = extraout_DL;
  }
  FUN_004efca0(param_1,0);
  iVar2 = (**(code **)(*param_1 + 0x138))();
  iVar2 = (**(code **)(iVar2 + 0x2c))(iVar2,1,param_1);
  param_1[0x9b] = iVar2;
  *(int **)(iVar2 + 0x214) = param_1;
  *(undefined1 *)(param_1 + 0x9a) = DAT_004f001c;
  *(undefined1 *)((int)param_1 + 0x269) = 1;
  piVar1 = (int *)param_1[0x9b];
  (**(code **)(*piVar1 + 0x68))(piVar1,param_1);
  FUN_00466128(piVar1,0);
  piVar1[0x8b] = (int)param_1;
  iVar2 = FUN_00403c98(param_1,CONCAT22(extraout_var,0xffae));
  piVar1[0x8a] = iVar2;
  piVar1[0x89] = (int)param_1;
  iVar2 = FUN_00403c98(param_1,CONCAT22(extraout_var_00,0xffaf));
  piVar1[0x88] = iVar2;
  (**(code **)(*param_1 + 0x134))();
  if (cVar3 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

