// Address: 0054e740
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054e740(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_18 [16];
  
  uVar1 = (**(code **)(*param_2 + 0x2c))();
  (**(code **)(*param_1 + 0x40))(param_1,uVar1);
  uVar1 = (**(code **)(*param_2 + 0x20))();
  (**(code **)(*param_1 + 0x34))(param_1,uVar1);
  iVar2 = FUN_00430280(param_1);
  FUN_0042ab6c(*(undefined4 *)(iVar2 + 0x14),0xff000006);
  iVar2 = FUN_00430280(param_1);
  FUN_0042ac88(*(undefined4 *)(iVar2 + 0x14),0);
  puVar4 = auStack_18;
  uVar1 = (**(code **)(*param_1 + 0x20))();
  uVar3 = (**(code **)(*param_1 + 0x2c))();
  FUN_0041c990(0,0,uVar3,puVar4,uVar1);
  puVar4 = auStack_18;
  uVar1 = FUN_00430280(param_1);
  FUN_0042af8c(uVar1,puVar4);
  return;
}

