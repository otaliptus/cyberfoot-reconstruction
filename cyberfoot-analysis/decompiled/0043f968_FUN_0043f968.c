// Address: 0043f968
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043f968(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 local_14 [16];
  
  piVar1 = (int *)FUN_0043f518(*(undefined4 *)(param_4 + -4));
  (**(code **)(*piVar1 + 0x40))(piVar1,*(undefined4 *)(param_1 + 0x34));
  (**(code **)(*piVar1 + 0x34))(piVar1,*(undefined4 *)(param_1 + 0x30));
  iVar2 = FUN_00430280(piVar1);
  FUN_0042ab6c(*(undefined4 *)(iVar2 + 0x14),0xff00ff);
  uVar3 = (**(code **)(*piVar1 + 0x20))();
  puVar5 = local_14;
  uVar4 = (**(code **)(*piVar1 + 0x2c))();
  FUN_0041c990(0,0,uVar4,puVar5,uVar3);
  puVar5 = local_14;
  uVar3 = FUN_00430280(piVar1);
  FUN_0042af8c(uVar3,puVar5);
  uVar6 = 0;
  uVar4 = 1;
  uVar3 = FUN_00430280(piVar1);
  FUN_00474474(param_1,uVar3,0,uVar4,param_2,uVar6);
  return;
}

