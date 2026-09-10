// Address: 0042d564
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042d564(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  cVar1 = FUN_00403c10(uVar3,param_2);
  if (cVar1 == '\0') {
    FUN_00403a84(uVar3);
    *(undefined4 *)(param_1 + 0xc) = 0;
    iVar2 = (**(code **)(param_2 + 0x48))(param_2,1);
    *(int *)(param_1 + 0xc) = iVar2;
    *(int *)(iVar2 + 0x14) = param_1;
    uVar3 = FUN_00403c98(param_1,CONCAT22(extraout_var,0xfffd));
    *(undefined4 *)(iVar2 + 0x10) = uVar3;
    *(int *)(iVar2 + 0x1c) = param_1;
    uVar3 = FUN_00403c98(param_1,CONCAT22(extraout_var_00,0xfffc));
    *(undefined4 *)(iVar2 + 0x18) = uVar3;
    FUN_00403c80(param_1,param_1);
  }
  return;
}

