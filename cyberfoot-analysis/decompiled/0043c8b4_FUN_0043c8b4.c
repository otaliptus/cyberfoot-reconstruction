// Address: 0043c8b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043c8b4(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  HANDLE pvVar2;
  HANDLE pvVar3;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x43c8c7;
  (**(code **)(*param_1 + 0x18))();
  puStack_18 = &LAB_0043c909;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  pvVar2 = GetClipboardData(3);
  pvVar3 = GetClipboardData(9);
  (**(code **)(*param_2 + 0x5c))(param_2,CONCAT22(extraout_var,3),pvVar2);
  puVar1 = puStack_18;
  *in_FS_OFFSET = pvVar3;
  puStack_18 = &LAB_0043c910;
  uStack_1c = 0x43c908;
  (**(code **)(*param_1 + 0x14))(param_1,*param_1,puVar1);
  return;
}

