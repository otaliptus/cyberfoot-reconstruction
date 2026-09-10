// Address: 004e8130
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e8130(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_3c [4];
  undefined4 local_38;
  undefined4 uStack_30;
  undefined1 local_2c [16];
  undefined1 local_1c [12];
  int iStack_10;
  
  if (param_1[6] < 1) {
    (**(code **)(*param_1 + 0x38))(param_1,local_1c);
    (**(code **)(*param_1 + 0x28))(param_1,local_1c,0);
  }
  else {
    FUN_004e7f58(param_1,auStack_3c);
    puVar2 = local_2c;
    iVar1 = (**(code **)(*param_1 + 0x34))();
    FUN_0040709c(param_1[0x16],iVar1 + param_1[0x18],param_1[0x16] + param_1[0x19],puVar2,local_38);
    (**(code **)(*param_1 + 0x28))(param_1,local_2c,0);
    (**(code **)(*param_1 + 0x30))();
    (**(code **)(*param_1 + 0x38))(param_1,local_1c);
    iVar1 = (**(code **)(*param_1 + 0x34))();
    FUN_0040709c(param_1[0x16],uStack_30,param_1[0x16] + param_1[0x19],local_2c,iStack_10 - iVar1);
    (**(code **)(*param_1 + 0x28))(param_1,local_2c,0);
  }
  FUN_004e7e18(param_1,0,local_1c);
  (**(code **)(*param_1 + 0x2c))(param_1,local_1c,0);
  FUN_004e7e18(param_1,1,local_1c);
  (**(code **)(*param_1 + 0x2c))(param_1,local_1c,1);
  return;
}

