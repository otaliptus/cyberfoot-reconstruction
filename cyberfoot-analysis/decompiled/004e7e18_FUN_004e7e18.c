// Address: 004e7e18
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e7e18(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined1 auStack_18 [12];
  int iStack_c;
  
  if (param_2 == '\0') {
    iVar1 = (**(code **)(*param_1 + 0x34))();
    iVar1 = iVar1 + param_1[0x18];
    (**(code **)(*param_1 + 0x38))(param_1,auStack_38,*param_1,param_3,iVar1);
    FUN_0040709c(param_1[0x16],param_1[0x18],uStack_30,param_3,iVar1);
  }
  else if (param_2 == '\x01') {
    (**(code **)(*param_1 + 0x38))(param_1,auStack_38);
    (**(code **)(*param_1 + 0x38))(param_1,auStack_28,*param_1,param_3,uStack_2c);
    (**(code **)(*param_1 + 0x38))(param_1,auStack_18);
    iVar1 = (**(code **)(*param_1 + 0x34))();
    FUN_0040709c(param_1[0x16],iStack_c - iVar1,uStack_20,param_3,uStack_2c);
  }
  return;
}

