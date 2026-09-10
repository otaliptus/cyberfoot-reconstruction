// Address: 0043c84c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043c84c(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  HANDLE pvVar2;
  HANDLE pvVar3;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x43c860;
  (**(code **)(*param_1 + 0x18))();
  puStack_1c = &LAB_0043c8a4;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  pvVar2 = GetClipboardData(2);
  pvVar3 = GetClipboardData(9);
  (**(code **)(*param_2 + 0x5c))(param_2,CONCAT22(extraout_var,2),pvVar2);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = pvVar3;
  puStack_1c = &LAB_0043c8ab;
  uStack_20 = 0x43c8a3;
  (**(code **)(*param_1 + 0x14))(param_1,*param_1,puVar1);
  return;
}

