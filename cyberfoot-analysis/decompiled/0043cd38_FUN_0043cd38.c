// Address: 0043cd38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043cd38(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar3;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_0043cdac;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar3 = &local_8;
  FUN_004051d4(&local_c,param_1,param_3,puVar3);
  iVar2 = FUN_00405260(local_c);
  FUN_004051d4(&local_10,param_1);
  FUN_004053fc(local_10,(iVar2 + 1) - param_2,param_2,puVar3);
  FUN_00404b6c(param_3,local_8);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0043cdb3;
  puStack_24 = (undefined1 *)0x43cdab;
  FUN_00405008(&local_10,3,puVar1);
  return;
}

