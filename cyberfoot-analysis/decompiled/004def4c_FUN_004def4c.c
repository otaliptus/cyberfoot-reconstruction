// Address: 004def4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004def4c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_0041c990(0,0,param_2,param_4,0);
  iVar4 = param_4;
  uVar1 = FUN_00468538(param_1);
  uVar1 = uVar1 | 0xc10;
  uVar2 = FUN_0042b5a8(*(undefined4 *)(param_1 + 0x208));
  uVar3 = FUN_00405250(param_3);
  FUN_004d4104(uVar2,uVar3,0xffffffff,uVar1,iVar4);
  *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 6;
  *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + 2;
  return;
}

