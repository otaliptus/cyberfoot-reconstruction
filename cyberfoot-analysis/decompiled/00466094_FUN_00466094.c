// Address: 00466094
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00466094(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_1c [8];
  int iStack_14;
  int iStack_10;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  (**(code **)(*param_1 + 0x44))(param_1,local_1c,*param_1,iVar1,iVar2);
  (**(code **)(*param_1 + 0x84))
            (param_1,param_1[0x10],param_1[0x11],(param_1[0x13] - iStack_10) + iVar2,
             (param_1[0x12] - iStack_14) + iVar1);
  return;
}

